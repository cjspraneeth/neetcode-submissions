class Solution {
public:
    char dosmall(char c){
        // check capital
        if (c>=65 && c<=90){
            c =  c-65 +97;
            return c;
        }
        // check small 
        else if (c>=97 && c<=122){
            return c;
        }
        // check num 
        else if (c>=48 && c<=57){
            return c;
        }
        else {
            // invalid skip;
            return '!';
        }

        
        



        
    }
    
    bool isPalindrome(string s) {
        int i =0;
        int j = s.size()-1;
        while (i<j){
            char a = dosmall(s[i]);
            if (a== '!'){
                i++;
                continue;
            }
            
            char b = dosmall(s[j]);
            if (b== '!'){
                j--;
                continue;
            }
            cout<<a<<" "<<b<<" "<<" "<<i<<" "<<j<<" "<<endl;

            if(a!=b){
                return false;
            }
            i++;
            j--;

        }
        return true;
    }
};
