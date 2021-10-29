#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sc1 ;
	unsigned char	*sc2 ;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*sc1 == *sc2 && --n)
	{
		sc1++;
		sc2++;
	}
	return (*sc1 - *sc2);
}

// int main()
// {
//     char src[100] = "abcdefghij";
//     char dst[100] = "abcdefgxyz";
// 	// int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

//     char src1[100] = "abcdefghij";
//     char dst1[100] = "abcdefgxyz";

//     int res1 = ft_memcmp(src,dst,8);
//     int res2 = memcmp(src1,dst1,8);
//     // printf("%s\n",(char*)memcpy(dst1+11,src1+5,29));
//     printf("%d\n",res1);
//     printf("%d\n",res2);
//     printf("======================\n");
//     // printf("%s\n",dst);
//     // printf("%s\n",dst1);
//     // printf("======================\n");
//     // printf("%s\n",src);
//     // printf("%s\n",src1);

// }