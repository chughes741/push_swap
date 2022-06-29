

#include "../push_swap.h"

// Deallocates data and all memory its members point to
void	del_data(void)
{
	t_data	*data;

	data = get_data();
	if (data->args)
		free(data->args);
	if (data->stack_a)
		free(data->stack_a);
	if (data->stack_b)
		free(data->stack_b);
	if (data->moves)
		free(data->moves);
	if (data)
		free(data);
	return ;
}