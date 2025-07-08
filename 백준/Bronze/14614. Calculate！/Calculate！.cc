#include <iostream>
using namespace std;
int main(){
    int A, B, tmp, len;
    string C;
    cin>>A>>B>>C;
    len = C.length();
    tmp = C[len-1] - '0';
   if(tmp%2 == 1){
       A = A ^ B;
   }else{
       A = A ^ B ^ B;
   }
   cout<<A<<"\n";
    return 0;
}