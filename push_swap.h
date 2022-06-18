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

int		input_check(int argc, char **argv);
int		ft_strcmp(const char *str1, const char *str2);
int		*get_pattern(int *sorted_set, int *unsorted_set);
int		*parse_args(int argc, char **argv);
void	print_pattern(int *sort_pattern);
void	free_sets(int **unsorted_set, int **sorted_set, int **sort_pattern);
int		*iappendf(int *array, int nbr);
void	ijoin(int *sorted_set, int *q0, int *q1);

void	swap(int *stack, int n);
void	rotate(int *stack, int n);
void	rrotate(int *stack, int n);
void	push(int *donor_stack, int *recipient_stack, int n_a, int n_b);

#endif
