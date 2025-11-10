#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    printf("Enter number of frames: ");
    scanf("%d", &n);

    int frames[n];

    printf("Enter the frame sequence numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &frames[i]);
    }

    // Simple Bubble Sort for sorting frames
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (frames[j] > frames[j + 1]) {
                temp = frames[j];
                frames[j] = frames[j + 1];
                frames[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Frame Order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", frames[i]);
    }

    return 0;
}
