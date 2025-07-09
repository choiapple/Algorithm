#include <iostream>
using namespace std;
int main(){
    int N, answer = 0;
    cin>>N;
   if(N < 0){
       answer = 32;
   }else{
       if(N == 0){
           answer = 1;
       }
       while(N > 0){
           N >>= 1;
           answer++;
       }
   }
   cout<<answer<<"\n";
    return 0;
}