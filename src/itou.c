/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itou.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:50:23 by chughes           #+#    #+#             */
/*   Updated: 2022/06/20 14:50:26 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

unsigned	*itou(int *array, int n)
{
	unsigned	*rtn_array;
	int			i;

	i = -1;
	rtn_array = ft_calloc(n, sizeof(unsigned));
	while (++i < n)
		rtn_array[i] = (array[i] ^ (1 << 31));
	return (rtn_array);
}
