// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int row = 0; row < n; row++) {
//       for(int col=0; col<n-row-1; col++){
//         cout<<" ";
//       }
//       for (int col = 0; col < row + 1; col++) {
//         cout<<col+row+1;
//       }
//       int start=2*row;
//       for(int col=0; col<row; col++){
//         cout<<start--;
//       }
//         cout << endl;
//     }

//     return 0;
// }

// Output:

//    1
//   232
//  34543
// 4567654

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - (row + 1); col++)
//         {
//             cout << " ";
//         }
//         int start = 1;
//         for (int col = 0; col < 2 * row + 1; col++)
//         {
//             if (row == 0 || row == n - 1)
//             {
//                 if (col % 2 == 0)
//                 {
//                     cout << start++;
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//             }
//             else
//             {
//                 if (col == 0)
//                 {
//                     cout << col + 1;
//                 }
//                 else if (col == 2 * row)
//                 {
//                     cout << row + 1;
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Output:

//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5




