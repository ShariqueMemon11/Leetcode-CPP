class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k=0;
        for(int i=0; i<nums.size();i++){
            if(target>nums[i]){
                k++;
            }
        }
        return k;
    }
};
