/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uijoin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:46:19 by chughes           #+#    #+#             */
/*   Updated: 2022/06/21 13:46:23 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

unsigned	*uijoin(unsigned **list, unsigned move)
{
	unsigned	len;
	unsigned	*rtn;

	len = 0;
	while(list[len])
		len++;
	rtn = ft_calloc(len + 2, sizeof(unsigned));
	rtn[len] = move;
	while (--len >= 0)
		rtn[len] = list[len];
	free(list);
	return (rtn);
}
