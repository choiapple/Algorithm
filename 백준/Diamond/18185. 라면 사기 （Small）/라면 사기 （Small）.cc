#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int answer = 0;
vector<int> vc;
void buy(int idx, int size){
    if(idx >= size) return;
    if(idx < size && vc[idx] != 0){
        vc[idx]--;
        answer += 3;
        if(idx + 1 < size && vc[idx+1] != 0){
            int tmp2 = vc[idx+1];
            vc[idx+1]--;
            answer += 2;
            if(idx + 2 < size && vc[idx+2] != 0){
                if(vc[idx+2] >= tmp2){
                    vc[idx+2]--;
                    answer += 2;
                }
            }
        }
        buy(idx, size);
    }else{
        buy(idx+1, size);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>tmp;
        vc.push_back(tmp);
    }
    buy(0, N);
    cout<<answer<<"\n";
    return 0;
}