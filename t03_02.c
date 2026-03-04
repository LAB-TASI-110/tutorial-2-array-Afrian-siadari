// 12S25003-Afrian Josse Siadari 

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    int n;
    scanf("%d", &n);

    int current_number;
    int min_val;
    int max_val;
    double min_consecutive_avg = DBL_MAX;
    int prev_number;

    if (n >= 1) {
        scanf("%d", &current_number);
        min_val = current_number;
        max_val = current_number;
        prev_number = current_number;
    } else {
        return 0;
    }

    for (int i = 1; i < n; i++) {
        scanf("%d", &current_number);

        if (current_number < min_val) {
            min_val = current_number;
        }
        if (current_number > max_val) {
            max_val = current_number;
        }

        double current_consecutive_avg = (double)(prev_number + current_number) / 2.0;
        if (current_consecutive_avg < min_consecutive_avg) {
            min_consecutive_avg = current_consecutive_avg;
        }
        
        prev_number = current_number;
    }
   
    printf("Maka nilai Minimum dan Maximumnya adalah:\n");
    printf("%d\n", min_val);
    printf("%d\n", max_val);
    
     printf("nilai rata-rata terendah:\n");
    if (n >= 2) {
        printf("%.2f\n", min_consecutive_avg);
    } else {
        printf("0.00\n"); 
    }

    return 0;
}
