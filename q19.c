#include <stdio.h>

int main() {

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_sum = 9999999; 
    int pair1 = 0;
    int pair2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            
            int current_sum = arr[i] + arr[j];

            
            
            int dist_current = current_sum;
            if (dist_current < 0) {
                dist_current = -dist_current; 
            }

            int dist_min = min_sum;
            if (dist_min < 0) {
                dist_min = -dist_min; q2
            }

            if (dist_current < dist_min) {
                min_sum = current_sum; 
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }

    printf("%d %d\n", pair1, pair2);

    return 0;
}