#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){
    cout<<"> "<<int(pow(2,31)-1)<<endl;
    cout<<"> "<<int(pow(10,9))<<endl;
    cout<<"> "<<int(pow(10,8)*9)<<endl;

    cout<<"pow: "<<int(pow(2,31)* -1)<<endl;

    int counter = 0;
    while(pow(10,counter) < int(pow(2,31)-1) && pow(10,counter)>0){
        counter ++;
    }
    cout<<"> "<<counter<<endl;

    return 0;
}

//check if curr value is less than max
    //check if additivive is less than 


// MAX - value > additive
// make sure additive is not overflow ... pow exp < 9 
    //2*pow(10,9)>
    //9*pow(10,8)
