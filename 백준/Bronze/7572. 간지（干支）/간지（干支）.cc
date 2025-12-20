#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, N;
    char c;
    cin>>N;
    N += 2400 -  2013;
    a = (N + 5) % 12;
    b = (N + 9) % 10;
    c = a + 'A';
    cout<<c<<b;
    return 0;
}