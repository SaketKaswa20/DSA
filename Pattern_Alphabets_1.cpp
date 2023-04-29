#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int rows=1;
  
  while(rows<=n){
    int column=1;
    while(column<=n){
      char ch='A'+rows-1;
      cout<<ch;
      column=column+1;
    }
    cout<<endl;
    rows=rows+1;
  }
}
