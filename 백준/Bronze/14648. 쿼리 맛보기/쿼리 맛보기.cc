#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q, a, b, c, d, e, k;
    long long arr[1001] = {0, }, tmp, tmp2;
    cin>>n>>q;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<q; i++){
        cin>>e;
        if(e == 1){
            cin>>a>>b;
            tmp = 0;
            for(int j=a; j<=b; j++){
                tmp += arr[j];
            }
            cout<<tmp<<"\n";
            k = arr[a];
            arr[a] = arr[b];
            arr[b] = k;
        }else{
            cin>>a>>b>>c>>d;
            tmp = 0;
            tmp2 = 0;
            for(int j=a; j<=b; j++){
                tmp += arr[j];
            }
            for(int j=c; j<=d; j++){
                tmp2 += arr[j];
            }
            cout<<tmp - tmp2<<"\n";
        }
    }
    return 0;
}