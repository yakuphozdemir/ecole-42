#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[] = "string";
	char	src[] = "bizb";
	unsigned int	size = 3;

	printf("BEFORE\n	size:	%d\n	dest:	%s\n	src:	%s\n", size, dest, src);
	size = strlcpy(dest, src, size);
	printf("AFTER\n	size:	%d\n	dest:	%s\n	src:	%s\n", size, dest, src);
}
