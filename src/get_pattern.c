/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pattern.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:17:36 by chughes           #+#    #+#             */
/*   Updated: 2022/06/15 15:17:38 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*get_pattern(int *sorted_set, int *unsorted_set)
{
	int	*sort_pattern;

	sorted_set[0] = 0;
	unsorted_set[0] = 0;
	sort_pattern = ft_calloc(1, sizeof(int *));
	return (sort_pattern);
}

