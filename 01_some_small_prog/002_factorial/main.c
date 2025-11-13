#include <stdio.h>  // output to terminal
#include <stdlib.h> // has our atoi method

long factorial(int n);  // functional declaration

int main(int argc, char *argv[]) {
    printf("argv[0]: %s\n", argv[0]);
    printf("argv[1]: %s\n", argv[1]);

    if (argc < 2) {
        printf("error: missing value require to calculate factorial\n");
        return -1;
    }

    int n = atoi(argv[1]);
    printf("argv[1]: %d\n", n);
    printf("%d! = %ld\n",n , factorial(n));

    return 0;
}

long factorial(int n) {

    long answer = 1;
    for (int i=1; i <= n; i++) {
        answer *= i;
    }

    return answer;
}