#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "string";
	char	s2[] = "strin";

	printf("%d\n", strcmp(s1, s2));
}
