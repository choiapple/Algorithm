#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N, M, answer, total, tmp;
vector<int> vc;
void input() {
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>tmp;
        vc.push_back(tmp);
    }
    cin>>M;
}
int find(int max_num) {
    total = 0;
    for(int n=0; n<N; n++){
        total += min(vc[n], max_num);
    }
    return total;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    
    sort(vc.begin(), vc.end());
    
    int start = 0, end = vc[N-1], mid;
    
    while(start <= end){
        mid = (start + end) / 2;
        if(find(mid) <= M){
            answer = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    cout<<answer<<"\n";
    return 0;
}