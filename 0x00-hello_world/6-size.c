#include <stdio.h>

int main(void) {
#ifdef __LP64__ // Check if compiled on 64-bit machine
    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %lu byte(s)\n", sizeof(float));
#else // Compiled on 32-bit machine
    printf("Size of a char: %u byte(s)\n", sizeof(char));
    printf("Size of an int: %u byte(s)\n", sizeof(int));
    printf("Size of a long int: %u byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
    printf("Size of a float: %u byte(s)\n", sizeof(float));
#endif
    return 0;
}

