#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int visit[101] = {0, };
    int S;
    string st;
    char cp;
    cin>>S;
    cin>>st;
    for(int i=0; i<S; i++){
        if(visit[i] == 1) continue;
        if(st[i] != 'C' && st[i] != 'P') continue;
        for(int j=i+1; j<S; j++){
            if(visit[j] == 1) continue;
            if(st[j] != 'C' && st[j] != 'P') continue;
            if(st[i] != st[j]){
                swap(st[i], st[j]);
                visit[i] = 1;
                visit[j] = 1;
                break;
            }
        }
    }
    cout<<st<<"\n";
    return 0;
}