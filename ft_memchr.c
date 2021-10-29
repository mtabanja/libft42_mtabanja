#include "libft.h"

void	*ft_memchr(void *ptr, int ch, size_t count)
{
	while (count--)
	{
		if (*(unsigned char *)ptr == (unsigned char)ch)
			return (ptr);
		ptr++;
	}
	return (0);
}

// int main()
// {
//     char src[100] = "I am going from Delhi to Gorakhpur";
//     char dst[100] = "I am going from Delhi to Gorakhpur";
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

//     char src1[100] = "I am going from Delhi to Gorakhpur";
//     char dst1[100] = "I am going from Delhi to Gorakhpur";

//     char *res1 = ft_memchr(tab,-1,7);
//     char *res2 = memchr(tab,-1,7);
//     // printf("%s\n",(char*)memcpy(dst1+11,src1+5,29));
//     printf("%s\n",res1);
//     printf("%s\n",res2);
//     printf("======================\n");
//     // printf("%s\n",dst);
//     // printf("%s\n",dst1);
//     // printf("======================\n");
//     // printf("%s\n",src);
//     // printf("%s\n",src1);
// }