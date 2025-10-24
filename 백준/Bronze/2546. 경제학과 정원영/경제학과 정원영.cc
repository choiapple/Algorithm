#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, M, tmp, answer = 0;
    long long c_sum, g_sum;
    double c_avg, g_avg;
    cin>>T;
    while(T--){
        cin.ignore();
        cin>>N>>M;
        vector<int> c_stu;
        vector<int> g_stu;
        c_sum = 0;
        g_sum = 0;
        answer = 0;
        for(int n=0; n<N; n++){
            cin>>tmp;
            c_stu.push_back(tmp);
            c_sum += tmp;
        }
        for(int m=0; m<M; m++){
            cin>>tmp;
            g_stu.push_back(tmp);
            g_sum += tmp;
        }
        sort(c_stu.begin(), c_stu.end());
        c_avg = c_sum / (N * 1.0);
        g_avg = g_sum / (M * 1.0);
        for(int n=0; n<N; n++){
            if(c_stu[n] > g_avg && c_stu[n] < c_avg) answer++;
        }
        cout<<answer<<"\n";
    }
    return 0;
}