#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int l,int mid,int r){
    vector<int>sorted;
    int i=l,j=mid+1;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            sorted.push_back(arr[i]);
            i++;
        }
        else{
            sorted.push_back(arr[j]);
            j++;
        }
        
    }
    while(i<=mid){
        sorted.push_back(arr[i]);
        i++;
    }
    while(j<=r){
        sorted.push_back(arr[j]);
        j++;
    }
    for(int k=l;k<=r;k++){
        arr[k]=sorted[k-l];
    }

}
void mergesort(vector<int>&arr,int l,int r){
        if(l<r){
            int mid=(l+r)/2;
            mergesort(arr,l,mid);
            mergesort(arr,mid+1,r);
            merge(arr,l,mid,r);
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
    mergesort(arr,0,n-1);
    printarray(arr);
    return 0;
   
   
}