#include <iostream>
#include <string>
using namespace std;
int main(){
    long long N;
    int start, cur, pre, flag = 0;
    cin>>N;
    cin>>start;
    if(N > 5){
        cout<<"Love is open door"<<"\n";
    }else{
        if(start == 1){
            cur = 0;
            pre = 1;
        }else{
            cur = 1;
            pre = 0;
        }
        for(int i=2; i<=N; i++){
            if(flag == 0){
                cout<<cur<<"\n";
                flag = 1;
            }else{
                cout<<pre<<"\n";
                flag = 0;
            }
        }
    }
}