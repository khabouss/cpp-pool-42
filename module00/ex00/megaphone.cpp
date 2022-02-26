#include <iostream>

char    get_upper(char c)
{
    if (c >= 65 && c <= 90)
        return (c);
    if (c < 97 || c > 122)
        return (c);
    return c - 32;
}

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        int i = 1, j;
        while (i < argc)
        {
            j = -1;
            while (argv[i][++j] != '\0')
                std::cout << get_upper(argv[i][j]) ;
            std::cout << " ";
            i++;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}