#include "libft.h"
#include <stdio.h>

int main() {
	printf("%s\n", "____atoi");
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("   10q"));
	printf("%d\n", ft_atoi("-300"));
	printf("%d\n", ft_atoi("s0"));
	printf("%d\n", ft_atoi("    +1233456asdf"));
}