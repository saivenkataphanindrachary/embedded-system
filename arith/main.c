#include <stdio.h>
int add(int, int);
int sub(int, int);

int main(int argc, char const *argv[])
{
    printf("add: %d\n", add(10,20));
    printf("sub: %d\n", sub(10,20));
    return 0;
}