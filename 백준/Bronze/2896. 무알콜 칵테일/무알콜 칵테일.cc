#include <iostream>
#include <cmath>
using namespace std;
double A, B, C, I, J, K;
int main(){
    cin>>A>>B>>C;
    cin>>I>>J>>K;
    double g = min(A/I, B/J);
    g = min(g, C/K);
    
    cout<<fixed;
    cout.precision(6);
  
    cout<<A-g*I<<" "<<B - g*J<<" "<<C - g*K<<"\n";
    return 0;
}