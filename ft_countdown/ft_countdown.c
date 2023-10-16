#include <unistd.h>
/*
int main()
{
    write(1, "9876543210", 10);
    write(1, "\n", 1);
    return (0);
}
*/
int main()
{
    char c = '9';

    while(c >= '0')
    {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n",1);
    return (0);
}