#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int count[10001] = {0};
    
    for (int i = 0; i < n; i++) {
        count[nums[i]]++;
    }
    
    for (int i = 0; i <= 10000; i++) {
        if (count[i] > 1) {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}
