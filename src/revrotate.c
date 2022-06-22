/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:12:54 by chughes           #+#    #+#             */
/*   Updated: 2022/06/22 13:12:56 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shift all elements down in the stack, last becomes the first
void	rrotate(unsigned *stack, unsigned n)
{
	unsigned	temp;

	if (n <= 1)
		return ;
	temp = stack[n - 1];
	while (--n)
		stack[n] = stack[n - 1];
	stack[0] = temp;
	return ;
}
