#include <stdio.h>
#include <stdlib.h>
int ft_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
	{
		return 1;
	}
	return 0;
}

int count_words(char *str)
{
	int counter = 0;

	while(*str)
	{
		while(*str && ft_space(*str) == 1)
			*str++;
		if(*str && ft_space(*str) == 0)
			counter++;
		str++;
	}
	return counter;
}

char *word_malloc(char *str)
{
	int i = 0;
	char *word;

	while(str[i] && ft_space(str[i]) == 1)
		i++;
	word = (char*)malloc(sizeof(char) * (i + 1));
	if(!word)
	{
		return NULL;
	}
	i = 0;
	while(str[i] && ft_space(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str)
{
	int i = 0;
	char **array;

	array = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
	if(!array)
	{
		return (NULL);
	}

	while(*str)
	{
		while(*str && ft_space(*str) == 1)
			str++;
		if(*str && ft_space(*str) == 0)
		{
			array[i] = word_malloc(str);
			i++;
			while(*str && ft_space(*str) == 0)
					str++;
		}
	}
	array[i] = '\0';
	return (array);
}

int main()
{
	char **arr;

	char string[] = "  hi barbie   fuckoff ken  ";
	arr = ft_split(string);

	if(arr == NULL)
	{
		printf("better luck next time");
		return 1;
	}

	int i = 0;
	while(arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return 0;
}


