/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:00:09 by chughes           #+#    #+#             */
/*   Updated: 2022/06/22 13:00:11 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shift all elements up in the stack, first becomes the last
void	rotate(unsigned *stack, unsigned n)
{
	unsigned	temp;
	unsigned	i;

	if (n <= 1)
		return ;
	i = -1;
	temp = stack[0];
	while (++i < n - 1)
		stack[i] = stack[i + 1];
	stack[i] = temp;
	return ;
}

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
