#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long tmp = 0;
    for(int i=1; i<=n; i++){
        tmp += i;
    }
    cout<<tmp<<"\n";
    cout<<tmp*tmp<<"\n";
    tmp = 0;
    for(int i=1; i<=n; i++){
        tmp += i*i*i;
    }
    cout<<tmp<<"\n";
}