class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mapS,mapT;
        for(auto x : s){
            mapS[x]++;

        }
        for(auto x : t){
            mapT[x]++;
            
        }
        
        for(auto x : s){
            if(mapS[x]!= mapT[x]){
                return false;
            }
            
        }
        for(auto x : t){
            if(mapS[x]!= mapT[x]){
                return false;
            }
            
        }
        return true;

        
    }
};
