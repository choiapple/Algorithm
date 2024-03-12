#include <iostream>
#include <cmath>
using namespace std;
int x_pt, y_pt, X, Y, del_x, del_y;
double dist;
pair<int, int> near_point;

double getDistance(int x, int y){
    double tmp = pow((x - x_pt), 2) + pow((y - y_pt), 2);
    return tmp;
}

void findNearDist(){
    double x = X;
    double y = Y;
    while(true){
        x += del_x;
        y += del_y;
        
        double tmp = getDistance(x, y);
        if(tmp > dist){
            break;
        }else{
            dist = tmp;
            near_point.first = x;
            near_point.second = y;
        }
    }
}

void fixDel(){
    int small = min(del_x, del_y);
    
    if(small == 0){
        if(del_x == 0){
            del_y = 1;
        }else{
            del_x = 1;
        }
        return;
    }
    while(small){
        if(del_x % small == 0 && del_y %small == 0){
            break;
        }else{
            small--;
        }
    }
    if(small > 1){
        del_x /= small;
        del_y /= small;
    }
}

int main(){
    cin>>x_pt>>y_pt;
    cin>>X>>Y>>del_x>>del_y;
    
    dist = getDistance(X, Y);
    near_point.first = X;
    near_point.second = Y;
    
    fixDel();
    if(del_x != 0 || del_y != 0){
        findNearDist();
    }
    cout<<near_point.first<<" "<<near_point.second;
}