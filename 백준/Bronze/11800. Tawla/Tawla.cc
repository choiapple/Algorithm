#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, a, b;
    string same[6] = {"Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};
    string arr[6] = {"Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>a>>b;
        cout<<"Case "<<t<<": ";
        if(a == b){
            cout<<same[a-1]<<"\n";
        }else if((a == 5 && b == 6) || (a==6 && b ==5)){
            cout<<"Sheesh Beesh"<<"\n";
        }else{
            if(a < b){
                cout<<arr[b-1]<<" "<<arr[a-1]<<"\n";
            }else{
                cout<<arr[a-1]<<" "<<arr[b-1]<<"\n";
            }
        }
    }
}