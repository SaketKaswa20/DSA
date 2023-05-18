#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int deci=0;
  int i=0;
  int digit=0;
  while(n!=0){
    digit=n%10;
    deci=(digit*pow(2,i))+deci;
    n=n/10;
    i++;
  }
  cout<<deci<<endl;
}
