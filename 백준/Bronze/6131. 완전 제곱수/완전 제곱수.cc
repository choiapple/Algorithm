#include <iostream>
using namespace std;
int main(){
    int N, a = 1, b = 1;
    cin>>N;
    int answer = 0;
    while(a<=500 && b<=500){
        if(b*b + N == a*a){
            answer++;
            b++;
        }else{
            if(b*b+N > a*a){
                a++;
            }else{
                b++;
            }
        }
    }
    cout<<answer<<"\n";
}