/// week07-3 .cpp LeetCode學習計畫 Simulation 第1題
/// 682. Baseball Game 計算點數
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> a; /// Part04: 要把資料，做到陣列 a 進階迴圈
        for(string op :　operations){ /// Part01: C++進階迴圈
            ///cout << "現在讀到了: " << op << "\n"; /// Part02: 看他是誰，等下會刪掉
            /// Part03: 如 if 判斷要怎麼模擬
            if (op[0]=='C'){ /// 清掉最後一位
                a.pop_back(); /// 丟到最後一個  /// Part06: pop_back()
            }
            else if (op[0]=='D'){ /// 最後1為(變2倍)在加到後面
                a.push_back( a.back() * 2 ); /// 乘2倍 Part06: back()
            }
            else if (op[0]=='+'){ /// 還不知道，等一下看
                int temp = a.back(); /// 先超最後一台車車牌
                a.pop_back(); /// 把最後1台車開走
                int temp2 = a.back(); /// 可以觘到第2台車的車牌
                a.push_back(temp); /// 把剛剛的車停回來
                a.push_back(temp + temp2); /// 把最後2個加起來，再 加到最後面
            }
            else { /// 數字的字串，要加到最後面
                a.push_back( stoi(op) ); /// Part04: .push_back()
            }
        }
        int ans = 0;
        for (int now : a){ /// Part05: C++ 進階迴圈 要看陣列裡的值
            ans += now; ///cout << now << " "; /// Part02: 看它是誰，等下會刪掉

        }
        return ans; ///return 0; ///隨便 return 等一下再寫真的答案
    }
};
