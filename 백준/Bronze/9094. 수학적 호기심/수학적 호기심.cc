#include <iostream>
using namespace std;
int main(){
    int T, n, m, answer;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>n>>m;
        answer = 0;
        for(int i=1; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(((i*i)+(j*j)+m)%(i*j) == 0){
                    answer++;
                }
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}