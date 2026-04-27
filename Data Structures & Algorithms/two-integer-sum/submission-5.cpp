class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,set<int>>indexMap;
        vector<int>ans;
        for (int i =0 ;i<nums.size();i++){
            indexMap[nums[i]].insert(i);
        }
        for (int i =0 ;i<nums.size();i++){
            set<int> temp = indexMap[target-nums[i]];
            if(temp.size()!=0){
                for(auto x : temp){
                    if (x!=i){
                        ans.push_back(i);
                        ans.push_back(x);
                        // sort(ans.begin(),ans.end());
                        return ans;
                    }
                }
            }
        }
    }
};
