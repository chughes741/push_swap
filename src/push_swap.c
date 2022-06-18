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

typedef struct t_array {
	int			*i_args;
	unsigned	*u_args;
}				t_array;

unsigned	*itou(int *array, int n)
{
	unsigned	*rtn_array;
	int			i;

	i = -1;
	rtn_array = ft_calloc(n, sizeof(unsigned));
	while (++i < n)
		rtn_array[i] = (array[i] ^ (1 << 31));
	return (rtn_array);
}

void	order_values(unsigned *array, unsigned n)
{
	unsigned	i;
	unsigned	j;
	unsigned	min_val;

	i = -1;
	while (++i <= n)
	{
		min_val = UINT32_MAX;
		j = -1;
		while (++j < n)
		{
			if (array[j] > i + 1 && array[j] < min_val)
				min_val = array[j];
		}
		j = -1;
		while (++j < n)
		{
			if (array[j] == min_val)
				array[j] = i;
		}
	}
}

int	main(int argc, char *argv[])
{
	static t_array	array;

	if (input_check(argc, argv) != 0)
		exit(0);
	array.i_args = parse_args(argc, argv);
	array.u_args = itou(array.i_args, argc - 1);
	order_values(array.u_args, (unsigned)argc - 1);
	for (int i = 0; i < argc - 1; ++i)
		printf("%u\n", array.u_args[i]);
	return (0);
}
