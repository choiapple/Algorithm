#include <iostream>
#include <cmath>
using namespace std;
void cantor(int n){
    if(n == 0){
        cout<<"-";
        return;
    }
    int size = pow(3, n-1);
    cantor(n - 1);
    for(int i=0; i<size; i++){
        cout<<" ";
    }
    cantor(n - 1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    while(cin>>N){
        cantor(N);
        cout<<"\n";
    }
    return 0;
}