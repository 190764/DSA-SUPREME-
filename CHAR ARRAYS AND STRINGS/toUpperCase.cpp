#include<iostream>
using namespace std;
int length(char ch[]){
  int i=0;
  while(ch[i]!='\0'){
    i++;
  }
  return i-1;
}
void toUpperCase(char ch[],int lengthOfString){
int index=0;
while(ch[index]!='\0'){
  if(ch[index]>='a' && ch[index]<='z'){
    ch[index]=ch[index]-'a'+'A';
  }
  index++;
}
}
int main(){
  char ch[30];
  cout<<"Taking Input"<<endl;
  cin.getline(ch,30);
  int lengthOfString=length(ch);
  toUpperCase(ch,lengthOfString);
  cout<<"Giving Output"<<endl;
  cout<<ch;
  return 0;
}