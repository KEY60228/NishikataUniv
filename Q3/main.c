#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char str[10];
        printf("入力: ");
        scanf("%9s%*[^\n]%*c", str);
        if (strcmp(str, "end") == 0) {
            break;
        }
        printf("出力: %s\n", str);
    }
    return 0;
}
