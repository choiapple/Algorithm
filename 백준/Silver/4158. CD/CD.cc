#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, answer;
    long long tmp;
    while(true){
        vector<long long> vc;
        answer = 0;
        cin>>N>>M;
        if(N == 0 && M == 0){
            return 0;
        }
        for(int i=0; i<N; i++){
            cin>>tmp;
            vc.push_back(tmp);
        }
        sort(vc.begin(), vc.end());
        for(int i=0; i<M; i++){
            cin>>tmp;
            if(binary_search(vc.begin(), vc.end(), tmp)){
                answer++;
            }
        }
        cout<<answer<<"\n";
    }
}