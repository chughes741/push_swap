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

#include "../include/push_swap.h"

static int	too_long(char *arg)
{
	if (arg[0] == '-')
	{
		if (ft_strlen(arg) > 11)
			return (1);
		else if (ft_strlen(arg) < 11)
			return (0);
		else if (ft_strncmp(arg, "2147483648", 10))
			return (1);
	}
	else
	{
		if (ft_strlen(arg) > 10)
			return (1);
		else if (ft_strlen(arg) < 10)
			return (0);
		else if (ft_strncmp(arg, "2147483647", 10))
			return (1);
	}
	return (0);
}

static int	valid_int(char **argv)
{
	int	i;
	int	j;

	i = -1;
	while (argv[++i])
	{
		if (argv[i][0] == '-' && ft_strlen(argv[i]) == 1)
			return (1);
		if (too_long(argv[i]))
			return (1);
		j = -1;
		while (argv[i][++j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-')
				return (1);
		}
	}
	return (0);
}

static int duplicates(char **argv)
{
	int	i;
	int	j;

	i = -1;
	while (argv[++i])
	{
		j = i;
		while (argv[++j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
		}
	}
	return (0);
}

void	input_check(char **argv)
{
	if (count_args(argv) < 1)
		exit(0);
	if (valid_int(argv))
	{
		printf("Error\n");
		exit(1);
	}
	if (duplicates(argv))
	{
		printf("Error\n");
		exit(1);
	}
	return ;
}
