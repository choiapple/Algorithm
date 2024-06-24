#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, x1, y1, x2, y2, flag = 0, tmp;
    cin>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>tmp;
            if(tmp == 1){
                if(flag == 0){
                    x1 = i;
                    y1 = j;
                    flag = 1;
                }else{
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }
    cout<<abs(x1 - x2) + abs(y1 - y2)<<"\n";
    return 0;
}