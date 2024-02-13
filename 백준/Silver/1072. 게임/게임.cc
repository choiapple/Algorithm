#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x, y;
    cin>>x>>y;
    long long tmp = (100*y)/x + 1;
    if(tmp >= 100){
        cout<<-1<<"\n";
        return 0;
    }
    long long answer = ceil(((tmp * x) - (100 * y))/ (100 - tmp));
    cout<<answer<<"\n";
    return 0;
}