class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str;
        char c;
        int l;
        l=strs[0].length();
        for (int i=0; i<strs.size(); i++){
            if ((strs[i].length())<l)
                l=strs[i].length();
        }
        for (int j=0; j<l; j++){
            c=strs[0][j];
            for (int i=0; i<strs.size();i++){
                if (strs[i][j]!=c)
                    return str; 
            }
            str=str+c;
        }
        return str;
    }
};