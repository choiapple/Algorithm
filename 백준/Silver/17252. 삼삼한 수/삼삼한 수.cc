#include <iostream>
using namespace std;
int main(){
    long long x;
    cin>>x;
    if(x == 0){
        cout<<"NO";
        return 0;
    }
    while(x > 0){
        if(x%3 == 2){
            cout<<"NO";
            return 0;
        }
        x /= 3;
    }
    cout<<"YES";
    return 0;
}