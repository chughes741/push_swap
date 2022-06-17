/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:19:34 by chughes           #+#    #+#             */
/*   Updated: 2022/06/14 21:19:38 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	valid_int(char **argv)
{
	if (argv[0])
		return (0);
	return (0);
}

static int	dupe_input(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = i;
		while (argv[++j])
		{
			if (ft_strcmp(argv[i], argv[j]))
				return (1);
		}
	}
	return (0);
}

int	input_check(int argc, char **argv)
{
	int	err;

	if (0 == 0)
		return (0);
	err = 0;
	if (argc <= 1)
		err = 1;
	if (valid_int(argv))
		err = 2;
	if (dupe_input(argv))
		err = 3;
	if (err > 1)
		err = ft_printf("Error\n");
	return (err);
}
