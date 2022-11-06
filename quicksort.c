#include <stdio.h>

#include <time.h>



int partition(int low, int high);

void quicksort(int low, int high); 



int a[25], n, temp; 



int main() {

	clock_t start, end;

	double total_time; 

	start = clock(); 

	printf("Enter the number of elemnts in the array: \n");

	scanf("%d", &n); 

	printf("Enter the array elements: \n"); 

	for(int i = 0; i< n; i++)

		scanf("%d", &a[i]); 

	quicksort(0, n-1); 

	printf("The sorted array is : \n"); 

	for(int t = 0; t < n; t++) 

		printf("%d ", a[t]); 

	end = clock(); 

	total_time = ((double)(end - start))/CLOCKS_PER_SEC; 

	printf("\nThe total time taken is: %lf\n", total_time); 

	return 0; 

}  



void quicksort(int low, int high) {

	if(low < high) {

		int pi = partition(low, high); 

		quicksort(low, pi-1); 

		quicksort(pi+1, high); 

	}

} 



int partition(int low, int high) {

	int j; 

	int pivot = a[high]; 

	int i = low - 1; 

	for (j = low; j <= high - 1; j++) {

		if(a[j] < pivot) {

			i++; 

			//swap(arr[i] and arr[j])

			temp = a[i]; 

			a[i] = a[j]; 

			a[j] = temp; 

		}

	} 

	//swap(arr[i+1] and arr[high])

	temp = a[i+1]; 

	a[i+1] = a[high]; 

	a[high] = temp; 

	return i+1; 

}
