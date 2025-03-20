#include <iostream>
using namespace std;
int N, K, arr[500001] = {0, }, cnt = 1, answer = -1, numbers[100000000] = {0, };
int tmp[500001] = {0, };
void merge(int ar[500001], int s, int m, int e){
    int i=s;
    int j=m+1;
    int t=1;
    while(i<=m && j<=e){
        if(ar[i] <= ar[j]){
            tmp[t++] = ar[i++];
        }else{
            tmp[t++] = ar[j++];
        }
        numbers[cnt++] = tmp[t-1];
    }
    while(i <= m){
        tmp[t++] = ar[i++];
        numbers[cnt++] = tmp[t-1];
    }
    while(j <= e){
        tmp[t++] = arr[j++];
        numbers[cnt++] = tmp[t-1];
    }
    i = s;
    t = 1;
    while(i <= e){
        ar[i++] = tmp[t++];
    }
}
void merge_sort(int ar[500001], int s, int e){
    if(s < e){
        int m = (e+s)/2;
        merge_sort(ar, s, m);
        merge_sort(ar, m+1, e);
        merge(ar, s, m, e);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>K;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    merge_sort(arr, 0, N - 1);
    if(K < cnt){
        cout<<numbers[K];
    }else{
        cout<<-1<<"\n";
    }
    return 0;
}