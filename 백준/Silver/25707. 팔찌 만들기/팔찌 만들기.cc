#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, min = 2147000000, max = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        if(min > tmp){
            min = tmp;
        }
        if(max < tmp){
            max = tmp;
        }
    }
    cout<<2*(max - min)<<"\n";
    return 0;
}