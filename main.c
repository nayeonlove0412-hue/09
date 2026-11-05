#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[30] = "happy C programming";

    printf("The length of the string \"%s\" : %i\n", str, strlen(str));
    return 0;
}