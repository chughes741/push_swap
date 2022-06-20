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
#include <stdio.h>

int	main(int argc, char *argv[])
{
	static t_array	array;

	if (input_check(argc, argv) != 0)
		exit(0);
	array.i_args = parse_args(argc, argv);
	array.stack_a = itou(array.i_args, argc - 1);
	hash_array(array.stack_a, (unsigned)argc - 1);
	array.n_a = argc - 1;
	list_moves(&array);
	optimize_moves(&array);

	for (int i = 0; i < argc - 1; ++i)
		printf("%u\n", array.stack_a[i]);

	return (0);
}
