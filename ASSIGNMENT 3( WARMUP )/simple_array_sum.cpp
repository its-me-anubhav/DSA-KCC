#include<iostream>
#include<vector>
using namespace std;
   /* int main(){
        int n;
        cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     } 
     int sum=0;
     for(int i=0;i<n;i++){
         sum=sum+arr[i];
     }
     cout<<sum<<endl;
    return 0;
}
*/
// sove by function
int simpleArreysum(vector<int> B){
        int sum=0;
    for(int i=0;i<B.size();i++){
        sum+=B[i];
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++) {
        cin>>A[i];
    }
    cout<<simpleArreysum(A);
    return 0; 
}

