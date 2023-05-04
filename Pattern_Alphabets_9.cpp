#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  char ch='A';
  int count=0;

  int row=1;
  while(row<=n){
    char ch='A'+row-1;
    int column=1;
    while(column<=n){
      cout<<ch;
      column=column+1;
      count=count+1;
      ch=ch+1;
    }
    cout<<endl;
    row=row+1;
  }
}
