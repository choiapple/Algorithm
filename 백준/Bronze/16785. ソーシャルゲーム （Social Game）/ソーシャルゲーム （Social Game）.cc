#include <iostream>
using namespace std;
int main(){
    int A, B, C, cnt = 0, tmp = 0;
    cin>>A>>B>>C;
    while(true){
        if(tmp >= C) break;
        cnt++;
        tmp+=A;
        if(cnt != 0 && cnt % 7 == 0) tmp += B;
    }
    cout<<cnt<<"\n";
    return 0;
}