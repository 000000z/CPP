#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    if (ac > 1)
    {
        while (j < ac)
        {
            i = 0;
            while (av[j][i])
            {
                av[j][i] = toupper(av[j][i]);
                std::cout << av[j][i];
                i++;
            }
            j++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return(0);
}