#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n, k;
bool check[100001];
void bfs(int i){
    queue<pair<int, int>> q;
    q.push(make_pair(i, 0));
    while(!q.empty()){
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(x==k){
            cout << cnt;
            break;
        }
        if(x+1 >=0 && x+1<100001){
            if(!check[x+1]){
                check[x + 1] = true;
                q.push(make_pair(x + 1, cnt + 1));
            }
        }
        if(x-1 >=0 && x-1<100001){
            if(!check[x-1]){
                check[x - 1] = true;
                q.push(make_pair(x - 1, cnt + 1));
            }
        }
        if(2*x >=0 && 2*x<100001){
            if(!check[2*x]){
                check[2*x] = true;
                q.push(make_pair(2 * x, cnt + 1));
            }
        }
    }
}
int main(){
    cin >> n >> k;
    check[n] = true;
    bfs(n);
    return 0;
}