
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
AFLAGS	=	-rs
DEBUG	=	-D DEBUG
RM		=	rm -rf

# Dir and file names
NAME	=	push_swap
TEST	=	push_swap_test
LIBFT	=	libftprintf.a
LDIR	=	ft_printf/
SRCDIR	=	src/
OBJDIR	=	bin/
SRCS	=	$(wildcard $(SRCDIR)*.c) # Change to file names before sub
OBJS = $(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRCS))

# Test arguments
T_ARGS	= 	107 926 126 -75 -14 -12 -16 205 715 -46\
			929 527 966 136 -84 -32 -27 -66 959 165\

# Targets
all: $(LDIR)/$(LIBFT) $(NAME)

$(NAME): $(OBJS) $(LDIR)/$(LIBFT)
	$(HIDE)$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDIR)$(LIBFT)

$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.c
	$(HIDE)$(CC) $(CFLAGS) -c $< -o $@

$(LDIR)/$(LIBFT):
	$(HIDE)$(MAKE) -C $(LDIR)

# Compiles bonus program: checker
bonus: all

# Removes objects
clean:
	$(HIDE)$(RM) $(OBJS)
	$(HIDE)$(RM) $(LDIR)*.o
	$(HIDE)$(RM) $(LDIR)libft/*.o

# Removes objects and executables
fclean: clean
	$(HIDE)$(RM) $(NAME)
	$(HIDE)$(RM) *.dSYM
#	$(HIDE)$(RM) $(LDIR)$(LIBFT)
#	$(HIDE)$(RM) $(LDIR)libft/libft.a

# Removes objects and executables and remakes
re: fclean all

test:
	$(HIDE)clear
	$(HIDE)$(CC) $(DEBUG) $(CFLAGS) -o $(TEST) $(SRCS) $(LDIR)$(LIBFT)
	$(HIDE)./$(TEST) $(T_ARGS)
	$(HIDE)$(RM) $(TEST)

val: re
	$(HIDE)clear
	$(HIDE)valgrind				\
		--leak-check=full		\
		--track-origins=yes		\
		--show-leak-kinds=all	\
		--read-var-info=yes		\
		--read-inline-info=yes	\
		./$(NAME) $(T_ARGS)
