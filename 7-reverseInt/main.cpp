#include <iostream>
#include <cstdlib>
#include <bitset>
#include <cmath>

using namespace std;

int getDigit(int number, int nth){
    //case for nth number out of range (1-infi)
    if(nth <= 0 ){
        cout<<"error"<<endl;
        return 0;
    }

    //case for negative numbers
    if(number<0){
        number *= -1;
    }

    int mod = pow(10, nth);
    int div = pow(10, nth-1);
    int remainder = 0;
    int nthNum = 0;

    remainder = number%mod;
    nthNum = remainder / div;

    return nthNum;
}
//need a function that will return null or value, prefer to do this in python
int returnReverse(int number){

}

int main(){
    int myNum = 2147483647;
    int a = 10;
    int b = -10;

    // cout<<getDigit(myNum, 1)<<endl;
    // cout<<getDigit(myNum, 2)<<endl;
    // cout<<getDigit(myNum, 3)<<endl;
    // cout<<getDigit(myNum, 4)<<endl;
    // cout<<getDigit(myNum, 5)<<endl;
    // cout<<getDigit(myNum, 6)<<endl;
    // cout<<getDigit(myNum, 7)<<endl;
    // cout<<getDigit(myNum, 8)<<endl;
    // cout<<getDigit(myNum, 9)<<endl;
    // cout<<getDigit(myNum, 10)<<endl;

    cout<<99.0/10.0<<endl;
    cout<<int(99.0/10.0)<<endl;

    cout<<-99.0/10.0<<endl;
    cout<<int(-99.0/10.0)<<endl;
    cout<<floor(-99.0/10.0)<<endl;


    // cout<<"Hello world"<<endl;
    // cout<<sizeof(int)*8<<endl;
    
    // cout<< bitset<32>(a) <<endl;
    // cout<< bitset<32>(b) <<endl;

    // cout<< 123%10 << endl;
    // cout<< 123%120 << endl;

    // cout<< 1234%100 << endl;

    // cout<< floor(34/10) <<endl;
    // cout<< floor(234/100) <<endl;
    // cout<< floor(1234/1000) <<endl;     
    return 0;
}

