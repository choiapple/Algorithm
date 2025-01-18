#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, answer = 0;
    vector<int> od;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        if(tmp%2 == 0){
            answer+=tmp;
        }else{
            od.push_back(tmp);
        }
    }
    if(od.size()%2 == 0){
        for(int i=0; i<od.size(); i++){
            answer+=od[i];
        }
    }else{
        sort(od.begin(), od.end(), greater<int>());
        for(int i=0; i<od.size()-1; i++){
            answer+=od[i];
        }
    }
    cout<<answer<<"\n";
    return 0;
}