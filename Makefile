
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
RM		=	rm -rf

# Dir and file names
NAME	=	push_swap.out # Remove .out before sub
LIBFT	=	libftprintf.a
LDIR	=	ft_printf/
SRCDIR	=	src/
OBJDIR	=	bin/
SRCS	=	$(wildcard $(SRCDIR)*.c) # Change to file names before sub
OBJS = $(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRCS))

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

# Removed debug files
dclean:
	$(HIDE)$(RM) *.dSYM

# Removes objects
clean: dclean # Remove dclean before sub
#	$(HIDE)$(RM) $(OBJS)
#	$(HIDE)$(RM) $(LDIR)*.o
#	$(HIDE)$(RM) $(LDIR)libft/*.o

# Removes objects and executables
fclean: clean
	$(HIDE)$(RM) $(NAME)
#	$(HIDE)$(RM) $(LDIR)$(LIBFT)
#	$(HIDE)$(RM) $(LDIR)libft/libft.a

# Removes objects and executables and remakes
re: fclean all

test: all
	$(HIDE)clear
	$(HIDE)./$(NAME) 0 9 8 7 6 5 1 2 3 412 421 901 -2340 -34 3441 -2 42342
	$(HIDE)make fclean
