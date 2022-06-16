/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ijoin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:10:19 by chughes           #+#    #+#             */
/*   Updated: 2022/06/16 14:10:20 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ijoin(int *sorted_set, int *q0, int *q1)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (q0[++i])
		sorted_set[i] = q0[i];
	while (q1[++j])
		sorted_set[i + j] = q1[j];
	return ;
}
