#include<iostream>
#include<iomanip>
using namespace std ;
int main (){
    int n;
    cin>>n;
    int i,arr[n],p=0,neg=0,z=0;
    for ( i = 0; i < n; i++){
    cin>>arr[i];
        if ( arr[i]>0 ){
            p++;
        }
        else if ( arr[i] < 0 ){
            neg++;
        }
        else if ( arr[i]== 0){
            z++;
        }   
    }
    float pos,ne,zer;
    pos=(float)p/n;
    ne=(float)neg/n;
    zer=(float)z/n;
    cout<<fixed<<setprecision(6)<<pos<<endl;
    cout<<fixed<<setprecision(6)<<ne<<endl;
    cout<<fixed<<setprecision(6)<<zer<<endl;
return 0;
}
