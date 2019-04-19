#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myprint.h"

int MyPrint(char *str)
{

    printf("%s", str);
    return 0;
}

int main(void)
{

    MyPrint("Hello world!\n");
    return 0;
}
