#include <iostream>
#include <cmath>
using namespace std;
int main(){
    unsigned long long N, tmp;
    cin>>N;
    int k = 1;
    while(k <= 64){
        tmp = 1;
        for(int i=1; i<=k; i++){
            tmp *= 2;
        }
        tmp -= 1;
        for(int i=k+1; i<=64; i++){
            tmp *= 2;
        }
        if(N == tmp) break;
        k++;
    }
    cout<<k<<"\n";
    return 0;
}