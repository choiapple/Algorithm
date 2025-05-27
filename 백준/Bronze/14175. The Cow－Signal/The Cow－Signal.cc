#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int M, N, K;
    char tmp;
    vector<vector<char> > vc;
    vector<vector<char> > answer;
    cin>>M>>N>>K;
    for(int m=0; m<M; m++){
        vector<char> ro;
        for(int n=0; n<N; n++){
            cin>>tmp;
            ro.push_back(tmp);
        }
        vc.push_back(ro);
    }
    for(int m=0; m<M; m++){
        vector<char> ro;
        for(int n=0; n<N; n++){
            for(int k=0; k<K; k++){
                ro.push_back(vc[m][n]);
            }
        }
        for(int k=0; k<K; k++){
            answer.push_back(ro);
        }
    }
    for(int m=0; m<M*K; m++){
        for(int n=0; n<N*K; n++){
            cout<<answer[m][n];
        }
        cout<<"\n";
    }
    return 0;
}