class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        int a,b;
        long long int n=1;
        while (x/(n*10)>0)
            n*=10;
        while (x>0){
            a=x/n;
            b=x%10;
            if (a!=b)
                return false;
            x=(x%n)/10;
            n/=100;
        }
        return true;
    }
};