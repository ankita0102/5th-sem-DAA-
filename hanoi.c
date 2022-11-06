#include <stdio.h>

#include <time.h>

//#include <math.h> 



void hanoi(int, char, char, char); 

int main() {

	int n, no_move;

	clock_t start, end; 

	double total_time; 

	start = clock(); 

	printf("\nEnter the number of disks: ");

	scanf("%d", &n); 

	printf("\nThe tower of hanoi sequence is: \n\n"); 

	hanoi(n, 'A', 'B', 'C'); 

	//no_move = pow(2, n) - 1; 

	end = clock(); 

	total_time = ((double)(end-start))/CLOCKS_PER_SEC; 

	//printf("\nTotal number of moves is %d", no_move); 

	printf("\nThe total time taken is %lf\n", total_time); 

	return 0; 

} 



void hanoi(int num, char A, char B, char C) {

	if(num == 1) {

		printf("Move disk 1 from rod %c to rod %c\n", A, C); 

		return; 

	} 

	hanoi(num-1, A, C, B);

	printf("Move disk %d from rod %c to rod %c\n", num, A, C);  

	hanoi(num-1, B, A, C); 

}
