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

typedef struct t_array {
	int			*i_args;
	unsigned	size;
	unsigned	*stack_a;
	unsigned	*stack_b;
	unsigned	n_a;
	unsigned	n_b;
	unsigned	*slow_moves;
	unsigned	*fast_moves;
}				t_array;

void		swap(unsigned *stack, unsigned n);
void		rotate(unsigned *stack, unsigned n);
void		rrotate(unsigned *stack, unsigned n);
void		push(unsigned *donor_stack, unsigned *recipient_stack, t_array *a);
int			input_check(int argc, char **argv);
int			*parse_args(int argc, char **argv);
void		hash_array(unsigned *array, unsigned n);
void		list_moves(t_array *array);
void		optimize_moves(t_array *array);
unsigned	*itou(int *array, int n);
int			ft_strcmp(const char *str1, const char *str2);
unsigned	*uijoin(unsigned **list, unsigned move);
void		print_moves(unsigned *moves);

#endif
