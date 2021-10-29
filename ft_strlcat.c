#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	j = dst_len;
	if (dstsize > dst_len)
	{
		while ((char)src[i] && (dstsize - 1) > dst_len)
		{
			dst[j] = (char)src[i];
			i++;
			j++;
			dstsize--;
		}
		dst[j] = 0;
		return (src_len + dst_len);
	}
	return (src_len + dstsize);
}
// int main()
// {
//     char dst[100] = "aaabc";
//     char src[100] = "";

//     char dst1[100] = "aaabc";
//     char src1[100] = "";

//     int size = 3;

//     int res1 = ft_strlcat(dst, "lorem ipsum dolor sit amet",2);
//     int res2 = strlcat(dst1, "lorem ipsum dolor sit amet", 2);

//     printf("%d\n",res1);
//     printf("%d\n",res2);
//     printf("%s\n",dst);
//     printf("%s\n",dst1);
//     printf("%d\n",dst[1]);
//     printf("%d\n",dst1[1]);

// }