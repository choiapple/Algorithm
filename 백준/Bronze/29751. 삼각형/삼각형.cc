#include <iostream>
using namespace std;
int main(){
    double W, H, answer;
    cin>>W>>H;
    answer = W * H / 2;
    cout<<fixed;
    cout.precision(1);
    cout<<answer<<"\n";
    return 0;
}
