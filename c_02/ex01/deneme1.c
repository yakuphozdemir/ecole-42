#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[] = "sozcukler";
	char	src[] = "kelime";

	strncpy(dest, src, 3);
	printf("%s\n", dest);
}
