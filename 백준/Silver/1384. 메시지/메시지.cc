#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int n, t = 0, flag = 0, x;
    while(true){
        cin>>n;
        if(n == 0) break;
        t++;
        flag = 0;
        vector<string> vc[21];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>s;
                vc[i].push_back(s);
            }
        }
        cout<<"Group "<<t<<"\n";
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                if(vc[i][j] == "N"){
                    flag = 1;
                    if(i-j < 0) x = i - j + n;
                    else x = i - j;
                    cout<<vc[x][0]<<" was nasty about "<<vc[i][0]<<"\n";
                }
            }
        }
        if(flag == 0) cout<<"Nobody was nasty"<<"\n";
        cout<<"\n";
    }
}