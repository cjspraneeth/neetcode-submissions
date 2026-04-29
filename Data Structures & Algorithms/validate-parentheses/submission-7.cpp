// refactored code with good practices
class Solution {
public:
    bool isopen(char c){
        return (c=='(' || c=='{' || c=='['); // reduced verbose else return false block
    }
    
    bool isValid(string &s) {
        stack<char>store;
        unordered_map<char,char>m{
            {')','('},
            {']','['},
            {'}','{'}
        };
        
        for(auto x : s){
            if(isopen(x)){
                store.push(x);
            }
            else{
                if(!store.empty() && m[x]==store.top()){
                    store.pop();
                }
                else{
                    return false;
                }
            }
        }
        return store.empty();
        
        
        
        
    }
};
