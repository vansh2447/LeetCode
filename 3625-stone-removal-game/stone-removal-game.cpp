class Solution {
public:
    bool canAliceWin(int n) {
        int s=10;
        while(0<=n && n<=50){
            n=n-s;
            s--;
        }
        if (s%2==0)
            return true;
        else
            return false;
    }
};