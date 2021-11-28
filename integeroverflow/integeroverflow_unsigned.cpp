#include <stdio.h>

int main(int argc, char* argv[]) {
    int test = 4294967295;
    printf("unsigned INT maxnum : %u\n", test);
    printf("unsigned INT maxnum : %u\n", test + 1);
    printf("unsigned INT maxnum : %u\n", test + 2);
    return 0;
}
