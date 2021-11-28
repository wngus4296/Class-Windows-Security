#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    char len = 0;
    char buf[30] = {0, };

    len = strlen(argv[1]);
    if (len > 30) {
        printf("Error!! Max Size:30\n");
    } else {
        printf("Vulnerability!!");
        strcpy(buf, argv[1]);
        printf("\nbuf: %s", buf);
    }
    return 0;
}
