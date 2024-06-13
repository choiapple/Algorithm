#include <iostream>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, A, X;
    stack<int> st;
    cin>>N;
    while(N--){
        cin>>A;
        if(A == 1){
            cin>>X;
            st.push(X);
        }else if(A == 2){
            if(st.size() < 1){
                cout<<-1<<"\n";
            }else{
                cout<<st.top()<<"\n";
                st.pop();
            }
        }else if(A == 3){
            cout<<st.size()<<"\n";
        }else if(A == 4){
            if(st.empty()){
                cout<<1<<"\n";
            }else{
                cout<<0<<"\n";
            }
        }else if(A == 5){
            if(st.size() < 1){
                cout<<-1<<"\n";
            }else{
                cout<<st.top()<<"\n";
            }
        }
    }
}