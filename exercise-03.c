/**
* Author : Sharashena Chairani
* NPM : 140810180022
* Deskripsi : Menukar (swap) a yang tadinya x menjadi y dan b yang tadinya y menjadi x
* Tahun : 2019
*/

#include <iostream>
using namespace std;

void swap (int& a, int& b){
    int a=x;
    int b=y;

    y=a;
    x=b;

}

int main(){

int x=5;
int y=4;
cout<<"x is " <<x<<endl;
cout<<"y is " <<y<<endl;

swap (x,y);
cout<<"After swap"<<endl;
cout<<"x is "<<x<<endl;
cout<<"y is "<<y<<endl;
}
