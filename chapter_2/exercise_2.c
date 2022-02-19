#include <stdio.h>
#include <stdlib.h>

void func_1();
void func_2();
void func_3();

void (*func_p[3])() = {func_1, func_2, func_3};

int main(void) {
    for(int i = 0; i < 3; i++)
    {
        func_p[i]();
    }

    return EXIT_SUCCESS;
}

void func_1(){
    printf("You have chosen function 1.\n");
}

void func_2(){
    printf("You have chosen function 2.\n");
}

void func_3(){
    printf("You have chosen function 3.\n");
}
