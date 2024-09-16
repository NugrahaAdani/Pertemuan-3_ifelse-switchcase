#include <iostream>
using namespace std;

int main(){
    int score=90;

    if (score>=90){
       cout<<"Selamat! Anda mendapatkan nilai A\n";
    }else if(score>=80){
        cout<<"Anda mendapatkan nilai B\n";
    }else if(score>=70){
        cout<<"Anda mendapatkan nilai C\n";
    }else if(score>=60){
        cout<<"Anda mendapatkan nilai D\n";
    }else{
        cout<<"Anda mendapatkan nilai E\n";
}
return 0;
}
