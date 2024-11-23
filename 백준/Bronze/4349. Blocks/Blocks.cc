#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, k, answer;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        answer = 2147000000;
        for(int j=1; j<=tmp; j++){
            for(int x=1; x<=tmp; x++){
                if(j * x > tmp) break;
                for(int y=1; y<=sqrt(tmp); y++){
                    if(j * x * y == tmp){
                        k = 2*j*x + 2*j*y + 2*x*y;
                        if(answer > k){
                            answer = k;
                        }
                    }
                }
            }
        }
        cout<<answer<<"\n";
    }
}