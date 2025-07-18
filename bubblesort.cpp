#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
        if(!swapped)
            break;
    } 
}
void printarray(vector<int>&arr){
    cout<<"Sorted array";
    for(int i: arr)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    
    int input;
    vector<int>arr;
    cout<<"Enter numbers (Press Ctrl+D or Ctrl +Z when done)";
    while(cin>>input)
        arr.push_back(input);

    cout<<"Original array";
    for(int val:arr)
        cout<<val<<" ";
    bubblesort(arr);
    printarray(arr);
    return 0;
}