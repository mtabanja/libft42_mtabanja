#include "libft.h"

int	ft_atoi(const char *s)
{
	int		minus;
	long	result;

	while (*s == '\t' || *s == ' ' || *s == '\v'
		|| *s == '\n' || *s == '\f' || *s == '\r')
		s++;
	minus = 1;
	if (*s == '-')
		minus = -1;
	if (*s == '+' || *s == '-')
		s++;
	result = 0;
	while (*s >= '0' && *s <= '9')
	{
		if (result > 922337203685477580 && minus == 1 && *s > 7)
			return (-1);
		else if (result > 922337203685477580 && minus == -1 && *s > 7)
			return (0);
		result = (result * 10) + (*s - '0');
		s++;
	}
	return ((int)result * minus);
}

// int main()
// {

//     printf("%d\n",atoi("-9223372036854775808"));
//     printf("%d",ft_atoi("-9223372036854775808"));
// }