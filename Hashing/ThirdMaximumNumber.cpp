class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        if(st.size() < 3){
            auto it = st.end();
            it--;
            return *it;
        }
        else{
            auto it = st.end();
            it--;
            it--;
            it--;
            return *it;
        }
        return -1;
    }
};