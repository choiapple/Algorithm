#include <deque>
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<int> dq;
    int N, T, X, tmp;
    cin>>N;
    while(N--){
        cin>>T;
        if(T == 1){
            cin>>X;
            dq.push_front(X);
        }else if(T == 2){
            cin>>X;
            dq.push_back(X);
        }else if(T == 3){
            if(!dq.empty()){
                tmp = dq.front();
                dq.pop_front();
                cout<<tmp<<"\n";
            }else{
                cout<<-1<<"\n";
            }
        }else if(T == 4){
            if(!dq.empty()){
                tmp = dq.back();
                dq.pop_back();
                cout<<tmp<<"\n";
            }else{
                cout<<-1<<"\n";
            }
        }else if(T == 5){
            cout<<dq.size()<<"\n";
        }else if(T == 6){
            if(dq.empty()){
                cout<<1<<"\n";
            }else{
                cout<<0<<"\n";
            }
        }else if(T == 7){
            if(dq.empty()){
                cout<<-1<<"\n";
            }else{
                cout<<dq.front()<<"\n";
            }
        }else if(T == 8){
            if(dq.empty()){
                cout<<-1<<"\n";
            }else{
                cout<<dq.back()<<"\n";
            }
        }
    }
}