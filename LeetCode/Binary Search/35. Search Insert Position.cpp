//https://leetcode.com/problems/search-insert-position/description/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int l, r;
    l = 0;
    r = nums.size();
    return recur(nums, target, l, r);
    }

    int recur(vector<int>& nums, int target, int left, int right) {

        if(left == right) {
            return left;
        }

        int mid; mid = (left+right)/2;
        if(nums[mid] == target) {
            return mid;
        }

        if(nums[mid] > target) {
            return recur(nums, target, left, mid);
        } else {
            return recur(nums, target, mid+1, right);
        }

        return 0;


    }
};