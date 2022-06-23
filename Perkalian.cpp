#include <iostream>

using namespace::std;

int perkalian(int angka, int pengali){
    if(pengali ==0)
        return 0;
    else
        return angka+perkalian(angka, pengali-1);
}

main(){
    int angka,pengali;
    cout<<"----------------\n";
    cout<<"|  Perkalian   |\n";
    cout<<"----------------\n";
    cin>>angka;
    cin>>pengali;
    cout<<"----- x \n"<<perkalian(angka, pengali);
    cout<<endl;
}
