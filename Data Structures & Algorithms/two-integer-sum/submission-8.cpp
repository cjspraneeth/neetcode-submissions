class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // no extra set storing as its only one valid pair you always have the index in the repeating case as the newer one gets overwritten but still check is needed if you only have one num whose same value is not present in the array to complment
        unordered_map<int,int>indexMap; 
        vector<int>ans;
        for (int i =0 ;i<nums.size();i++){
            indexMap[nums[i]]=i;
        }
        for (int i =0 ;i<nums.size();i++){
           
            auto it = indexMap.find(target-nums[i]);
            if (it!= indexMap.end()  && it->second!=i){
                ans.push_back(i);
                ans.push_back(it->second);
                // sort(ans.begin(),ans.end());
                return ans;
            }
            
            
        }
    }
};
