#include <stdio.h>

int main()
{
    int array[5];
    for (size_t i = 0; i < 5; i++){
	array[i] = i * i;
    }
    printf("Hello, world!");
    for (size_t i = 0; i < 5; i++){
	printf("#%ld = %d\n", i, array[i]);
    }
    printf("\n");
    return 0;
}