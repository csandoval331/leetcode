#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
class Solution {
public:
    vector<char> myNumbers;
    long int value;
    int calc;
    char counter;
    bool append;
    bool isNegative;

    int myAtoi(string s) {
        myNumbers.clear();
        value = 0;
        counter = 0;
        append = false;
        isNegative = false;

        while(s[counter] == ' '){
            counter++;
        }

        if(s[counter] == '-'){
            isNegative = true;
            counter++;
        }
        else if(s[counter] == '+'){
            counter++;
            
        }

        while(s[counter] == '0')
            counter++;
        
        while(counter<s.size() && s[counter] >= '0' && s[counter] <= '9'){            
            myNumbers.push_back(s[counter]-'0');
            counter++;
        }

        // cout<<endl;
        for(char i=0; i<myNumbers.size(); i++){
            // cout<<"s[i]> "<<s[i]<<" myNum> "<<char(myNumbers[i]+'0')<<" pow> "<<pow(10, s.size()-1-i)<<endl;
            
            // if(isNegative && (myNumbers.size()-1-i > 9 && myNumbers[i] > 2) ){
            //     cout<<"danger, raising to that power will cause Negative (-) overflow"<<endl;
            // }
            // cout<<"temp1"<<myNumbers.size()-1-i<<endl;
            if(myNumbers.size()-1-i > 9 || (myNumbers.size()-1-i == 9 && myNumbers[i] > 2) ){
                // cout<<"danger, raising to that power will cause overflow"<<endl;
                if(isNegative)
                    return int(pow(2,31)*-1);
                else
                    return int(pow(2,31)-1);
            }

            // checking if calculation will cause overflow
            calc = pow(10, myNumbers.size()-1-i)*myNumbers[i];
            
            if(isNegative && (pow(2,31)-value) < calc){
                // cout<<"danger, operation will cause NEGATIVE overflow"<<endl;
                // cout<<"maxint: "<<int(pow(2,31)*-1)<<" Value: "<< value<<" calc: "<< calc<<endl;
                return int(pow(2,31)*-1);
            }
            else if(!isNegative && (pow(2,31)-1 - value) < calc ){
                // cout<<"danger, operation will cause POSITIVE overflow"<<endl;
                // cout<<"maxint: "<<int(pow(2,31)-1)<<" Value: "<< value<<" calc: "<< calc<<endl;
                return int(pow(2,31)-1);
            }
            


            value += calc;
            cout<<" myNum> "<<int(myNumbers[i])<<" pow> "<<pow(10, s.size()-1-i)<<endl;
        }


        if(isNegative){
            return value*-1;
        }
        else{
            return value;
        }
    }
};


int main(){
    //2,147,483,647
    //2147483647
    // "   -42"
    // "-91283472332"
    // "+1"
    //  "21474836460"
    // "  0000000000012345678"
    // "-2147483648"





    Solution mySolution = Solution();

    // cout<<"mySolution output: "<< mySolution.myAtoi("12345")<<endl;
    //  cout<<"mySolution output: "<< mySolution.myAtoi("2147483648")<<endl;

    // cout<<"mySolution output: "<< mySolution.myAtoi("-2147483649")<<endl;
    
    // cout<<"mySolution output: "<< mySolution.myAtoi("   -42")<<endl;
    // cout<<"mySolution output: "<< mySolution.myAtoi("-91283472332")<<endl;
    // cout<<"mySolution output: "<< mySolution.myAtoi("+1")<<endl;
    // cout<<"mySolution output: "<< mySolution.myAtoi("21474836460")<<endl;
    // cout<<"mySolution output: "<< mySolution.myAtoi("  0000000000012345678")<<endl;
    cout<<"mySolution output: "<< mySolution.myAtoi("-2147483648")<<endl;





    

    return 0;
}