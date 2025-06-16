#include <iostream>
using namespace std;
int main(){
    int N, visit[3] = {0, }, max_n = 0;
    string s;
    char c[3] = {'B', 'S', 'A'};
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){
            if(s[i] == c[j]){
                visit[j]++;
            }
        }
    }
    for(int i=0; i<3; i++){
        if(max_n < visit[i]){
            max_n = visit[i];
        }
    }
    if(visit[0] == visit[1] && visit[0] == visit[2]){
        cout<<"SCU";
        
    }else{
        for(int i=0; i<3; i++){
            if(max_n == visit[i]){
                cout<<c[i];
            }
        }
    }
    
    return 0;
}