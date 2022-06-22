/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:59:50 by chughes           #+#    #+#             */
/*   Updated: 2022/06/22 12:59:52 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Push top element from donor stack to recipient stack
void	push(unsigned *donor_stack, unsigned *recipient_stack, unsigned n_d, unsigned n_r)
{
	unsigned	i;

	if (n_d == 0)
		return ;
	while (--n_r)
		recipient_stack[n_r] = recipient_stack[n_r - 1];
	recipient_stack[0] = donor_stack[0];
	i = -1;
	while (++i < n_d - 1)
		donor_stack[i] = donor_stack[i + 1];
	return ;
}
