/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:19:18 by chughes           #+#    #+#             */
/*   Updated: 2022/06/14 21:19:29 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_data {
	int		*args;
	int		size;
	int		*stack_a;
	int		*stack_b;
	int		n_a;
	int		n_b;
	char	*moves;
}			t_data;

void	push_a(void);
void	push_b(void);
void	rotate_a(bool both);
void	rotate_b(bool both);
void	rotate_both(void);
void	swap_a(bool both);
void	swap_b(bool both);
void	swap_both(void);
void	r_rotate_a(bool both);
void	r_rotate_b(bool both);
void	r_rotate_both(void);

void	input_check(int argc, char **argv);
void	set_up(int argc, char **argv);
t_data	*get_data(void);
int		*parse_args(int argc, char **argv);
void	hash_array(void);
void	list_moves(void);
void	del_data(void);


bool	finished(void);
int		lowest_a(void);
int		lowest_b(void);
int		highest_a(void);
int		highest_b(void);

int		ft_strcmp(const char *str1, const char *str2);
char	*ft_str_prepend(char *s1, char *s2);

// DEBUG and testing
void	print_stacks(void); // TODO rmv bf submission

#endif
