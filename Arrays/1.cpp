class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> v;
        // for(auto i=nums.begin();i<nums.end();++i) {
        //     v.push_back(i-nums.begin());
        // }
        // return v;
        
        unordered_map<int, int> m;
        for(int i=0; i< nums.size(); ++i) {
            int curr = nums[i];
            int diff = target - curr;
            auto f = m.find(diff);
            if(f != m.end()) {
                return {f->second, i};
            }
            m.insert((make_pair(nums[i],i)));
        }
        return {};
    }
};
