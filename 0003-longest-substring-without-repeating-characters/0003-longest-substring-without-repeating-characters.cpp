class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        set<char> st;
        int i=0,j=0,count=0;
        while(i<n && j<n){
            while(j<n && !st.count(s[j])){
                count=max(count,j-i+1);
                st.insert(s[j]);
                j++;
            }
            while(j<n && st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
        }
        return count;
    }
};