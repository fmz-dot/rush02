#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        ft_putchar.c(str[i]);
        i++;
    }
}
int main() {
    char str[] = "Hello, world!\n";
    ft_putstr.c(str);
    return 0;
}

