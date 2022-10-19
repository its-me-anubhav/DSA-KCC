#include<iostream>
using namespace std;
int main(){
    int n, sum1=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1=sum1+arr[i][j];
            }
        }
    }
    int sum2=0;
             for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                sum2=sum2+arr[i][j];
            }
        }
        }         
        if(sum1>sum2)
        cout<<sum1-sum2<<endl;
        else {
cout<<sum2-sum1<<endl;
        }
        return 0;
}
