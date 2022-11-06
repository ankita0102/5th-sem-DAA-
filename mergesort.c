#include <stdio.h>

#include <time.h> 



void mergesort(int start, int end);

void merge(int start, int mid, int end); 



int n, a[25], temp[25]; 

int main() {

	clock_t start, end;

	double total_time; 

	start = clock(); 

	printf("Enter the number of elements in the array: \n");

	scanf("%d", &n); 

	printf("Enter the elements of the array: \n"); 

	for(int i = 0; i< n; i++) {

		scanf("%d", &a[i]); 

	}	

	mergesort(0, n-1); 

	printf("The sorted array is: \n");

	for(int p = 0; p< n; p++){

		printf("%d ", a[p]); 

	}

	end = clock(); 

	total_time = ((double)(end-start))/CLOCKS_PER_SEC; 

	printf("\nThe total time taken is: %lf\n", total_time); 

} 



void mergesort(int start, int end) {

	if (start < end) {

		int mid = (start+end)/2; 

		mergesort(start, mid); 

		mergesort(mid+1, end); 

		merge(start, mid, end); 

	} 

	else 

		return;  

} 



void merge(int start, int mid, int end) {

	int i, j, k; 

	i = start;

	j = mid+1;

	k = start; 

	while(i<=mid && j<=end) {

		if(a[i] > a[j])

			temp[k++] = a[j++]; 

		else

			temp[k++] = a[i++]; 

	} 

	while(i <= mid) 

		temp[k++] = a[i++]; 

	while(j <= end) 

		temp[k++] = a[j++]; 

	for(int e = start; e <= end; e++)

		a[e] = temp[e]; 

}
