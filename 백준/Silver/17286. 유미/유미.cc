#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<pair<int, int> > vc;
pair<int, int> u;
int visit[3] = {0, };
int answer = 2146000000;
int doubles(int a){
    return a*a;
}
double cal(int a, int b, int c, int d){
    return sqrt(doubles(a - b) + doubles(c - d));
}
void find(int x, int y, double total, int k){
    if(k == 3){
        if(total < answer){
            answer = total;
        }
        return;
    }
    for(int i=0; i<3; i++){
        if(visit[i] == 0){
            visit[i] = 1;
            total += cal(x, vc[i].first, y, vc[i].second);
            find(vc[i].first, vc[i].second, total, k+1);
            visit[i] = 0;
            total -= cal(x, vc[i].first, y, vc[i].second);
        }
    }
}
int main(){
    int x, y;
    cin>>x>>y;
    u = make_pair(x, y);
    for(int i=0; i<3; i++){
        cin>>x>>y;
        vc.push_back(make_pair(x, y));
    }
    find(u.first, u.second, 0, 0);
    cout<<answer<<"\n";
    return 0;
}