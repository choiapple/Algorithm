#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int C, N, arr[1000001] = {0, }, a, b, answer = 987654321;
    vector<pair<int, int> > vc;
    cin>>C>>N;
    for(int n=0; n<N; n++){
        cin>>a>>b;
        vc.push_back(make_pair(a, b));
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<=1000000; j++){
            if(j >= vc[i].first){
                arr[j] = max(arr[j], arr[j - vc[i].first] + vc[i].second);
                if(arr[j] >= C){
                    answer = min(answer, j);
                    break;
                }
            }
        }
    }
    cout<<answer;
    return 0;
}