class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        long long original = x;
        long long rev = 0;
        while(x>0){
            int lastDigit = x%10;

            rev = rev*10 + lastDigit;

            x = x/10;
        }

        if(rev == original){
            return true;
        }
        return false;
    }
};