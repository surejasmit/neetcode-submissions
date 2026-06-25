class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vc;

        int first = 0;
        int second = 0;

        while(first < nums1.size() && second < nums2.size()){
            if(nums1[first] < nums2[second]){
                vc.push_back(nums1[first]);
                first++;
            }
            else{
                vc.push_back(nums2[second]);
                second++;
            }
        }
        if(first != nums1.size()){
            while(first != nums1.size()){
                vc.push_back(nums1[first]);
                first++;
            }
        }
        else{
            while(second != nums2.size()){
                vc.push_back(nums2[second]);
                second++;
            }
        }

        if(vc.size()%2 == 0){
            return (vc[vc.size()/2] + vc[vc.size()/2 - 1])/2.0;
        }
        else{
            return vc[vc.size()/2];
        }
    }
};
