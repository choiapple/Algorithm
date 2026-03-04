#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, a, b, tmp, k, n;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>a>>b;
        cout<<a<<" ";
        tmp = 0;
        k = 1;
        n = 0;
        while(n < b){
            tmp += k;
            k++;
            n++;
        }
        cout<<tmp<<" ";
        tmp = 0;
        k = 1;
        n = 0;
        while(n < b){
            if(k%2 == 1){
                tmp += k;
                n++;
            }
            k++;
        }
        cout<<tmp<<" ";
        tmp = 0;
        k = 1;
        n = 0;
        while(n < b){
            if(k%2 == 0){
                tmp += k;
                n++;
            }
            k++;
        }
        cout<<tmp<<"\n";
    }
    return 0;
}