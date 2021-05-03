class Solution {
public:
    int lengthOfLongestSubstring(string s) {


        int n = s.size(); //size of string...
        //use map ..
        map <char,int> s_map;
        int first = 0, last = 0, len = 0, ans = 0;

        while(last<n)
        {
            char tmp = s[last];
            if(s_map.find(tmp)!= s_map.end() && s_map[tmp]>=first)
            {
                first = s_map[tmp] + 1;
                len = last - first;
            }
            s_map[tmp] = last;
            last++;
            len = last - first;
            ans = max(ans,len);
        }
        return ans;
    }
};
