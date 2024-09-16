#include<iostream>
using namespace std;

int main(){
    int a, b, c;

    cout<<"masukan a:";
    cin>>a;
    cout<<"masukan b:";
    cin>>b;
    cout<<"masukan c:";
    cin>>c;

    if (a>b && a>c){
        cout<<"Nilai terbesar:"<<a;
    }else if (b>a && b>c){
        cout<<"Nilai tebesar:"<<b;
    }else{
        cout<<"Nilai terbesar:"<<c;
    }
return 0;
}
