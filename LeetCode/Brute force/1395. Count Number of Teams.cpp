class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size() ;
        int cnt = 0 ;
        for(int i=0; i<n; i++) {
            int rs=0, rb=0, ls=0, lb=0 ;
            for(int j=i-1; j>=0; j--) {
                if(rating[j]>rating[i])
                    lb++ ;
                else
                    ls++ ;
            }
            for(int j=i+1; j<n; j++) {
                if(rating[j]>rating[i])
                    rb++ ;
                else
                    rs++ ;
            }
            cnt += ((lb*rs)+(rb*ls)) ;
        }

        return cnt ;
    }
};
