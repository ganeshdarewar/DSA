// https://leetcode.com/problems/reverse-integer/
// class Solution {
// public:
//     int reverse(int x) {
//         int ans = 0, rem = 0;
//         bool isNegative=false;
//         if(x<=INT_MIN){
//             return 0;
//         }
//         if(x<0){
//             isNegative=true;
//             x=-x;
//         }
//         while (x > 0) {
//             if(ans>INT_MAX/10){
//                 return 0;
//             }
//             rem = x % 10;
//             ans = ans* 10 + rem;
//             x = x / 10;
//         }
//         if(isNegative){
//             return -ans;
//         }
//         else{
//             return ans;
//         }
//     }
// };


