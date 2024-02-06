// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter Num: ";
//     cin>>n;
//     for(int row=0; row<n;row++){
//         for(int col=0; col< n-row-1; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<row+1; col++){
//              cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// enter Num: 5
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter Num: ";
//     cin>>n;
//     for(int row=0; row<n;row++){
//         for(int col=0; col< row; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<n-row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// enter Num: 5
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter Num: ";
//     cin>>n;
//         for(int row=0; row<n;row++){
//         for(int col=0; col< n-row-1; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<row+1; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int row=0; row<n;row++){
//         for(int col=0; col< row; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<n-row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// enter Num: 5
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
    // * 



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter Num: ";
//     cin>>n;
//         for(int row=0; row<n;row++){
//         for(int col=0; col< n-(row+1); col++){
//             cout<<" ";
//         }
//         for(int col=0; col<2*row+1; col++){
//             if(col==0 || col==2*row){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
        
//         cout<<endl;
//     }
    
//         for(int row=0; row<n;row++){
//         for(int col=0; col<row; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<2*n-(2*row+1); col++){
//             if(col==0 || col==2*n-(2*row+1)-1 || row==n-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
        
//         cout<<endl;
//     }

//     return 0;
// }
// enter Num: 4
//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * *
//    *



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter Num: ";
//     cin>>n;
//         for(int row=0; row<n;row++){
//             for(int col=0; col<n-row; col++){
//                 cout<<"*";
//             }
//             for(int col=0; col<2*row+1; col++){
//                 cout<<" ";
//             }
//             for(int col=0; col<n-row; col++){
//                 cout<<"*";
//             }
//           cout<<endl;
//           }

//             for(int row=0; row<n;row++){
//             for(int col=0; col<row+1; col++){
//                 cout<<"*";
//             }
//             for(int col=0; col<2*n-(2*row+1); col++){
//                 cout<<" ";
//             }
//             for(int col=0; col<row+1; col++){
//                 cout<<"*";
//             }
//         cout<<endl;
//     }


//     return 0;
// }

// enter Num: 4
// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****


// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cout << "enter Num: ";
//   cin >> n;
//       for(int row=0; row<n;row++){
//           for(int col=0; col<row+1; col++){
//             cout<<row+1;
//               if(col!=row){
//                 cout<<"*";
//               }
//           }
//         cout<<endl;
//       }

//   for (int row = 0; row < n; row++) {
//     for (int col = 0; col < n-row; col++) {
//       cout << n-row;
//       if(col!= n-row-1){
//         cout<<"*";
//       }
//     }
//     cout << endl;
//   }

//   return 0;
// }
// enter Num: 
// 4
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1


// ** Process exited - Return Code: 0 **





// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cout << "enter Num: ";
//   cin >> n;
//       for(int row=0; row<n;row++){
//           int col;
//           for( col=0; col<row+1; col++){
//               cout<<col+1;
//           }
//           col--;
//           for(;col>=1; col--){
//               cout<<col;
//           }
//         cout<<endl;
//       }

//   return 0;
// }

// enter Num: 
// 4
// 1
// 121
// 12321
// 1234321


// ** Process exited - Return Code: 0 **



// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cout << "enter Num: ";
//   cin >> n;
//       for(int row=0; row<n;row++){
//           int col;
//           for( col=0; col<row+1; col++){
//               int ans=col+1;
//               char ch=ans+'A'-1;
//               cout<<ch;
//           }
//           col--;
//           for(;col>=1; col--){
//               int ans=col;
//               char ch=ans+'A'-1;
//               cout<<ch;
//           }
//         cout<<endl;
//       }

//   return 0;
// }

// enter Num: 
// 4
// A
// ABA
// ABCBA
// ABCDCBA


// ** Process exited - Return Code: 0 **