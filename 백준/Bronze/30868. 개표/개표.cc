#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, n;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>n;
        while(n > 0){
            if(n >= 5){
                cout<<"++++ ";
                n -= 5;
            }else{
                cout<<"|";
                n -= 1;
            }
        }
        cout<<"\n";
    }
}