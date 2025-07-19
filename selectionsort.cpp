#include<iostream>
#include<vector>
using namespace std;
void selection(vector<int>&arr){

}
void printarray(vector<int>&arr){
    cout<<"Sorted elements";
    for(int val:arr)
        cout<<val<<" ";
}
int main(){
    vector<int>arr;
    int input;
    cout<<"Enter elements(Press Ctrl+D or Ctrl+z when done)";
    while(cin>>input)
        arr.push_back(input);
    
    return 0;
    printarray(arr);
    selection(arr);
}