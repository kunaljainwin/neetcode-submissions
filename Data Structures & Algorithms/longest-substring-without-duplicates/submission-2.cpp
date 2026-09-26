class Solution {
public:
    uint8_t getIndex(char c){
        return c-NULL;
    }
    int lengthOfLongestSubstring(string s) {
        // 0-127 starting with NULL
        vector<int> lookupTable(128,-1);
        int n=s.length(),res = 0,l=0;
        
        for(int i = 0 ; i<n ;i++){
            if (lookupTable[getIndex(s[i])] != -1){
                l = max(l, lookupTable[getIndex(s[i])]+1);
            }
            lookupTable[getIndex(s[i])] = i;
            res = max(res,i-l+1);
        }

        return res;
    }
};
