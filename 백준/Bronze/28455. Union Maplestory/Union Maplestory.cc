#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(int a, int b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, total = 0, level = 0;
    vector<int> vc;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>tmp;
        vc.push_back(tmp);
    }
    sort(vc.begin(), vc.end(), compare);
    for(int n=0; n<N; n++){
        if(n < 42){
            total += vc[n];
            if(vc[n] >= 250){
                level += 5;
            }else if(vc[n] >= 200){
                level += 4;
            }else if(vc[n] >= 140){
                level += 3;
            }else if(vc[n] >= 100){
                level += 2;
            }else if(vc[n] >= 60){
                level += 1;
            }
        }
    }
    cout<<total<<" "<<level<<"\n";
    return 0;
}