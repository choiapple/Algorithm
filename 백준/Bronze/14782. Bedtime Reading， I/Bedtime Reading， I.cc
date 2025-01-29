#include <iostream>
using namespace std;
int main(){
    int L;
    long long answer = 0;
    cin>>L;
    for(int i=1; i<=L; i++){
        if(L%i == 0){
            answer += i;
        }
    }
    cout<<answer<<"\n";
    return 0;
}