#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, L, R, S, answer = 0;
    cin>>T;
    while(T-- > 0){
        cin>>L>>R>>S;
        if(abs(S - L) < abs(S - R)){
            answer = 2 * abs(S - L) + 1;
        }else{
            answer = 2 * abs(S - R);
        }
        cout<<answer<<"\n";
    }
    return 0;
}