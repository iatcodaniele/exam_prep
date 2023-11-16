#include <stdlib.h>
#include <stdio.h>


char *ft_strdup(char *src)
{
	int i = 0;

	char *dup;
	while(src[i])
	{
		i++;
	}
	dup = (char*)malloc(sizeof(char) * i + 1);
	if(!dup)
		return NULL;
	i = 0;
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return dup;
}

int main()
{
	char x[] = "hello";

	printf("%s", ft_strdup(x));
}
