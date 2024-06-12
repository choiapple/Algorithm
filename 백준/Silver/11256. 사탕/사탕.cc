#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, J, N, r, c, answer;
    cin>>T;
    while(T--){
        cin>>J>>N;
        vector<int> vc;
        answer = 0;
        for(int i=0; i<N; i++){
            cin>>r>>c;
            vc.push_back(r*c);
        }
        sort(vc.begin(), vc.end(), greater<int>());
        for(int i=0; i<N; i++){
            if(J > 0){
                J -= vc[i];
                answer++;
            }else{
                break;
            }
        }
        cout<<answer<<"\n";
    }
}