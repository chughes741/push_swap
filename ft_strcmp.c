
#include "push_swap.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = -0;
	if (ft_strlen(str1) != ft_strlen(str2))
		return (0);
	while (str1[++i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (0);
	}
	return (1);
}
