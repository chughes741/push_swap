/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iappendf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:52:47 by chughes           #+#    #+#             */
/*   Updated: 2022/06/16 13:52:49 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*iappendf(int *array, int nbr)
{
	int	*rtn;
	int	i;

	i = -1;
	rtn = ft_calloc(1, sizeof(array) + sizeof(int));
	while (array[++i])
		rtn[i] = array[i];
	rtn[i] = nbr;
	free(array);
	return (rtn);
}
