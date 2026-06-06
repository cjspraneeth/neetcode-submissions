class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int k_index;

    KthLargest(int k, vector<int>& nums) {
        for (auto x : nums){
            pq.push(x);

        }
        k_index = k;
        while(pq.size() >k_index){
                pq.pop();
        }

        
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size() >k_index){
                pq.pop();
        }
        return pq.top();

        
    }
};
