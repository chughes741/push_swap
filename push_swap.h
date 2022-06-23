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

typedef struct t_array {
	int		*args;
	int		*stack_a;
	int		*stack_b;
	int		n_a;
	int		n_b;
	char	*moves;
}			t_array;

void	push_a(t_array *var);
void	push_b(t_array *var);
void	rotate_a(t_array *var);
void	rotate_b(t_array *var);
void	rotate_both(t_array *var);
void	swap_a(t_array *var);
void	swap_b(t_array *var);
void	swap_both(t_array *var);
void	r_rotate_a(t_array *var);
void	r_rotate_b(t_array *var);
void	r_rotate_both(t_array *var);

t_array	*var_init(t_array *var, int argc, char **argv);
void	input_check(int argc, char **argv);
int		*parse_args(int argc, char **argv);
void	hash_array(t_array *var);
void	list_moves(t_array *var);
int		ft_strcmp(const char *str1, const char *str2);

#endif
