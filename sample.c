#include <stdio.h>
char A()
{
    char c = 'B';
    return c;
}

int main()
{
    printf("Welcome to program ------------\n");
    printf("This program demonstrates C.\n");
    printf("%lu \t %lu \t%lu", sizeof( A() ),sizeof( &A )),sizeof( A );
    printf("Thank you");
    return 0;
}

