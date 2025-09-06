#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, answer;
    string s;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>N;
        answer = 0;
        for(int n=0; n<N; n++){
            cin>>s;
            if(s == "sheep") answer++;
        }
        cout<<"Case "<<t<<": This list contains "<<answer<<" sheep."<<"\n";
        cout<<"\n";
    }
}