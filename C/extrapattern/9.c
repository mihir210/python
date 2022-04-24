#include <stdio.h>

int binarySearch(int arr[], int item, int size) {
    int low = 0;
    int high = size - 1;
     
	while (low <= high) {
		int mid = low + (high - low)  / 2;
		int guess = arr[mid];
		
		if (guess == item) {
			return mid + 1;
		}
		
		else if (guess < item) {
			low = mid + 1;
		}
		
		else {
			high = mid - 1;
		}
	}
	return -1;
}
	
            

int main()
{
    int arr[] = {5, 7, 9, 11, 13, 24, 35, 47, 50};
    printf("%d", binarySearch(arr, 24, 9));
    return 0;
}