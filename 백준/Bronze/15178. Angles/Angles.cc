#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, a, b, c;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>a>>b>>c;
        cout<<a<<" "<<b<<" "<<c<<" ";
        if(a + b + c == 180){
            cout<<"Seems OK"<<"\n";
        }else{
            cout<<"Check"<<"\n";
        }
    }
}