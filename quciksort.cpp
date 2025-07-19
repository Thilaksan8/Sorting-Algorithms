#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int l,int r){
    int pivot=arr[l];
    int start=l+1;
    int end=r;
    while(start<=end){
        while(start<=end && arr[start]<=pivot){
            start++;
        }
        while(start<=end && arr[end]>pivot){
            end--;
        }
        if(start<end){
           swap(arr[start],arr[end]);
        }
    }
    swap(arr[l],arr[end]);
    return end;
}
void quicksort(vector<int>&arr,int l,int r){
    if(l<r){
        int loc=partition(arr,l,r);
        quicksort(arr,l,loc-1);
        quicksort(arr,loc+1,r);
    }    
}
void printarray(vector<int>&arr){
    cout<<"Sorted elements:";
    for(int val:arr)
        cout<<val<<" ";
    cout<<endl;
}
int main(){
    vector<int>arr;
    int input;
    cout<<"Enter elements(Press Ctrl+D or Ctrl+z when done)";
    while(cin>>input)
        arr.push_back(input);
    int n=arr.size();
    quicksort(arr,0,n-1);
    printarray(arr);
    return 0;
   
   
}