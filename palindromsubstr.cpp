
  string ans = "";
        for(int i = 0; i < s.length() ; i ++){
            string s1 = extend(s,i,i), s2 = extend(s, i, i+1);

            if(s1.length() > ans.length()) ans = s1;
            if(s2.length() > ans.length()) ans = s2;
        }

        return ans;
    }

    string extend(string s, int left, int right){
        while(left >= 0 && right < s.length() && s[left] == s[right]){
            left--;
            right++;
        }
        return s.substr(left+1, right - left - 1);
