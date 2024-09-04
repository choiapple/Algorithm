#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=N; i>=0; i--){
        if(i != 1 && i != 0){
            cout<<i<<" bottles of beer on the wall, "<<i<<" bottles of beer."<<"\n";
            if(i-1 == 1){
                cout<<"Take one down and pass it around, "<<i-1<<" bottle of beer on the wall."<<"\n";
            }else{
                cout<<"Take one down and pass it around, "<<i-1<<" bottles of beer on the wall."<<"\n";
            }
            cout<<"\n";
        }else if(i == 1){
            cout<<"1 bottle of beer on the wall, 1 bottle of beer."<<"\n";
            cout<<"Take one down and pass it around, no more bottles of beer on the wall."<<"\n";
            cout<<"\n";
        }else{
            cout<<"No more bottles of beer on the wall, no more bottles of beer."<<"\n";
            if(N == 1){
                cout<<"Go to the store and buy some more, "<<N<<" bottle of beer on the wall."<<"\n";
            }else{
                cout<<"Go to the store and buy some more, "<<N<<" bottles of beer on the wall."<<"\n";
            }
            
        }
    }
}