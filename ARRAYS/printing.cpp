#include <bits/stdc++.h>
using namespace std;
// void printPairs(vector<int>&arr,int n){
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
//     }
//   cout<<endl;
//   }
// }

// void printTriplets(vector<int>&arr,int n){
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       for(int k=0;k<n;k++){
//        cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<" ";
//       }
//     }
//   cout<<endl;
//   }
// }
// int main(){
//   vector <int> arr={1,2,3};
//   int n=arr.size();
//   printPairs(arr,n);
//   // printTriplets(arr,n);
//   return 0;
// }

// COLUMN WISE SUM

// void columnWiseSum(int arr[][4],int row,int col){

//  for(int i=0;i<col;i++){int sum=0;
//   for(int j=0;j<row;j++){
//     sum+=arr[j][i];
//   }
//   cout<< sum<<" ";
//  }
//  cout<<endl;
// }

// int main(){
//   int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//   int row=3,col=4;
//    columnWiseSum(arr,row,col);
//   return 0;
// }

// TRANSPOSE

// void transposeOfMatrix(int arr[4][4], int n, int m)
// {
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i+1; j < m; j++)   //j=i initialisation is also correct

//     {
//     swap(arr[i][j],arr[j][i]);
//     }
//   }

//  for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//     cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
  
// }

// int main()
// {
//   int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  
//   int n = 4, m = 4;
//   transposeOfMatrix(arr,n,m);
//   return 0;
// }


//SOR NEGATIVES AND POSITIVES
void func(vector<int> arr,int n){
  int j=0;
 for(int i=0;i<n;i++){
  if(arr[i]<0){
    swap(arr[i],arr[j]);
    j++;
  }
 }
 for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
 }
  }

int main(){
  vector<int> arr={5,1,-3,4,-1,0,-8,7,-10};
  // vector<int> arr={23,-7,12,-10,-11,40,60};
  int n=arr.size();
  func(arr,n);
  return 0;
}