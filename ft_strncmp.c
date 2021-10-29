#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n )
{
	if (!n)
		return (0);
	while (*str1 && *str2 && (*str1 == *str2) && --n)
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

// int main()
// {
//     // char src[100] = "\0";
//     // char dst[100] = "\0";
// 	char *s1 = "abcdef";
// 	char *s2 = "abcdefghijklmnop";
// 	size_t size = 6;

//     // char src1[100] = "\200";
//     // char dst1[100] = "\0";

//     // int size = 4;

//     int res1 = ft_strncmp(s1,s2,size);
//     int res2 = strncmp(s1,s2,size);
//     printf("%d\n",res1);
//     printf("%d\n",res2);
// 		printf("=======================\n");
// 		printf("%d\n",i2);
//     printf("%d\n",i1);
// }