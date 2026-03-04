// 12S25003-Afrian Josse siadari 
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int current_number;
    int min_val;
    int max_val;

    scanf("%d", &current_number);

    min_val = current_number;
    max_val = current_number;

    for (int i = 1; i < n; i++) {
        scanf("%d", &current_number);

        if (current_number < min_val) {
            min_val = current_number;
        }

        if (current_number > max_val) {
            max_val = current_number;
        }
    }
    
    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0;
}
