/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:19:34 by chughes           #+#    #+#             */
/*   Updated: 2022/06/14 21:19:38 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
// 100 ~7500
int	main(int argc, char *argv[])
{
	t_data	*data;

	input_check(argc, argv); // TODO sort out input check
	set_up(argc, argv);
	list_moves();
	data = get_data();
	printf("%s", data->moves);
	// for (int i = 0; i < data->n_a; ++i)
		// printf("%2i ", data->stack_a[i]);
	// printf("\n");
	return (0);
}
