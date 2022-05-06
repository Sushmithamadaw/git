#include<stdio.h>
#include<stdlib.h>

int main() {
	int array[10];
	int size = 0;
	int element = 0;
	printf("Enter the array size:");
	scanf("%d", &size);
	printf("Enter the array elements:");  //Array elements should be in a sorted order
	for (int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}
	printf("Enter the element:");
	scanf("%d", &element);
	int start = 0;
	int end = size - 1;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (array[mid] == element) {
			printf("The element found at location : %d", mid);
			exit(0);		
		} else if (array[mid] < element) {
			start = mid + 1;		
		} else if (array[mid] > element) {
			end = mid - 1;
		}
	}
	printf("Item doesnot found\n");
	return 0;
}


