#include <iostream>
using namespace std;
int main(){
    int s,t,a,b,m,n;
    int app,apple_count = 0;
    int ora,orange_count = 0;
    cin >> s >> t >> a >> b >> m >> n;
    for(int i = 0;i < m;i++){
        cin >> app;
        if(a+app >= s && a+app <= t)apple_count++;
    }
    for(int i = 0;i < n;i++){
        cin >> ora;
        if(b+ora >= s && b+ora <= t)orange_count++;
    }
    cout << apple_count <<endl<< orange_count;
    return 0;
}
