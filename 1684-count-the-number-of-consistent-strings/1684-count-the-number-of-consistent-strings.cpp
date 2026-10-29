class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> isAllowed(26,false);
        for(char c : allowed){
            isAllowed[c -'a'] = true;
        }
        int consistentCount=0;

        for(const string& word : words){
            bool isConsistent = true;

            for(char c: word){
                if(!isAllowed[c-'a']){
                    isConsistent=false;
                    break;
                }
            }
            if(isConsistent){
                consistentCount++;
            }
        }
        return consistentCount;
    }
};