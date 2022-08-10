/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:09:57 by chughes           #+#    #+#             */
/*   Updated: 2022/06/27 16:10:01 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// Deallocates data and all memory its members point to
void	del_data(void)
{
	t_data	*data;

	data = get_data();
	free(data->args);
	free(data->stack_a);
	free(data->stack_b);
	free(data);
	return ;
}
