#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int>&arr){
    
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