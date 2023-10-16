#include <unistd.h>

void ft_print_numbers1(void)
{
    write(1, "0123456789", 10);
}

//or

void ft_print_numbers2(void)
{
    char c = '0';

    while(c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
}

int main()
{
    ft_print_numbers1();
    write(1, "\n", 1);
    ft_print_numbers2();
}