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
	t_data	*data;

	input_check(); // TODO sort out input check
	data = get_data(argc, argv); // TODO argv as single string
	hash_array(data);
	list_moves(data);
	return (0);
}
