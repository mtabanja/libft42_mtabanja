#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	i = 0;
	if (!src && !dst )
		return (0);
	if (src < dst)
	{
		while (len)
		{
			*(char *)(dst + len - 1) = *(char *)(src + len - 1);
			len--;
		}
		return (dst);
	}
	while (len)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
		len--;
	}
	return (dst);
}

// int main() 
// {
//     char src[100] = "I am going from Delhi to Gorakhpur";
//     // char dst[100] = "I am going from Delhi to Gorakhpur";

//     char src1[100] = "I am going from Delhi to Gorakhpur";
//     // char dst1[100] = "I am ging from Delhi to Gorakhpur";

//     char *res1 = ft_memmove(src + 1,src + 2, 10);
//     char *res2 = memmove(src1 + 1,src1 + 2, 10);
//     printf("%s\n",res1);
//     printf("%s\n",res2);
//     printf("======================\n");
//     // printf("%s\n",src);
//     // printf("%s\n",src1);
//     // printf("======================\n");
//     // printf("%s\n",src);
//     // printf("%s\n",src1);
// }
// // strcpy(one, "abcdefgh");
// //   (void) memmove_fun(one+1, one+2, 7);