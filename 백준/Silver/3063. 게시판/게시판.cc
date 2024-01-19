#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int T;
    cin>>T;
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int answer = 0;
    for(int t=0; t<T; t++){
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int tmp = (x2 - x1) * (y2 - y1);
        answer = (y2 - y1) * (x2 - x1) - (max((min(y2, y4) - max(y1, y3)),0) * max((min(x2, x4) - max(x1, x3)),0));
        cout<<answer<<"\n";
    }
}