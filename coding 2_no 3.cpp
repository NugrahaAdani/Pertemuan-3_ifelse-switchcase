#include<iostream>
using namespace std;

int main(){
    int sisi, lebar, panjang, alas, tinggi, luas;

    cout<<"masukan pilihan cara menghitung luas(1.persegi panjang/2.persegi/3.segitiga): ";
    cin>>luas;

    switch (luas){
case 1:
    cout<<"menghitung luas persegi panjang: \n";
    cout<<"panjang x Lebar\n";
    cout<<"panjang: ";
    cin>>panjang;
    cout<<"Lebar  : ";
    cin>>lebar;
    cout<<"----------\n";
    cout<<(panjang*lebar);
    break;
case 2:
    cout<<"menghitung luas persegi : \n";
    cout<<"sisi x sisi\n";
    cout<<"sisi :";
    cin>>sisi;
    cout<<"sisi :";
    cin>>sisi;
    cout<<"----------\n";
    cout<<(sisi*sisi);
    break;
case 3:
    cout<<"menghitung luas segitiga : \n";
    cout<<"1/2 x alas x tinggi\n";
    cout<<"alas   :";
    cin>>alas;
    cout<<"tinggi :";
    cin>>tinggi;
    cout<<"----------\n";
    cout<<(0.5*alas*tinggi);
    break;
default:
    cout<<"EROR!!!";
    break;
}
    return 0;
}
