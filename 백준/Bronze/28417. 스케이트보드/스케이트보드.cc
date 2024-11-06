#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, answer = 0;
    int run[2], tric[5];
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>run[0]>>run[1]>>tric[0]>>tric[1]>>tric[2]>>tric[3]>>tric[4];
        sort(run, run+2);
        sort(tric, tric+5);
        tmp = run[1] + tric[4] + tric[3];
        if(tmp > answer){
            answer = tmp;
        }
    }
    cout<<answer<<"\n";
    return 0;
}