#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, tmp, k, flag = 0;
    map<int, int> m;
    cin>>n;
    m[n] = 1;
    while(n != 1){
        tmp = 0;
        while(n > 0){
            k = n%10;
            tmp += k*k;
            n/=10;
        }
        if(m.find(tmp) != m.end()){
            flag = 1;
            break;
        }
        m[tmp] = 1;
        n = tmp;
    }
    if(flag == 0) cout<<"HAPPY"<<"\n";
    else cout<<"UNHAPPY"<<"\n";
    return 0;
}