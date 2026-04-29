class Solution {
public:
    bool isopen(char c){
        if (c=='(' || c=='{' || c=='['){
            return true;
        }
        else{
            return false;
        }
    }
    bool isValid(string &s) {
        stack<char>store;
        unordered_map<char,char>m;
        m['}']='{';
        m[']']='[';
        m[')']='(';
        for(auto x : s){
            if(isopen(x)){
                store.push(x);
            }
            else{
                if(store.size()>0 && m[x]==store.top()){
                    store.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(store.size()==0){
            return true;
        }
        else{
            return false;
        }
        
        
        
        
    }
};
