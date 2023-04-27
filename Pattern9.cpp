#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int rows=1;
  
  while(rows<=n){
    int column=1;
    int count=rows;
    while(column<=rows){
      cout<<count;
      count=count+1;
      column=column+1;
    }
    cout<<endl;
    rows=rows+1;
  }
}
