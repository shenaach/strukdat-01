/**
* Author : Sharashena Chairani
* NPM : 140810180022
* Deskripsi : Membuat looping dengan bila modulus 3 keluar fizz. modulus 5 keluar buzz. modulus 15 keluar fizzbuzz
* Tahun : 2019
*/

#include <iostream>
using namespace std;

void fizzbuzz(int& a){
    for(int a=1;a<=100;a++){
        if (a%15==0){
            cout << "Fizzbuzz";
        }
        else if(a%3==0){
            cout << "Fizz";
        }
        else if(a%5==0){
            cout << "Buzz";
        }
        else{
            cout << a;
        }
    cout << endl;
    }
}

int main()
{
    int a;
    fizzbuzz(a);
}
