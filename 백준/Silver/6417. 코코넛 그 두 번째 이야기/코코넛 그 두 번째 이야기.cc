#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    string command;
    while(true){
        cin>>N;
        if(N == -1) break;
        int maxK = 0;
        for(int i=2; i<sqrt(N)+1; i++){
            int tmp = N;
            bool chk = true;
            for(int j=0; j<i; j++){
                tmp -= 1;
                if(tmp % i == 0){
                    tmp = (tmp * (i-1)) / i;
                }else{
                    chk = false;
                    break;
                }
            }
            if(chk && tmp%i == 0) maxK = i;
        }
        if(maxK < 2){
            cout<<N<<" coconuts, no solution"<<"\n";
        }else{
            cout<<N<<" coconuts, "<<maxK<<" people and 1 monkey"<<"\n";
        }
    }
}