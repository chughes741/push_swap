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
	unsigned	*u_args;
	unsigned	*stack_a;
	unsigned	*stack_b;

}				t_array;

void		swap(int *stack, int n);
void		rotate(int *stack, int n);
void		rrotate(int *stack, int n);
void		push(int *donor_stack, int *recipient_stack, int n_a, int n_b);

int			input_check(int argc, char **argv);
int			*parse_args(int argc, char **argv);

unsigned	*itou(int *array, int n);
int			ft_strcmp(const char *str1, const char *str2);

#endif
