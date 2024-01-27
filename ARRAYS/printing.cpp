#include<bits/stdc++.h>
using namespace std;
void printPairs(vector<int>&arr,int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
    }
  cout<<endl;
  }
}

void printTriplets(vector<int>&arr,int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
       cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<" ";
      }
    }
  cout<<endl;
  }
}
int main(){
  vector <int> arr={1,2,3};
  int n=arr.size();
  printPairs(arr,n);
  // printTriplets(arr,n);
  return 0;
}