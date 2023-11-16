
int ft_is_space(char c)
{
	if(c == ' ' || c == '\b' || c == '\t' || c == '\n' 
			|| c == '\v' || c == '\f' || c == '\r')
		return 1;
	return 0;
}

int ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while(str[i] !='\0')
	{
		while(ft_is_space(str[i] == 1))
			i++;
		
		if(str[i] == '-' || str[i] == '+')
		{
			if(str[i++] == '-')
				sign *=-1;
		}	
		
		if(str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10;
			res = res + (str[i++] - '0');
		}
		else if(ft_is_space(str[i]) == 1)
		
			i++;
		else
			return res * sign;	
	}

	return res * sign;
}
