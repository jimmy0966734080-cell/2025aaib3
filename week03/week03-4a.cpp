///week03-4a.cpp 第1種寫法
///LeetCode 學習計畫第6題 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; ///偷偷先塞答案，再塞回去nums
        for(int i=0; i<nums.size(); i++){ ///全部尋一次
            if(nums[i] != 0) ans.push_back(nums[i]);
        } ///有不是0的樹 偷偷備份 塞到答案的後面

        for(int i=0; i<nums.size(); i++){ ///再循一次
            if(i<ans.size()) nums[i] = ans[i]; ///塞到剛剛備份的答案
            else nums[i] = 0; ///之後，塞0的值
        }
    }
};
