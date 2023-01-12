#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number to find its inverse:";
    cin >> n;
    
    int counter = 1;
    int ans = 0;

    while(n != 0){
        int r = n % 10;
        n /= 10;

        ans += counter * pow(10,r-1);
        counter++;
    }
    cout<<ans<<endl;
    return 0;
}
