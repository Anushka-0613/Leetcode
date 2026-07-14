class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        unordered_set<int> ansSet;
        for(int i=0; i<nums1.size(); i++){
           st.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            if(st.find(nums2[i]) != st.end()){
                ansSet.insert(nums2[i]);
            }
        }
        vector<int> ans(ansSet.begin(), ansSet.end());
        return ans;
    }
};