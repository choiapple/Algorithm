#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int N, graph[26];
string s;
bool cmp(int a, int b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s;
        int p = 1;
        for(int j=s.length()-1; j>=0; j--){
            graph[s[j]-'A'] += p;
            p *= 10;
        }
    }
    sort(graph, graph+26, cmp);
    int num = 9;
    int answer = 0;
    for(int i=0; i<26; i++){
        if(graph[i] == 0) break;
        answer += graph[i] * num;
        num--;
    }
    cout<<answer<<"\n";
    return 0;
}