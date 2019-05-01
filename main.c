#include <stdio.h>

int main()
{
    int n = 5;
    int array[n];
    for (size_t i = 0; i < n; i++){
	array[i] = i * i;
    }
    printf("Hello, world!");
    for (size_t i = 0; i < n; i++){
	printf("#%ld = %d\n", i, array[i]);
    }
    printf("\n");
    return 0;
}