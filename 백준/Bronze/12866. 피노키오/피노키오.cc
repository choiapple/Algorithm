#include <iostream>
using namespace std;
#define LIM 1000000007
int main(){
    long long answer = 0, L, A = 0, C = 0, G = 0, T = 0;
    string s;
    cin>>L;
    cin>>s;
    for(int i=0; i<L; i++){
        if(s[i] == 'A'){
            A++;
        }else if(s[i] == 'C'){
            C++;
        }else if(s[i] == 'G'){
            G++;
        }else if(s[i] == 'T'){
            T++;
        }
    }
    answer = (A * C) % LIM;
    answer = (answer * G) % LIM;
    answer = (answer * T) % LIM;
    cout<<answer<<"\n";
}