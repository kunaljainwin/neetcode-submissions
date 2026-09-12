class Solution {
public:
    bool isAnagram(string s, string t) {
 int a1[26]={0},a2[26]={0};

		for(auto &it: s){
			a1[it-'a']++;
		}

        for(auto &it: t){
			a2[it-'a']++;
		}

        for(int i = 0;i<26;i++){
			if(a1[i]!=a2[i])return false;
		}
		return true;
    }
};
