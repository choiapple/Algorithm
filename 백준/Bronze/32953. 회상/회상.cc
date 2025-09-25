#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, answer = 0, K;
    string stu;
    map<string, int> student;
    cin>>N>>M;
    for(int i=0; i<N; i++){
        cin>>K;
        for(int k=0; k<K; k++){
            cin>>stu;
            student[stu]++;
        }
    }
    for(pair<string, int> m : student){
        if(m.second >= M) answer++;
    }
    cout<<answer<<"\n";
    return 0;
}