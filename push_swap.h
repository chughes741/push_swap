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

typedef struct t_data {
	int		*args;
	int		*stack_a;
	int		*stack_b;
	int		n_a;
	int		n_b;
	char	*moves;
}			t_data;

void	push_a(t_data *var);
void	push_b(t_data *var);
void	rotate_a(t_data *var);
void	rotate_b(t_data *var);
void	rotate_both(t_data *var);
void	swap_a(t_data *var);
void	swap_b(t_data *var);
void	swap_both(t_data *var);
void	r_rotate_a(t_data *var);
void	r_rotate_b(t_data *var);
void	r_rotate_both(t_data *var);

void	var_init(t_data *var, int argc, char **argv);
void	input_check(int argc, char **argv);
int		*parse_args(int argc, char **argv);
void	hash_array(t_data *var);
void	list_moves(t_data *var);
int		ft_strcmp(const char *str1, const char *str2);

#endif
