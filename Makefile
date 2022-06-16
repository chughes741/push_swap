

NAME	=	push_swap.out
LIBFT	=	libftprintf.a
LDIR	=	ft_printf/

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
AFLAGS	=	-rs
RM 		=	rm -rf

SRCS	=	ft_strcmp.c		get_pattern.c	input_check.c	parse_args.c	\
			print_pattern.c	push_swap.c		sort_args.c
OBJS	=	$(SRCS:.c=.o)


# Targets
all: $(LDIR)/$(LIBFT) $(NAME) clean

$(NAME): $(OBJS) $(LDIR)/$(LIBFT)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDIR)$(LIBFT)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

$(LDIR)/$(LIBFT):
	@$(MAKE) -C $(LDIR)

bonus: all

# Removes objects
clean:
	@$(RM) $(OBJS)
	@$(RM) $(LDIR)*.o
	@$(RM) $(LDIR)libft/*.o
	@$(RM) *.dSYM

# Removes objects and executables
fclean: clean
	@$(RM) $(NAME)
#	@$(RM) $(LDIR)$(LIBFT)
#	@$(RM) $(LDIR)libft/libft.a

# Removes objects and executables and remakes
re: fclean all

# Test function used with main
test: $(LDIR)/$(LIBFT)
	@clear
	@$(CC) $(CFLAGS) -o test $(SRCS) test_printf.c $(LDIR)$(LIBFT)
	@./test
	@$(RM) test
