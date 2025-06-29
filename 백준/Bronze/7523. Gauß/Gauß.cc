#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    long long n, m, answer;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>n>>m;
        answer = (n+m) * (m-n+1)/2;
        cout<<"Scenario #"<<t<<":"<<"\n";
        cout<<answer<<"\n";
        cout<<"\n";
    }
}
