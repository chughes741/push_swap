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

int	main(int argc, char *argv[])
{
	int	*unsorted_set;
	int	*sorted_set;
	int	*sort_pattern;

	if (input_check(argc, argv) != 0)
		exit(0);
	unsorted_set = parse_args(argc, argv);
	sorted_set = sort_args(argc, unsorted_set);
	sort_pattern = get_pattern(sorted_set, unsorted_set);
	print_pattern(sort_pattern);
	// free_sets(unsorted_set, sorted_set, sort_pattern);
	return (0);
}
