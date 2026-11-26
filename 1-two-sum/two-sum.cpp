class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0; i<nums.size()-1; i++){
            for (int j=i+1; j<nums.size(); j++){
                int n=target-nums[i];
                if (nums[j]==n)
                    return {i,j};
            }
        }
    return{0,0};}
};