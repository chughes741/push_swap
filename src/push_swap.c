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

// {1, -13, 100, 38, 39} -> {2, 1, 5, 3, 4} 

void	replace_values(int *array, int argc)
{
	int			i;
	int			j;
	unsigned	min_val;

	i = -1;
	while (array[++i])
		array[i] ^= 1 << 31;
	j = 0;
	while (++j <= argc)
	{
		min_val = UINT32_MAX;
		i = -1;
		while (array[++i])
		{
			if ((unsigned)array[i] >= i && (unsigned)array[i] < min_val)
				min_val = (unsigned)array[i];
		}
		i = -1;
		while (array[++i])
		{
			if ((unsigned)array[i] == min_val)
				array[i] = i;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	*array;
	// int	*sort_patt;

	if (input_check(argc, argv) != 0)
		exit(0);
	array = parse_args(argc, argv);
	replace_values(array, argc - 1);
	for (int i = 0; array[i]; ++i)
		ft_printf("%u\n", (unsigned)array[i]);
	return (0);
}
