	int CountWays(string s){
		    // Code here
		       if (s.size() == 0) return 0;
        if (s[0] == '0') return 0;
        int n = s.size();
        int dp[n+1];
        fill(dp,dp+n+1,0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (s[i-1] != '0') 
                dp[i] = dp[i-1];
            if (i - 2 < 0) continue;
            string tmp ="";
            tmp += s[i-2];
            tmp += s[i-1];
            if ("10" <= tmp && tmp <= "26") dp[i] += dp[i-2];
        }
        return dp[n];
		}

};

