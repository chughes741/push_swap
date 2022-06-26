
#include "../push_swap.h"

void	print_stacks(void) {
	t_data *data = get_data();

	printf("\e[1;1H\e[2J");
	printf("  A | B  \n");
	printf("---------\n");
	for (int i = 0; i < 17; ++i) {
		if (i < data->n_a)
			printf(" %2i |", data->stack_a[i]);
		else
			printf("  - |");
		if (i < data->n_b)
			printf(" %-2i \n", data->stack_b[i]);
		else
			printf(" -  \n");
	}
	printf("\n");
}