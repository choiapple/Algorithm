#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string str, ans;
int N, x;
int visit[11] = {0, };
void DFS(string s){
    if(s.length() == str.length()){
        x+=1;
        if(x == N){
            ans = s;
        }
        return;
    }
    for(int i=0; i<str.length(); i++){
        if(visit[i] == 1) continue;
        if(x >= N) continue;
        visit[i] = 1;
        DFS(s+str[i]);
        visit[i] = 0;
    }
}
int main(){
    while(cin>>str>>N){
        int time = 1;
        for(int i=1; i<=str.length(); i++){
            time *= i;
        }
        if(time < N){
            cout<<str<<" "<<N<<" = "<<"No permutation"<<"\n";
        }else{
            fill(visit, visit+11, 0);
            x = 0;
            DFS("");
            cout<<str<<" "<<N<<" = "<<ans<<"\n";
        }
    }
}