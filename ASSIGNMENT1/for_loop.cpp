#include <iostream>
using namespace std;
int main() {
    int a, b;
    string arry[10] = {"zero", "one", "two", "three", "four",\
        "five", "six", "seven", "eight", "nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++) {
        if(i>9) {
            if(i%2==0)
                cout<<"even\n";
            else cout<<"odd\n";
        }
        else{
            cout<<arry[i]<<endl;
            }
    }
    return 0;
}
