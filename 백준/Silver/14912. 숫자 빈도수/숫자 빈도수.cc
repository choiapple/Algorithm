#include <iostream>
using namespace std;
int main(){
    int n, d;
    cin>>n>>d;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        int tmp = i;
        while(tmp>0){
            if(tmp%10 == d){
                cnt++;
            }
            tmp/=10;
        }
    }
    cout<<cnt<<"\n";
}