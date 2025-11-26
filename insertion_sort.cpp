#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n){
    for(int i=1;i<n-1;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0&& arr[prev]<curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={64,25,12,22,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    cout<<"Sorted array: \n";
    printarray(arr,n);
    return 0;
}