/*Hecker :)*/ 

#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int row=1;
  while(row<=n){

    int stars=n;
    while(stars){
      cout<<"*";
      stars=stars-1;
    }

    int space=n-row+1;
    while(space){
      cout<<" ";
      space=space-1;
    }
  }
  cout<<endl;
  row=row+1;
}
