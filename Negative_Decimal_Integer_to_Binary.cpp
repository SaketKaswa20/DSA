#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int posn=-1*(n);
  int ans=0;
  int i=0;
  int j=0;
  int comp=0;
  while(posn!=0){
    int bit = posn&1;
    ans=(bit* pow(10,i))+ans;
    posn=posn>>1;
    i++;
  }
  comp=~(ans);
  comp=comp+1;
  cout<<comp<<endl;
}
