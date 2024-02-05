#include <iostream>
#include <vector>
using namespace std;
int answer = 0;
int N, t, p;
vector<pair<int, int> > vc;
void re(int a, int tmp){
    if(tmp > answer){
        answer = tmp;
    }
    if(a > N){
        return;
    }
    if(a + vc[a].first - 1 <= N){
        re(a + vc[a].first, tmp + vc[a].second);
    }
    re(a + 1, tmp);
}
   
int main(){
    cin>>N;
    vc.push_back(make_pair(0, 0));
    for(int i=1; i<=N; i++){
        cin>>t>>p;
        vc.push_back(make_pair(t, p));
    }
    re(1, 0);
    cout<<answer<<"\n";
}