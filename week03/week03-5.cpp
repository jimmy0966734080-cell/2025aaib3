///week03-5.cpp
///LeetCode 學習計畫第9題 1502. Can Make Arithmetic Progression From Sequence

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end()); ///把陣列 小到大 排好
        int d = arr[1] - arr[0]; ///兩數差d
        for(int i=1; i<arr.size(); i++){ ///迴圈從1開始，就要找錢一項
            if(arr[i] - arr[i-1] != d) return false;
        } ///如果'後項-前項'不是d的話，就失敗
        return true;
    }
};
