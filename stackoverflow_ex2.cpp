#include <stdio.h>

int main(){
    char buffer1[20] = {0,};
    char buffer2[20] = {0,};

    printf("buffer 2: ");
    gets(buffer2);
    printf("\n\n");
    printf("buffer 1: %s\n", buffer1);
    printf("buffer 2: %s\n", buffer2);

    return 0;
}
