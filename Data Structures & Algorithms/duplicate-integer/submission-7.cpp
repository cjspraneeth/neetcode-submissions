class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>check_set;
        for(auto x : nums)
        {
            if(check_set.find(x)!=check_set.end()){
                return true;
            }
            check_set.insert(x);
            
        }
        return false;
        // testing post making repo public

        
    }
};