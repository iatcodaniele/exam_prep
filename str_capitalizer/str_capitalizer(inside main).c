#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 1;
    int j;
    if(argc > 1)
    {
        while( i < argc)
        {
            j = 0;
            while(argv[i][j])
            {
                if(argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                {
                    argv[i][j] += 32; //all letters become lowercase
                }
                if((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (argv[i][j] == argv[i][0] || argv[i][j-1] == ' ' || argv[i][j] == '\t'))
                {
                    argv[i][j] -=32; //if the previous index is a space = first letter of word => becomes uppercase
                }
                write(1, &argv[i][j], 1);
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
