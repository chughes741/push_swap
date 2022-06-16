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

// Binary Radix sort of an int array into another array
static void	radix_sort(int n, int *sorted_set, int *unsorted_set, int max_bits)
{
	int	*q0;
	int	*q1;
	int	mask;
	int	j;

	q0 = ft_calloc(1, sizeof(int));
	q1 = ft_calloc(1, sizeof(int));
	mask = -1;
	while (++mask < (8 * sizeof(int)))
	{
		i = -1;
		while (sorted_set[++i])
		{
			if (sorted_set[i] & (1 << mask))
				q1 = iappendf(q1, sorted_set[i]);
			else
				q0 = iappendf(q0, sorted_set[i]);
		}
		ijoin(sorted_set, q0, q1);
	}
	return (sorted_set);
}

// Created a sorted version of an unsorted int array
int	*sort_args(int argc, int *unsorted_set)
{
	int	*sorted_set;
	int	max_bits;
	int	i;

	i = -1;
	sorted_set = ft_calloc(argc, sizeof(int));
	while (unsorted_set[++i])
		sorted_set[i] = unsorted_set[i];
	radix_sort(argc, sorted_set, unsorted_set, max_bits);
	return (sorted_set);
}
