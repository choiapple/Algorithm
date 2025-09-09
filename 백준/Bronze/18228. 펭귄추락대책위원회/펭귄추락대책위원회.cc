#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, flag = 0, min_l = 2147000000, min_r = 2147000000;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        if(tmp == -1){
            flag = 1;
            continue;
        }
        if(flag == 0){
            if(min_l > tmp){
                min_l = tmp;
            }
        }else{
            if(min_r > tmp){
                min_r = tmp;
            }
        }
    }
    cout<<min_l+min_r<<"\n";
    return 0;
}