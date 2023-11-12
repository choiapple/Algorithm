#include <iostream>
using namespace std;
int main(){
    int aArray[46] = {0, };
    int bArray[46] = {0, };
    int K;
    cin>>K;
    aArray[0] = 1;
    aArray[1] = 0;
    aArray[2] = 1;
    aArray[3] = 1;
    aArray[4] = 2;
    bArray[0] = 0;
    bArray[1] = 1;
    bArray[2] = 1;
    bArray[3] = 2;
    bArray[4] = 3;
    for(int k=5; k<=K; k++){
        bArray[k] = bArray[k-1] + aArray[k-1];
        aArray[k] = bArray[k-1];
    }
    cout<<aArray[K]<<" "<<bArray[K]<<"\n";
    return 0;
}