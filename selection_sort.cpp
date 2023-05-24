#include<iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selection_sort(int *array,int size){
    for (int i = 0; i < size - 1; i++) {
    int min = i;
    for (int j = i + 1; j < size ; j++) {
      if (array[j] < array[min])
        min = j;
    }
    swap(&array[min], &array[i]);
  }
  for(int i=0;i<size;i++)cout<<array[i]<<" ";
}

int main(){
    int arr[] = {3,46,7,10,-2,5,30,16,37};
    int n = sizeof(arr)/sizeof(int);

    selection_sort(arr,n);
    
}