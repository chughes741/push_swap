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
int		*sort_args(int argc, int *unsorted_set);


#endif
