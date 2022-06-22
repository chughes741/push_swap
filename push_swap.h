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

typedef struct t_array {
	int			*args;
	unsigned	*stack_a;
	unsigned	*stack_b;
	unsigned	n_a;
	unsigned	n_b;
	char		*moves;
}				t_array;

void		push_a(t_array *array);
void		push_b(t_array *array);
void		rotate_a(t_array *array);
void		rotate_b(t_array *array);
void		rotate_both(t_array *array);
void		swap_a(t_array *array);
void		swap_b(t_array *array);
void		swap_both(t_array *array);
void		r_rotate_a(t_array *array);
void		r_rotate_b(t_array *array);
void		r_rotate_both(t_array *array);

int			input_check(int argc, char **argv);
int			*parse_args(int argc, char **argv);
void		hash_array(unsigned *array, unsigned n);
void		list_moves(t_array *array);
unsigned	*itou(int *array, int n);
int			ft_strcmp(const char *str1, const char *str2);

#endif
