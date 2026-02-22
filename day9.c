#include <stdio.h>
#include <string.h>

void reverseString(char str[], int left, int right) {
    if (left >= right)
        return;

    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    reverseString(str, left + 1, right - 1);
}

int main() {
    char str[1000];

    scanf("%s", str);

    reverseString(str, 0, strlen(str) - 1);

    printf("%s\n", str);

    return 0;
}