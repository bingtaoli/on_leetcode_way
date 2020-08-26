/*
一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。

 

示例 1:

输入: [0,1,3]
输出: 2
示例 2:

输入: [0,1,2,3,4,5,6,7,9]
输出: 8

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //找到临界点
        int n = nums.size();
        int left = 0;
        int right = n-1;
        if ( nums[n-1] == n-1 )
        {
            return n;
        }
        while (left < right)
        {
            int middle = (left + right) / 2;
            if ( nums[middle] == middle )
            {
                left = middle + 1;
            }
            else if ( nums[middle] > middle )
            {
                right = middle;
            }
        }
        return left;
    }
};
