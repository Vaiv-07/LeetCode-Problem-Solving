class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        
        // Creating a variable to store copy of value of x for future coparisions
        int numCopy = x;
        long long int reversedNum = 0;
        int digit;
        while(x != 0 ){
            digit = x % 10;
            reversedNum = (reversedNum*10) + digit;
            x = x / 10;
        }
        if(numCopy == reversedNum){
            return true;
        }
        else{
            return false;
        }
        
    }
};
