#include <iostream>
using namespace std;
int main(){
    int N, st, en, mid;
    while(true){
        cin>>N;
        if(N == 0) break;
        st = 1;
        en = 50;
        while(st <= en){
            mid = (st + en) / 2;
            cout<<mid<<" ";
            if(mid == N){
                break;
            }else if(mid > N){
                en = mid - 1;
            }else{
                st = mid + 1;
            }
        }
    }
}