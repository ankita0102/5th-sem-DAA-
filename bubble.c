
#include <stdio.h>

// perform the bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[size], size;
  
  printf("Enter length of the array: \n"); 
  scanf("%d", &size); 
  printf("Enter elements of the array: \n"); 
  for(int t = 0; t< n; t++)
    scanf("%d", %data[t]); 
  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}
