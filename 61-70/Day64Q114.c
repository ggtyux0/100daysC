#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    
    int n = strlen(s);
    int max_len = 0;
    int len = 0;
    int last[256] = {-1};
    
    for (int i = 0; i < n; i++) {
        if (last[s[i]] >= len) {
            len = last[s[i]] + 1;
        } else {
            if (i - len + 1 > max_len) {
                max_len = i - len + 1;
            }
        }
        last[s[i]] = i;
    }
    
    printf("%d\n", max_len);
    return 0;
}
