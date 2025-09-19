#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k, f, d, answer_d = 2147000000, answer = 0;
    cin>>n>>m>>k;
    for(int i=1; i<=k; i++){
        cin>>f>>d;
        if((f-1) + (m-d) < answer_d){
            answer_d = (f-1) + (m-d);
            answer = i;
        }
    }
    cout<<answer<<"\n";
    return 0;
}