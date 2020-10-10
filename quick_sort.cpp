#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int i=s-1;
    int j = s;
    int pivot = arr[e];
    for(; j<=e -1; ){
        if(arr[j]<= pivot){
            //merge the smaller element in region 1
            i = i+1;
            swap(arr[i], arr[j]);
        }
        //expand the larger region
        j++;
    }
    //place the pivot element in the correct position
    swap(arr[i+1], arr[e]);
    return i+1;
}

void quickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);//left part of arr
    quickSort(arr, p, e); //right part of arr
}

int main() {
    int arr[] = {2,1,4,5,6,3,7};
    int n = sizeof(arr)/sizeof(int);
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
