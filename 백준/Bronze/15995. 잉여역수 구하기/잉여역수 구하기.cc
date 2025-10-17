#include <iostream>
using namespace std;
int main(){
    int a, m;
    cin>>a>>m;
    for(int i=1; i<=10000; i++){
        if(a*i%m == 1){
            cout<<i<<"\n";
            return 0;
        }
    }
    return 0;
}