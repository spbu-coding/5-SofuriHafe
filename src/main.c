#include <stdio.h>
#include <stdlib.h>

void other()
{
    printf("Cracked\n");
    exit(0);
}

void input()
{
    char buff[8];
    scanf("%s", buff);
    printf("%p\n", other);
}

int main()
{
    input();
    printf("2 + 2 * 2 = 6\n");
    return 0;
}