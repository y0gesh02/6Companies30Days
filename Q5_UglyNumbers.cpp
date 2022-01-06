	ull getNthUglyNo(int n) {
	    int t2=0,t3=0,t5=0;
	    vector<ull> res(n);
	    res[0]=1;
	    for(int i=1;i<n;i++){
	        res[i]=min(2*res[t2],min(3*res[t3],5*res[t5]));
	        if(res[i]==2*res[t2]) t2++;
	        if(res[i]==3*res[t3]) t3++;
	        if(res[i]==5*res[t5]) t5++;
	    }
	    return res[n-1];
	}
