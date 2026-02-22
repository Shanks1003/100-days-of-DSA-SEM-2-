#include <stdio.h>

long long power(int a, int b) {
    // Base case
    if (b == 0)
        return 1;
    
    // Recursive case
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    
    // Input
    scanf("%d %d", &a, &b);
    
    // Output
    printf("%lld\n", power(a, b));
    
    return 0;
}