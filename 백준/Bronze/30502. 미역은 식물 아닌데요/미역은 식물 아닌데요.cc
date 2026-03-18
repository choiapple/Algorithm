#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin>>N>>M;
    vector<vector<int> > v(N+1, vector<int>(2, -1));
    while(M--){
        int a, c;
        char b;
        cin>>a>>b>>c;
        if(b == 'P'){
            v[a][0] = c;
        }else{
            v[a][1] = c;
        }
    }
    int min = 0, max = 0;
    for(int i=1; i<=N; i++){
        if(v[i][0] != 0 && v[i][1] != 1){
            max++;
            if(v[i][0] == 1 && v[i][1] == 0){
                min++;
            }
        }
    }
    cout<<min<<" "<<max;
}