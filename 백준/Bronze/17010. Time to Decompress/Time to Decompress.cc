#include <iostream>
using namespace std;
int main(){
    int n, m;
    char c;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m>>c;
        for(int j=0; j<m; j++){
            cout<<c;
        }
        cout<<"\n";
    }
}