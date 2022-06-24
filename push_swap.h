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

void	push_a(void);
void	push_b(void);
void	rotate_a(void);
void	rotate_b(void);
void	rotate_both(void);
void	swap_a(void);
void	swap_b(void);
void	swap_both(void);
void	r_rotate_a(void);
void	r_rotate_b(void);
void	r_rotate_both(void);

void	input_check(int argc, char **argv);
void	set_up(int argc, char **argv);
t_data	*get_data(void);
int		*parse_args(int argc, char **argv);
void	hash_array(void);
void	list_moves(void);
int		ft_strcmp(const char *str1, const char *str2);

#endif
