#include <iostream>
using namespace std;
int main(){
    int N, O;
    cin>>N>>O;
    if(O%(N-1) == 0){
        cout<<O + O/(N-1) - 1<<" "<<O + O/(N-1); 
    }else{
        cout<<O + O/(N-1)<<" "<<O + O/(N-1);
    }
}