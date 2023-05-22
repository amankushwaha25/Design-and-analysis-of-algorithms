#include<iostream>
using namespace std;

void swap(int *a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0; j<n-i-1;j++){
            if(arr[j+1] < arr[j])
                swap(&arr[j],&arr[j+1]);
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";

}

int main(){
    int arr[] = {3,46,7,10,-2,5,30,16,37};
    int n = sizeof(arr)/sizeof(int);

    bubble_sort(arr,n);
    
}