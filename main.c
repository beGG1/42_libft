#include "libft.h"
#include <stdio.h>

int main() {
	printf("%s\n", "____atoi");
	printf("%d\n", ft_atoi("              			-42lyon"));
	printf("%d\n", ft_atoi("+101"));
	printf("%d\n", ft_atoi("-300"));
	printf("%d\n", ft_atoi("s0"));
	printf("%d\n", ft_atoi("    +1233456asdf"));

	printf("%s\n", "____bzero");
	int *p = (int *)malloc(5);
	ft_bzero(p, 5);
	for (int i = 0; i < 5; i++)
	{
		if (p[i] != 0)
			printf("%s\n", "Error");
	}
	free(p);

	// DO calloc
	printf("%s\n", "____isalnum");
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('a'));

	printf("%s\n", "ft_isalpha");
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", ft_isalpha('a'));

	printf("%s\n", "ft_isascii");
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii(1));
	printf("%d\n", ft_isascii(500));

	printf("%s\n", "ft_isdigit");
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit(1));
	printf("%d\n", ft_isdigit(500));

	printf("%s\n", "ft_isprint");
	printf("%d\n", ft_isprint('0'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint(1));
	printf("%d\n", ft_isprint(500));

	printf("%s\n", "ft_itoa");
	printf("%s\n", ft_itoa('0'));
	printf("%s\n", ft_itoa(' '));
	printf("%s\n", ft_itoa('a'));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(500));
	printf("%s\n", ft_itoa(-500));
	printf("%s\n", ft_itoa(1234500));
	printf("%s\n", ft_itoa(0));

	printf("%s\n", "____memchr");
	char *s = ft_memchr("lolclol2", 'c', 5);
	printf("%s\n", s);

	printf("%s\n", "ft_memcmp");
	printf("%d\n", ft_memcmp("ssaa", "a", 10));
	printf("%d\n", ft_memcmp("ssaa", "saa", 1));
	printf("%d\n", ft_memcmp("ssaa", "ssaa", 10));
	printf("%d\n", ft_memcmp("ssaa", "ssb", 10));

	printf("%s\n", "ft_memcpy");
	char a[] = "1234";
	char b[] = "5432";
	ft_memcpy(a, b, 2);
	printf("%s\n", a);

	printf("%s\n", "memmove");
}