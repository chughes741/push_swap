/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:05:40 by chughes           #+#    #+#             */
/*   Updated: 2022/06/21 14:05:55 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_moves(unsigned *moves)
{
	int	i;

	i = -1;
	while (moves[++i])
	{
		if (moves[i] == SA)
			printf("sa\n");
		else if (moves[i] == SB)
			printf("sb\n");
		else if (moves[i] == SS)
			printf("ss\n");
		else if (moves[i] == PA)
			printf("pa\n");
		else if (moves[i] == PB)
			printf("pb\n");
		else if (moves[i] == RA)
			printf("ra\n");
		else if (moves[i] == RB)
			printf("rb\n");
		else if (moves[i] == RR)
			printf("rr\n");
		else if (moves[i] == RRA)
			printf("rra\n");
		else if (moves[i] == RRB)
			printf("rrb\n");
		else if (moves[i] == RRR)
			printf("rrr\n");
	}
	return ;
}