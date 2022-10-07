/*#include<iostream>
using namespace std; 
int main(){
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    cout<<sum<<endl;
    return 0;
}
solve by function 
*/
#include <iostream>
using namespace std;
int addtwonumber(int a,int b){
    int sum =a+b;
return sum;
}
int  main() {
    int a, b;
    cin>>a>>b;
  cout<< addtwonumber(a, b);
  return 0;
}
