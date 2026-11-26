class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        long long int n=1;
        while (x/(n*10)>0)
            n*=10;
        while (x>0){
            if ((x/n)!=(x%10))
                return false;
            x=(x%n)/10;
            n/=100;
        }
        return true;
    }
};