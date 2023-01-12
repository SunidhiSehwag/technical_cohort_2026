#include <iostream>
using namespace std;
int main(){
    int num,i,j,count=0;
    cout<<"enter number till where you want to print all primes:";
    cin>>num;
    for(j=1;j<num;j++){
        for(i=2;i<j;i++){
            count=j%i;
        if(count==0)
        break;
        }
        if(count!=0)
        cout<<j<<endl;
    }
}
    
