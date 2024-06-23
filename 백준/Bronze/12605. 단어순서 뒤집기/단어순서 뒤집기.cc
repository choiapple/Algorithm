#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, j;
    string s, sss;
    cin>>N;
    cin.ignore();
    for(int i=0; i<N; i++){
        getline(cin, s);
        j = 0;
        string ss[100];
        stringstream stream(s);
        while(stream>>sss){
            ss[j++] = sss;
        }
        cout<<"Case #"<<i+1<<": "<<ss[j-1];
        for(int k=j-2; k>=0; k--){
            cout<<" "<<ss[k];
        }
        cout<<"\n";
    }
}