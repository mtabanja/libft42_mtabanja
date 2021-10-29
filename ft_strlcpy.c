#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen((char *)src);
	if (!dstsize)
		return (src_len);
	i = 0;
	while ((char)src[i] && dstsize - 1 > i)
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = 0;
	return (src_len);
}

// int main()
// {
//     char dst[100] = "aaabc";
//     char dst1[100] = "aaabc";

//     // char src1[100] = "";

//     int size = 0;

//     int res1 = ft_strlcpy(dst, '1',size);
//     int res2 = strlcpy(dst1, '1', size);

// 	printf("%d\n",res1);
//     printf("%d\n",res2);
//     // printf("%s\n",dst);
//     // printf("%s\n",dst1);
// 	// printf("%d\n",dst[2]);
//     // printf("%d\n",dst1[2]);

// }