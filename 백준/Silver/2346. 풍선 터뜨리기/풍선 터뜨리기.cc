#include <iostream>
#include <deque>
using namespace std;
int main(){
    int N, tmp;
    deque<pair<int, int> > dq;
    cin>>N;
    for(int i=1; i<=N; i++){
        cin>>tmp;
        dq.push_back(make_pair(i, tmp));
    }
    while(!dq.empty()){
        pair<int, int> balloon = dq.front();
        cout<<balloon.first<<" ";
        dq.pop_front();
        if(dq.empty()) break;
        if(balloon.second > 0){
            for(int i=1; i<balloon.second; i++){
                pair<int, int> nBalloon = dq.front();
                dq.pop_front();
                dq.push_back(nBalloon);
            }
        }else{
            for(int i=1; i<=-balloon.second; i++){
                pair<int, int> nBalloon = dq.back();
                dq.pop_back();
                dq.push_front(nBalloon);
            }
        }
    }
}