class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        int a,b,f=0;
        long long int n=1;
        while (x/(n*10)>0){
            n*=10;}
        while (x>0){
            a=x/n;
            b=x%10;
            x=x-(a*n);
            x/=10;
            n/=100;
            
            if (a!=b){
                f=1;
                break;}
        }
        if (f==0)
            return true;
        else
            return false;
    }
};