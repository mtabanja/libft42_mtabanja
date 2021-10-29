#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// void	mapi(unsigned int i, char *c)
// {
// 	static int indexArray[11] = {0};

// 	if (i > 10 || indexArray[i] == 1)
// 		write(1, "wrong index\n", 12);
// 	else
// 		indexArray[i] = 1;
// 	if (c[i] >= 'a' && c[i] <= 'z')
// 		c[i] = (c[i] - 32);
// 	else if (c[i] >= 'A' && c[i] <= 'Z')
// 		c[i] = (c[i] + 32);

// }
// void			f_striteri(unsigned i, char *s) { *s = i + '0'; }
// int		main(int argc, const char *argv[])
// {
//     char b[] = "override this !";
// 	char b2[0xF0];
// 	size_t size = strlen(b);

// 	for (size_t i = 0; i < size; i++)
// 		f_striteri(i, b2 + i);
// 	b2[size] = 0;
// 	ft_striteri(b, f_striteri);
// 	if (!strcmp(b, b2))
// 		printf("TEST_SUCCESS\n");
// 	printf("TEST_FAILED");

// }
