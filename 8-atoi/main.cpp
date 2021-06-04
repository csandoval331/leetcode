#include <iostream>
#include <vector>


using namespace std;
class Solution {
public:
    vector<char> myNumbers;
    bool append;
    bool isNegative;

    int myAtoi(string s) {
        myNumbers.clear();
        append = false;
        isNegative = false;

        for(char myChar : s){
            if(append ){
                if(myChar >= '0' && myChar <= '9'){
                    return 0
                }
                else{
                    return 0
                }
                
            }
            else{
                if(myChar == '-'){
                    isNegative = true;
                }
                else if(myChar >= '0' && myChar <= '9'){
                    append = true;
                    myNumbers.append()
                }
                else if(myChar == ' '){

                }
                else{
                    return 0
                }
            }
        }
        return 0;
    }
};


int main(){
    cout<<"main"<<endl;
    Solution mySolution = Solution();

    cout<<"mySolution output: "<< mySolution.myAtoi("10")<<endl;

    // char myNum = '1';
    // cout<<"myNum: "<<(myNum-'0')*2<<endl;
    // cout<<"myNum: "<<(myNum)*2<<endl;
    // cout<<sizeof(short)<<endl;
    // cout<<sizeof(char)<<endl;

    

    return 0;
}