#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		*(unsigned char *)(str + i) = 0;
		i++;
		n--;
	}
}
// int main()
// {
//     char str1[] = "A1234";
//     char str2[] = "A1234";

//     ft_bzero(str1,2);
//     bzero(str2,1);
//     printf("%d\n",str1[0]);
//     printf("%d",str2[0]);
// }