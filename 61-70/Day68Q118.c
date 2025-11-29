#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int expected = n * (n + 1) / 2;
    int actual = 0;
    
    for (int i = 0; i < n; i++) {
        actual += nums[i];
    }
    
    printf("%d\n", expected - actual);
    return 0;
}
