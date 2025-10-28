// Q64: Find the digit that occurs the most times in an integer number

#include <stdio.h>

int mostFrequentDigit(int num) {
    int freq[10] = {0};
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    int maxFreq = freq[0], digit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i > digit)) {
            maxFreq = freq[i];
            digit = i;
        }
    }
    return digit;
}

int main() {
    int num;
    scanf("%d", &num);

    int result = mostFrequentDigit(num);
    printf("%d\n", result);

    return 0;
}
