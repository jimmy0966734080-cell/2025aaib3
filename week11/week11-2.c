/// week11-2 .cpp 厩策璸礶 Matd 材2肈
/// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        ///int total = 0; //ぃノ俱计埃Τ计翴
        double total = 0; ///璶Τ计翴
        int M = salary[0], m = salary[0]; ///珼1ō程程
        for(int i=0; i<salary.size(); i++){
            total += salary[i];
            if(salary[i] > M) M = salary[i]; /// 程计传奔
            if(salary[i] < m) m = salary[i]; /// 程计传奔
        }
        /// 硂琌岿!!!簗р程程埃
        return (total - M - m) / (salary.size()-2);

    }
};
