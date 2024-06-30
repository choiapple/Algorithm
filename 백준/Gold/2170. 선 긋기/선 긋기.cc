#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N, a, b, answer = 0;
vector<pair<int, int> > vc;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>a>>b;
        vc.push_back(make_pair(a, b));
    }
    sort(vc.begin(), vc.end());
    int start = vc[0].first;
    int end = vc[0].second;
    for(int i=1; i<N; i++){
        int s = vc[i].first;
        int e = vc[i].second;
        if(end >= s){
            if(end < e){
                end = e;
            }
        }else{
            answer += end - start;
            start = s;
            end = e;
        }
    }
    answer += end - start;
    cout<<answer<<"\n";
}