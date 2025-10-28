#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, tmp, st, en, mid, answer;
    vector<int> vc;
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>tmp;
        vc.push_back(tmp);
    }
    sort(vc.begin(), vc.end());
    for(int m=0; m<M; m++){
        cin>>tmp;
        st = 0;
        en = N-1;
        answer = -1;
        while(st <= en){
            mid = (st + en) / 2;
            if(vc[mid] == tmp){
                answer = mid;
                en = mid - 1;
            }else if(vc[mid] > tmp){
                en = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}