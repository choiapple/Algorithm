#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    int answer = 2147000000;
    for(int i=0; i<=b.length()-a.length(); i++){
        int cnt = 0;
        for(int j=0; j<a.length(); j++){
            if(a[j] != b[j+i]) cnt++;
        }
        answer = min(answer, cnt);
    }
    cout<<answer<<"\n";
}