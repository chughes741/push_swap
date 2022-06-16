/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:17:04 by chughes           #+#    #+#             */
/*   Updated: 2022/06/15 15:17:06 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max_bits(int *unsorted_set)
{
	unsorted_set[0] = 0;
	return (0);
}

int	*radix_sort(int *unsorted_set, int max_bits)
{
	unsorted_set[0] = max_bits;
	return (unsorted_set);
}

int	*sort_args(int argc, int *unsorted_set)
{
	int	*sorted_set;
	int	max_bits;

	sorted_set = ft_calloc(argc, sizeof(int));
	max_bits = find_max_bits(unsorted_set);
	sorted_set = radix_sort(unsorted_set, max_bits);
	return (sorted_set);
}
