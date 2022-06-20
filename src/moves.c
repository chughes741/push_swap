/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:31:54 by chughes           #+#    #+#             */
/*   Updated: 2022/06/18 14:31:56 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Swaps the first two elements of the stack
void	swap(int *stack, int n)
{
	int	temp;

	if (n <= 1)
		return ;
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	return ;
}

// Shift all elements up in the stack, first becomes the last
void	rotate(int *stack, int n)
{
	int	temp;
	int	i;

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
void	rrotate(int *stack, int n)
{
	int	temp;

	if (n <= 1)
		return ;
	temp = stack[n - 1];
	while (--n)
		stack[n] = stack[n - 1];
	stack[0] = temp;
	return ;
}

// Push top element from donor stack to recipient stack
void	push(int *donor_stack, int *recipient_stack, int n_a, int n_b)
{
	int	i;

	if (n_a == 0)
		return ;
	while (--n_b)
		recipient_stack[n_b] = recipient_stack[n_b - 1];
	recipient_stack[0] = donor_stack[0];
	i = -1;
	while (++i < n_a - 1)
		donor_stack[i] = donor_stack[i + 1];
	return ;
}
