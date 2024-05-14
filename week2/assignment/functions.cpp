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


// #include <iostream>
// #include <limits>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int ans=0,rem=0;
//   bool isnegative=false;
//   if(n<=INT_MIN){
//     return 0;
//   }
//   if(n<0){
//     isnegative =true;
//     n=-n;
//   }
//   while(n>0){
//     if(x>INT_MAX/10){
//       return 0;
//     }
//     if(n)
//     rem=n%10;
//     ans=ans*10+rem;
//     n=n/10;
//   }
//   if(isnegative){
//     cout<<-ans;
//   }
//   else{
//     cout<<ans;
//   }
//   return 0;
// }

// https://www.geeksforgeeks.org/problems/set-kth-bit3724/1
// class Solution
// {
// public:
//     int setKthBit(int N, int K)
//     {
//         // Write Your Code here
//         // int mask=1<<K;
//         // int ans=N|mask;
//         // return ans;
        
//         return N|(1<<K);
//     }
    
// };

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int k=1;
//   cout<<(n | (1<<k));
//   return 0;
// }



// https://leetcode.com/problems/convert-the-temperature/
// class Solution {
// public:
//     vector<double> convertTemperature(double celsius) {
//        double k = celsius + 273.15;
//        double f = celsius * 1.80 + 32.00;
//        vector<double> v;
//         v.push_back(k);
//        v.push_back(f);
     
//        return v;
//     }
// };

// #include <iostream>
// using namespace std;

// int main(){
//   double c;
//   cin>>c;
//     double k = c + 273.15;
//     double f = c * 1.80 + 32.00;
//     cout<<"Kelvin "<<k<<endl;
//     cout<<"Fahrenheit  "<<f<<endl;
//   return 0;
// }


// https://www.geeksforgeeks.org/problems/greatest-of-three-numbers2520/1?page=4&difficulty=School&sortBy=submissions
// class Solution {
//   public:
//     int greatestOfThree(int A, int B, int C) {
//         // code here
//         if(A>B && A>C){
//             return A;
//         }
//         else if(B>C){
//             return B;
//         }
//         else{
//             return C;
//         }
//         //  return max(A, max(B, C));
//     }
// };


