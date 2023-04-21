#include<iostream>
using namespace std;

int main(){
    int i=1;
    int sum=0;
    int n;
    cout<<"Please enter a number:";
    cin>>n;
    
    while(i<=n){
        
        if(i%2==0){
            sum=sum+i;
            i=i+1;
        }
        
        else{
            i=i+1;
        }
    }    
    cout<<sum;
}
