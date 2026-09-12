class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for(int j = 0; j<nums.size(); j++){
            if(umap.find(target-nums.at(j)) != umap.end()){
                return {umap[target-nums.at(j)],j};
            }
            umap[nums.at(j)]=j;
        }
    }
};
