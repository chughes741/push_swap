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
	static t_array	var;

	if (input_check(argc, argv) != 0) // TODO sort out input check
		exit(0);
	var.n_a = argc - 1; // TODO input as a single string
	var.args = parse_args(argc, argv); // TODO input as a single string
	hash_array(&var);
	list_moves(&var);
	return (0);
}
