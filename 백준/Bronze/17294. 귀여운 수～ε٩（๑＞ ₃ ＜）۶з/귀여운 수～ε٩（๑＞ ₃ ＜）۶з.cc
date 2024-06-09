#include <iostream>
using namespace std;
int main(){
    long long K;
    cin>>K;
    int cur, next, tmp, flag = 0;
    cur = K%10;
    K /= 10;
    if(K == 0){
        cout<<"◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!"<<"\n";
        return 0;
    }
    next = K%10;
    K /= 10;
    tmp = next - cur;
    if(K == 0){
        cout<<"◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!"<<"\n";
        return 0;
    }
    cur = next;
    while(K > 0){
        next = K%10;
        K /= 10;
        if(next - cur != tmp){
            flag = 1;
        }
        cur = next;
    }
    if(flag == 1){
        cout<<"흥칫뿡!! <(￣ ﹌ ￣)>"<<"\n";
    }else{
        cout<<"◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!"<<"\n";
    }
    return 0;
}