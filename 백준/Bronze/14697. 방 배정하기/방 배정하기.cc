#include <iostream>
using namespace std;
int main(){
    int a, b, c, n, aa, bb, cc, answer = 0;
    cin>>a>>b>>c>>n;
    aa = n/a;
    bb = n/b;
    cc = n/c;
    for(int i=0; i<=aa; i++){
        for(int j=0; j<=bb; j++){
            for(int k=0; k<=cc; k++){
                if(a*i + b*j + c*k == n){
                    answer = 1;
                    break;
                }
            }
            if(answer == 1){
                break;
            }
        }
        if(answer == 1){
            break;
        }
    }
    cout<<answer<<"\n";
    return 0;
}