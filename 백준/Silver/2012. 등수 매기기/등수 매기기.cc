#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    int arr[500001] = {0, };
    int visit[500001] = {0, };
    int visit2[500001] = {0, };
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    for(int i=0; i<N; i++){
        int tmp = arr[i];
        if(tmp <= N && visit2[i] == 0 && visit[tmp] == 0){
            visit[tmp] = 1;
            visit2[i] = 1;
        }
    }
    vector<int> vc;
    for(int i=0; i<N; i++){
        if(visit2[i] == 0){
            vc.push_back(arr[i]);
        }
    }
    vector<int> vc2;
    for(int i=1; i<=N; i++){
        if(visit[i] == 0){
            vc2.push_back(i);
        }
    }
    long long answer = 0;
    int len = vc.size();
    for(int i=0; i<len; i++){
        answer += abs(vc[i] - vc2[i]);
    }
    cout<<answer<<"\n";
    
}