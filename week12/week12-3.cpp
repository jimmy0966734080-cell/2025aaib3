///week12-2.cpp 學習計畫 Math 第4題
///LeetCode 976. Largest Perimeter Triangle
///要用nums裡的棒子長度，組合出三角形兩邊和>第3邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end()); ///排序
        ///for(int i=nums.size()-1; i>=0; i--){ //用迴圈大到小式一次
        ///    cout << nums[i] << " "; //映出大到小的數
        ///}
        for(int i=nums.size()-1; i>=2; i--){ ///迴圈有修改, nums[i] vs. -1,-2
            if(nums[i] < nums[i-1] + nums[i-2]) return nums[i] + nums[i-1] + nums[i-2];
            ///如果順利 兩邊和大於第三邊 就把我們的周長加起來
        }
        return 0; ///找不到任何 合法 的三角形
    }
};
