class Solution {
public: 
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int val: nums){
            int freq=0;
            for(int val1: nums){
                if(val == val1){
                    freq++;
                }
            }
            if(freq > n/2){
                return val;
            }
        }
        return -1;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidate=0;
        for(int num: nums){
            if(count == 0){
                candidate=num;
            }if(num == candidate){
                count++;
            }else{
                count--;
            }
        }

        return candidate;
    }

};
