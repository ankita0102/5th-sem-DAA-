#include <stdio.h>

#include <time.h> 

int binary(int arr[25], int low, int high, int key);

 

int main() {

	int res, n, a[25], x, high, low;

	clock_t start,end;

	double total_time;

	start = clock(); 

	printf("Enter the number of elements in the array: \n");

	scanf("%d",&n);

	printf("Enter the elements of the array: \n");

	for(int i = 0; i<n; i++) {

		scanf("%d",&a[i]); 

	} 

	printf("Enter the element to be searched: \n");

	scanf("%d",&x); 

	low = 0; 

	high = n - 1; 

	res = binary(a, low, high, x); 

	if(res == -1) {

		printf("Element not found\n");

	} 

	else {

		printf("Element found at position %d\n", res); 

	} 

	end = clock(); 

	total_time = ((double)(end - start))/CLOCKS_PER_SEC; 

	printf("The total time is %lf\n", total_time); 

	return 0; 

} 

int binary(int arr[25], int low, int high, int key)

 {

	if(low > high) 

	{

		return -1; 

	} 

	else {

		int mid = (low + high)/2;

		if(arr[mid] == key) {

			return mid+1; 

		} 

		else if(key > arr[mid]) {

			binary(arr,mid+1,high,key); 

		} 

		else {

			binary(arr,low,mid-1,key); 

		}

	}

}



