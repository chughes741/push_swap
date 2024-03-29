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

# include "../libft/include/libft.h"
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
#include <unistd.h> // TODO remove before submission

typedef int *array;

typedef struct t_data {
	array	args;
	int		size;
	int		chunk;
	array	stack_a;
	int		top_a;
	int		n_a;
	array	stack_b;
	int		top_b;
	int		n_b;
}			t_data;

// Movements for the int array
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

// Setup and background infrastructure
void	input_check(char **argv);
t_data	*get_data(void);
void	set_up(char **argv);
array	parse_args(int argc, char **argv);
void	hash_array(void);
void	list_moves(void);
void	del_data(void);
int		count_args(char **argv);

// Sorting tools
bool	finished(void);
int		lowest_a(void);
int		lowest_b(void);
int		highest_a(void);
int		highest_b(void);

// String tools
int		ft_strcmp(const char *str1, const char *str2);

// DEBUG and testing
void	print_stacks(void); // TODO rmv bf submission

#endif
