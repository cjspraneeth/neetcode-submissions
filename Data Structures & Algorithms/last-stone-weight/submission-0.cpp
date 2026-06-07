class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>> pq;
        for(auto x : stones){
            pq.push(x);
        }
        while(pq.size()>1){
            int x =  pq.top();
            pq.pop();
            int y = pq.top(); pq.pop();
            if(x==y){
                continue;
            }
            else{
                pq.push(abs(x-y));
            }
        }
        if(pq.size()==0){
            return 0;
        }
        else{
            return pq.top();
        }
        
    }
};
