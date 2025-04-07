#include <iostream>
#include <string>
using namespace std;
string check(long long A, long long B){
    string re = "";
    while(A > 0 && B > 0){
        re = to_string((A%10) * (B%10)) + re;
        A /= 10;
        B /= 10;
    }
    if(A > 0){
        while(A > 0){
            re = to_string(A%10) + re;
            A /= 10;
        }
    }else{
        while(B > 0){
            re = to_string(B%10) + re;
            B /= 10;
        }
    }
    return re;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    long long A, B; 
    string origin, strange;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>A>>B;
        origin = to_string(A * B);
        strange = check(A, B);
        if(origin == strange) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
    return 0;
}