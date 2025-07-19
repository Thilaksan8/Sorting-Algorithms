#include<iostream>
#include<vector>
using namespace std;
void maxheapify(vector<int>&arr,int n,int i){
    int large=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[large]){
        large=l;
    }
    if(r<n && arr[r]>arr[large]){
        large=r;
    }
    if(large!=i){
        swap(arr[large],arr[i]);
        maxheapify(arr,n,large);
    }
}
void heapsort(vector<int>&arr,int n){
    for(int i=n/2-1;i>=0;i--){
        maxheapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        maxheapify(arr,i,0);
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
    heapsort(arr,n);
    printarray(arr);
    return 0;
   
   
}