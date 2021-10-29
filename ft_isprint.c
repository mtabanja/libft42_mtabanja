#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int main()
// {
//     printf("%d", ft_isprint(127));
//     // printf("\n%d", isprint(127));
// }