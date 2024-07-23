#include <stdio.h>
#include <stdlib.h>

// Function to sort the array in ascending order
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the minimum cost to merge files
int optimalMergePattern(int files[], int n) {
    int totalCost = 0;

    // Loop until all files are merged
    while (n > 1) {
        // Sort the files array
        sort(files, n);

        // Merge the two smallest files
        int temp = files[0] + files[1];
        totalCost += temp;

        // Move the remaining files one step to the left
        for (int i = 2; i < n; i++) {
            files[i - 1] = files[i];
        }
        files[n - 2] = temp;

        // Decrease the size of the array
        n--;
    }

    return totalCost;
}

int main() {
    int files[] = { 15, 5,25, 10, 12, 9, 7, 6, 4};
    int n = sizeof(files) / sizeof(files[0]);

    printf("Minimum cost to merge files is %d\n", optimalMergePattern(files, n));

    return 0;
}

