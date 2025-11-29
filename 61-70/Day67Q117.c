#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int nums1[m], nums2[n];
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }
    
    int i = 0, j = 0, k = 0;
    int merged[m + n];
    
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    
    while (i < m) merged[k++] = nums1[i++];
    while (j < n) merged[k++] = nums2[j++];
    
    for (int p = 0; p < m + n; p++) {
        printf("%d", merged[p]);
        if (p < m + n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
