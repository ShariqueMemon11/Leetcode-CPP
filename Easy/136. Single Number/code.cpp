class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mymap;
        for(int i = 0 ; i < size(nums) ; i++){
            if(mymap.find(nums[i])!=mymap.end()){
                mymap.erase(nums[i]);
            }
            else{
                mymap[nums[i]]=i;
            }
        }
        for(auto it : mymap){
            return it.first;
        }
        return {};
    }
};
