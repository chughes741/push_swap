
#include "../include/push_swap.h"


// DEBUG function to print contents of stacks
void	print_stacks(void) {
	#ifdef DEBUG
		t_data *data = get_data();

		usleep(200000);
		printf("\e[1;1H\e[2J");
		printf("  A | B  \n");
		printf("---------\n");
		for (int i = 0; i < 25; ++i) {
			if (i < data->n_a)
				printf(" %2i |", data->stack_a[i]);
			else
				printf("  - |");
			if (i < data->n_b)
				printf(" %-2i \n", data->stack_b[i]);
			else
				printf(" -  \n");
		}
	#endif
	return;
}
