#include <stdio.h>

int searchArray(int arr[], int start, int end, int k) {
	if(start == end) {
		if (arr[start] == k) return start;
		else return -1;
	}
	else {
		int mid = (start + end) / 2;
		int left_result = searchArray(arr, start, mid, k);
		if (left_result == -1) {
			int right_result = searchArray(arr, mid+1, end, k);
			return right_result;
		}
		else return left_result;
	}   
}

int main() {
	int a[] = {0, 11, 22, 34, 41, 59, 63, 75, 82, 90};
	printf("index: %d", searchArray(a, 0, 9, 75));
	
	return 0;
}


