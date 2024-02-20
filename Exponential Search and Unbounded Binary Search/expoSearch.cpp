#include<iostream>
using namespace std;
int bs(int arr[],int target,int start,int end){
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) end=mid-1;
    else start=mid+1;
  }
  return -1;
}

int main(){
  int arr[12]={2,4,6,8,9,11,21,34,54,67,87,99};
  int n=sizeof(arr)/sizeof(int);
  int target;
  cout<<"Enter target"<<endl;
  cin>>target;
    if(arr[0]==target) return 0;
    int i=1;
    while(i<n && arr[i]<=target){
      i*=2;
    }
    int ans=bs(arr,target,i/2,min(i,n-1));
    cout<<ans;

  return 0;
}