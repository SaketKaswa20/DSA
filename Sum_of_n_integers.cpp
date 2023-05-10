/*Sum of n integers*/

#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Please enter value of n:";
  cin>>n; 
  
  int sum=0;
  int i=1;

  for(;i<=n;i++){
    sum=sum+i;
  }
  cout<<"sum of numbers is:"<<sum<<endl;
}
