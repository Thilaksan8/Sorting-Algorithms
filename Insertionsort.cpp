#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    insertion(arr);
    printarray(arr);
    return 0;
   
   
}