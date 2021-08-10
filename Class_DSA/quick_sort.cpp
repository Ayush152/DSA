#include <bits/stdc++.h>
using namespace std;
void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int partition(int arr[], int left, int right){
    int pivot = arr[right];
    int i=left-1;
    for(int j=left ; j<right ; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1, right);
    return i+1;
}
void quicksort(int arr[], int l, int r){
    if(l<r){
        int pivot = partition(arr,l,r);
        quicksort(arr, l, pivot-1);
        quicksort(arr,pivot+1, r);
    }
}

int main() {
  int arr[]= {2,4,1,6,3,9,8,5};
  quicksort(arr,0,7);
  for(int i=0 ; i<8 ; i++){
      cout<<arr[i]<<" ";
  }
  
    return 0;
}