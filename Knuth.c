#include <stdio.h>

void printArray(int arr[], int size);
void shellSort(int arr[], int n) {
	int gaps[] = {701, 301, 132, 57, 23, 10, 4, 1}; 
	int gap, i, j, temp;

	for (int gapIndex = 0; gapIndex < sizeof(gaps) / sizeof(gaps[0]); gapIndex++) {
		gap = gaps[gapIndex]; 

		for (i = gap; i < n; i++) {
			temp = arr[i];
			printArray(arr, n);

			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
				printf("gap : %d , j: %d, i: %d ", gap, j, i);
				printf(", arr[j-gap]: %d \n", arr[ j - gap]);
				arr[j] = arr[j - gap];
			}

			arr[j] = temp;
		}
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = {3, 1, 4, 2};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Original Array: ");
	printArray(arr, n);

	shellSort(arr, n);

	printf("Sorted Array: ");
	printArray(arr, n);

	return 0;
}

