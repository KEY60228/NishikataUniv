#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char str[10];
        printf("ε₯ε: ");
        scanf("%9s%*[^\n]%*c", str);
        if (strcmp(str, "end") == 0) {
            break;
        }
        printf("εΊε: %s\n", str);
    }
    return 0;
}
