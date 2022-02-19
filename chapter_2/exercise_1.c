#include <stdio.h>
#include <stdlib.h>

int retrieve(void)
{
    static unsigned int counter = 0;
    return ++counter;
}

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", retrieve());
    }

    return EXIT_SUCCESS;
}
