#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int a, int b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, flag = 0;
    vector<int> init;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        init.push_back(tmp);
    }
    flag = N;
    for(int i=0; i<N-1; i++){
        if(init[i] > init[i+1]){
            flag = i;
        }
    }
    if(flag == N){
        cout<<-1<<"\n";
        return 0;
    }
    for(int i=N-1; i>flag; i--){
        if(init[i] < init[flag]){
            tmp = init[flag];
            init[flag] = init[i];
            init[i] = tmp;
            break;
        }
    }
    sort(init.begin()+flag+1, init.end(), compare);
    for(int i=0; i<N; i++){
        cout<<init[i]<<" ";
    }
    return 0;
}