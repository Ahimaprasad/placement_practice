#include<iostream>
using namespace std;


void swap(int * a,int * b){
    int * temp = a;
    a = b;
    b=temp;

}

void heapify(int arr[],int n,int i){
int largest = i;
int left =2*i+1;
int right = 2*i+2;
if(left<n && arr[left]>arr[largest]){
    largest = left;
}
if (right < n && arr[right] > arr[largest])
{
    largest = right;
}

if(largest!=i){
    i = largest;
    swap(arr[i],arr[largest]);
    heapify(arr,n,i);
}

}


void heapsort(int arr[], int n){
    for(int i=n/2 -1;i>=0;i--)
        heapify(arr,n,i);
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}


int main(){
int arr[]={7,1,2,3,4,5,8};
int n =sizeof(arr)/sizeof(int);
heapsort(arr,n);
for(int i=0;i<n;i++)cout<<" "<<arr[i];
}