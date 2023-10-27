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
		while(*str && ft_space(*str) == 1) //skips if there are spaces
			*str++;
		if(*str && ft_space(*str) == 0) //finds word
			counter++;	//increases word counter
		str++; //increments index of string to keep looking for either spaces or printables
	}
	return counter;
}

char *word_malloc(char *str) //allocating memory for individual words
{
	int i = 0;
	char *word;

	while(str[i] && ft_space(str[i]) == 1) //if there are white spaces at the beggining of string
		i++; //skip them
	word = (char*)malloc(sizeof(char) * (i + 1));
	if(!word)
	{
		return NULL;
	}
	i = 0;
	while(str[i] && ft_space(str[i]) == 0) //if there are no spaces
	{
		word[i] = str[i]; //store word until you find a space
		i++;
	}
	word[i] = '\0'; //null terminate word array
	return (word);
}

char **ft_split(char *str)
{
	int i = 0;
	char **array;

	array = (char**)malloc(sizeof(char*) * (count_words(str) + 1)); //double pointer points at array of arrays with size
	if(!array)									//number of words + null char
	{
		return (NULL);
	}

	while(*str)
	{
		while(*str && ft_space(*str) == 1) //skip spaces when it finds them
			str++; 
		if(*str && ft_space(*str) == 0) //if only printables, enter condition
		{
			array[i] = word_malloc(str); //store word allocation inside array allocation
			i++;
			while(*str && ft_space(*str) == 0) //move forwards inside string while there are no spaces(word delimiters)
					str++; //continues while inside word; goes back up when it find a space
		}
	}
	array[i] = '\0'; //null terminates the array
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


