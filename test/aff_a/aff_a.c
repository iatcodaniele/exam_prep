#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if(argc != 2)
    {
        write(1, "a\n", 2);
        return 0;
    }

    if(argc == 2)
    {
        if(argv[1][i] == 'a')
        {
            write(1, "a\n", 2);
            return 0;
        }
        else
        {
            write(1, "\n", 1);
            return 0;
        }
        i++;
    }
    return 0;
}