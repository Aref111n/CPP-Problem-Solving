class Solution {
public:
    int dp[1000002] ;

    int getKth(int lo, int hi, int k) {
        memset(dp, 0, sizeof dp) ; 
        for(int i=1; i<=1000; i++)
            int t = calc(i) ;

        vector<pair<int, int> > v ;
        for(int i=lo; i<=hi; i++) {
            v.push_back({dp[i], i}) ;
        }   

        sort(v.begin(), v.end()) ;

        for(int i=0; i<v.size(); i++)
            cout << v[i].second << " " << v[i].first << endl ;
        
        return v[k-1].second ;
    }

    int calc(int x) {
        if(x==1) return 1 ;

        if(dp[x]) return dp[x] ;

        int v = 0 ;
        if(x&1) 
            v = 1+calc((3*x)+1) ;
        else
            v = 1+calc(x/2) ;
        
        return dp[x] = v ;
    }
};
