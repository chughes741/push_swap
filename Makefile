

NAME	=	push_swap
LIBFT	=	libftprintf.a
LDIR	=	ft_printf/

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
AFLAGS	=	-rs
RM 		=	rm -rf

SRCS	=	*.c
OBJS	=	$(SRCS:.c=.o)


# Targets
all: $(LDIR)/$(LIBFT) $(NAME)

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

# Removes objects and executables
fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)
	@$(RM) $(LDIR)$(LIBFT)
	@$(RM) $(LDIR)libft/libft.a

# Removes objects and executables and remakes
re: fclean all



# Removes debug files
dclean: fclean
	@$(RM) *.dSYM

# Test function used with main
test: $(LDIR)/$(LIBFT)
	@clear
	@$(CC) $(CFLAGS) -o test $(SRCS) test_printf.c $(LDIR)$(LIBFT)
	@./test
	@$(RM) test
