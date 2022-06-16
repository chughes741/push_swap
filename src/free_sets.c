/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_sets.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:07:49 by chughes           #+#    #+#             */
/*   Updated: 2022/06/16 10:07:53 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_sets(int **unsorted_set, int **sorted_set, int **sort_pattern)
{
	free(*unsorted_set);
	// free(*sorted_set);
	*sorted_set[0] = 0;
	free(*sort_pattern);
	return ;
}

