class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>mapS(26,0),mapT(26,0);

        for(auto x : s){
            mapS[x-'a']++;

        }
        for(auto x : t){
            mapT[x-'a']++;
            
        }
        
        for (int i=0 ;i<26;i++){
            if(mapS[i]!=mapT[i]){
                return false;
            }
        }
       
        return true;

        
    }
};
