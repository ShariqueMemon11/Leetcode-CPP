class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int> mymap;
        for(int i = 0; i<=nums.size();i++){
            if(mymap.find(target-nums[i])!=mymap.end()){
                result[0]=mymap[target-nums[i]];
                result[1]=i;
                return result;
            }

            else{
                mymap[nums[i]]=i;
            }
        }
        return {};
    }
};
