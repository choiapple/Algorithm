#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string s;
    char c;
    cin>>N;
    for(int n=1; n<=N; n++){
        cin>>s;
        cout<<"String #"<<n<<"\n";
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'Z') c = 'A';
            else c = s[i] + 1;
            cout<<c;
        }
        cout<<"\n\n";
    }
}