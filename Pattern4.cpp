#include<iostream>
using namespace std;

int main(){
  int i=1;

  while(i<5){
    int j=1;
    while(j<5){
      cout<<4-j+1;    /*n-j+1*/
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}
