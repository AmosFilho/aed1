#include <stdio.h>

int main(int argc, char *argv[])
{
    char *str = "Com grandes poderes, vem grandes responsabilidades";
    char *p = str;

    while(*p != '\0')
    {
        printf("%c ", *p);
        p++;
    }
    return 0;
}

