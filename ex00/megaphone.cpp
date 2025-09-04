#include <iostream>

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (char)(c - 32);
    else
        return c;
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(i < argc)
    {
        j = 0;
        while(argv[i][j])
        {
            std::cout << to_upper(argv[i][j]);
            j++;
        }
        i++;
    }
    std::cout << std::endl;
}