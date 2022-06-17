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

void	replace_values(unsigned *array, unsigned argc)
{
	unsigned	i;
	unsigned	j;
	unsigned	min_val;

	i = -1;
	while (array[++i])
		array[i] ^= 1 << 31;
	j = -1;
	while (++j <= argc)
	{
		min_val = UINT32_MAX;
		i = -1;
		while (++i < argc)
		{
			if (array[i] > j + 1 && array[i] < min_val)
				min_val = array[i];
		}
		i = -1;
		while (++i < argc)
		{
			if (array[i] == min_val)
				array[i] = j;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	*array;

	if (input_check(argc, argv) != 0)
		exit(0);
	array = parse_args(argc, argv); // TODO change to utoa
	replace_values((unsigned *)array, (unsigned)argc - 1);
	return (0);
}
