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
	array.size = (unsigned)argc - 1;
	array.i_args = parse_args(argc, argv);
	array.stack_a = itou(array.i_args, array.size);
	hash_array(array.stack_a, array.size);
	for (int i = 0; i < argc - 1; ++i)
		printf("%2u ", array.stack_a[i]);
	list_moves(&array);
	optimize_moves(&array);
	printf("\n");
	for (int i = 0; i < argc - 1; ++i)
		printf("%2u ", array.stack_a[i]);
	printf("\n");
	return (0);
}
