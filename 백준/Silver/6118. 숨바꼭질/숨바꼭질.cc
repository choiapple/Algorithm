#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, A, B;
    int visit[20001] = {0, };
    vector<int> vc[20001];
    int answer = 0;
    int answer2 = 0;
    int answer3 = 0;
    cin>>N>>M;
    for(int i=0; i<M; i++){
        cin>>A>>B;
        vc[A].push_back(B);
        vc[B].push_back(A);
    }
    queue<int> q;
    q.push(1);
    visit[1] = 1;
    while(!q.empty()){
        answer2++;
        int len = q.size();
        int min_n = 2147000000;
        for(int i=0; i<len; i++){
            int start = q.front();
            q.pop();
            if(min_n > start) min_n = start;
            for(int j=0; j<vc[start].size(); j++){
                int end = vc[start][j];
                if(visit[end] == 0){
                    q.push(end);
                    visit[end] = 1;
                }
            }
        }
        if(q.empty()){
            answer = min_n;
            answer3 = len;
        }
    }
    cout<<answer<<" "<<answer2-1<<" "<<answer3<<"\n";
    return 0;
}