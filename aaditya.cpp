class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        float b,a;
        int  m=nums1.size();
         int  n=nums2.size();

         for (int i = 0; i < m; i++) {
            ans.push_back(nums1[i]);
        }
        for (int i = 0; i < n; i++) {
            ans.push_back(nums2[i]);
        }
          sort(ans.begin(), ans.end());
        int size= ans.size();
        if(size%2!=0)
        { b=ans[size/2];
        return b;}
        else
         { a=(ans[size/2]+ans[(size/2)-1])/2.0;
         return a;}
    }
   
};