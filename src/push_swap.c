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
	array.u_args = itou(array.i_args, argc - 1);
	hash_array(array.u_args, (unsigned)argc - 1);
	for (int i = 0; i < argc - 1; ++i)
		printf("%u\n", array.u_args[i]);
	return (0);
}
