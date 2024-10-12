#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int X, tmp;
vector<int> vc, v;
int visit[10] = {0, };
void re(int x, int k){
    if(k == vc.size()){
        v.push_back(x);
        return;
    }
    for(int i=0; i<vc.size(); i++){
        if(visit[i] == 1) continue;
        visit[i] = 1;
        re(x*10+vc[i], k+1);
        visit[i] = 0;
    }
    return;
}
int main(){
    int answer = 0;
    cin>>X;
    tmp = X;
    while(tmp > 0){
        vc.push_back(tmp%10);
        tmp /= 10;
    }
    re(0, 0);
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(v[i] > X){
            answer = v[i];
            break;
        }
    }
    cout<<answer<<"\n";
    return 0;
}