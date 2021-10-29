#include "libft.h"
#include <unistd.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s)
		return (0);
	res = ft_strdup((char *)s);
	if (!res)
		return (0);
	while (res[i])
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	return (res);
}

// char	mapi(unsigned int i, char c)
// {
// 	static int indexArray[11] = {0};

// 	if (i > 10 || indexArray[i] == 1)
// 		write(1, "wrong index\n", 12);
// 	else
// 		indexArray[i] = 1;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	else
// 		return (c);
// }

// int		main(int argc, const char *argv[])
// {
// 	char	*str;
// 	char	*strmapi;

// 	alarm(5);
// 	str = (char *)malloc(sizeof(*str) * 12);
// 	if (argc == 1 || !str)
// 		return (0);
// 	else if (atoi(argv[1]) == 1)
// 	{
// 		strcpy(str, "LoReM iPsUm");
// 		strmapi = ft_strmapi(str, &mapi);
// 		printf("string : %s",strmapi);
// 		if (strmapi == str)
// 			printf("\nA new string was not returned");
// 		if (strmapi[11] != '\0')
// 			printf("\nString is not null terminated");
// 	}
// 	return (0);
// }
// int main()
// {
//     char *b = "override this !";
// 	char b2[0xF0];
// 	size_t size = strlen(b);

// 	for (size_t i = 0; i < size; i++)
// 		b2[i] = f_strmapi(i, b[i]);
// 	b2[size] = 0;

//     printf("%s",b2);
// }