
# Hides calls
VERBOSE	=	FALSE
ifeq ($(VERBOSE),TRUE)
	HIDE =
else
	HIDE = @
endif

# Compiler and flags
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
DFLAG	=	-D DEBUG -Wall -Werror -Wextra
TFLAG	=	-pg -Wall -Werror -Wextra
RM		=	rm -rf

# Dir and file names
NAME	=	push_swap
DEBUG	=	push_swap_debug
TEST	=	push_swap_test
LIBFT	=	libft.a
LDIR	=	libft/
SRCDIR	=	src/
OBJDIR	=	bin/
SRCS	=	$(wildcard $(SRCDIR)*.c) # Change to file names before sub
OBJS	=	$(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRCS))

# Test arguments
T_ARGS	= 	107 926 126 -75 -14 -12 -16 205 715 -46\
			929 527 966 136 -84 -32 -27 -66 959 165

# Targets
all: $(LDIR)/$(LIBFT) $(NAME)

$(NAME): $(OBJS) $(LDIR)/$(LIBFT)
	$(HIDE)$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDIR)$(LIBFT)

$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.c
	$(HIDE)$(CC) $(CFLAGS) -c $< -o $@

$(LDIR)/$(LIBFT):
	$(HIDE)$(MAKE) -C $(LDIR)

# Removes objects
clean:
	$(HIDE)$(RM) $(OBJS)

# Removes objects and executables
fclean: clean
	$(HIDE)$(RM) $(TEST)
	$(HIDE)$(RM) $(DEBUG)
	$(HIDE)$(RM) $(NAME)
	$(HIDE)$(RM) *.dSYM
	$(HIDE)$(RM) *.out

# Removes objects and executables and remakes
re: fclean all


# Runs with debugging code active
$(DEBUG): fclean
	$(HIDE)$(CC) $(DFLAG) -o $(DEBUG) $(SRCS) $(LDIR)$(LIBFT)

debug: $(DEBUG)
	$(HIDE)./$(DEBUG) $(T_ARGS)


# Generates test file to time program and leak check
$(TEST): fclean
	$(HIDE)$(CC) $(TFLAG) -o $(TEST) $(SRCS) $(LDIR)$(LIBFT)

leak: $(TEST)
	$(HIDE)clear
	$(HIDE)valgrind				\
		--leak-check=full		\
		--track-origins=yes		\
		--show-leak-kinds=all	\
		--read-var-info=yes		\
		--read-inline-info=yes	\
		./$(TEST) $(T_ARGS)

time: $(TEST)
	$(HIDE)clear
	$(HIDE)./$(TEST) $(T_ARGS)
	$(HIDE)gprof -b -p $(TEST) gmon.out
	$(MAKE) fclean

