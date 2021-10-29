#include "libft.h"

void     *ft_memccpy(void *dst, void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    if(!dst || !src)
        return (0);
    while(i < n)
    {   
        if(*(unsigned char*)(src + i) == (unsigned char)c)
        {
            *(unsigned char*)(dst + i) = (unsigned char)c;
            return (dst + i + 1);
        }
        *(unsigned char*)(dst + i) = *(unsigned char*)(src + i);    
        i++;   
    }
    return (0);
}

// int main()
// {
//     char src[100] = "zyxwvuzyxwvu";
//     char dst[100] = "BBAB";

//     char src1[100] = "zyxwvuzyxwvu";
//     char dst1[100] = "BBAB";

//     char *res1 = ft_memccpy(dst,src,'x',20);
//     char *res2 = memccpy(dst,src,'x',20);


//     // ft_memccpy(dst,src,'x',20);
//     printf("%s\n",res1);
//     printf("%s",res2);


// }