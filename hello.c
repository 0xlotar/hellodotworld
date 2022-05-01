#include "world.h"
#include <stdio.h>

int main(void)
{
    fprintf(stderr, "HELLO\n");
    char name[100];
    fgets(name, 100, stdin);
    
    world(name);
    return 0;
}