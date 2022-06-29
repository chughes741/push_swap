

#include "../push_swap.h"

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