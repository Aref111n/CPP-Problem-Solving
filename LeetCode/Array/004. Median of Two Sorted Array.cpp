class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() ;
        int m = nums2.size() ;
        double arr[n+m+1] ;
        int i=0, j=0, k=0 ;
        while(i<n && j<m) {
            if(nums1[i]<nums2[j]) 
                arr[k++] = nums1[i++] ;
            else
                arr[k++] = nums2[j++] ;
        }

        for( ; i<n; i++)
            arr[k++] = nums1[i] ;
        for( ; j<m; j++)
            arr[k++] = nums2[j] ;
        
        if((n+m)%2)
            return arr[(n+m)/2] ;
        else {
            int v = (n+m)/2 ;
            return (arr[v]+arr[v-1])/2 ;
        }
    }
};
