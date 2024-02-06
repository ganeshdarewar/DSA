// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"enter num"<<endl;
//   cin>>n;
//   for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//       if(col==0 || col==row || row==n-1){
//         cout<<col+1;
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
//   return 0;
// }
// Output:

// enter num
// 1
// 12
// 1 3
// 1  4
// 12345


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "enter num" << endl;
//     cin >> n;

//     for (int row = 0; row < n; row++) {
//         for (int col = 0; col < n; col++) {
//             if (row == 0 || col == 0  || col == n - (row + 1)) {
//                 cout << col + 1;
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Output:

// enter num
// 12345
// 1  4 
// 1 3  
// 12   
// 1 



// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"enter num"<<endl;
//   cin>>n;
//   for(int row=0; row<n; row++){
//     for(int col=0; col<n-(row+1); col++){
//       cout<<" ";
//     }
//     int col;
//    for(col=0; col<row+1; col++){
//       cout<<col+1;
//     }
//     col--;
//     for(; col>=1; col--){
//       cout<<col;
//     }
    
//     cout<<endl;
//   }
//   return 0;
// }

// Output:

// enter num
//     1
//    121
//   12321
//  1234321
// 123454321

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//       cout<<"*";
//     }

//     cout<<endl;
//   }
//     for(int row=0; row<n; row++){
//     for(int col=0; col<n-(row+1); col++){
//       cout<<"*";
//     }
    
//     cout<<endl;
//   }
//   return 0;
// }

// Output:

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *


// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   for(int row=0; row<n;row++){
//     for(int col=0; col<n-(row)+3; col++){
//       cout<<"*";
//     }
//     for(int col=0; col<row+1; col++){
//       cout<<col+1;
//       if(col!=row){
//         cout<<"*";
//       }
//     }
//     for(int col=0; col<n-(row)+3; col++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// Output:

// ********1********
// *******1*2*******
// ******1*2*3******
// *****1*2*3*4*****
// ****1*2*3*4*5****

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int count=1;
//   for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//       cout<<count++;
//       if(col!=row){
//         cout<<"*";
//       }
//     }
//     cout<<endl;
//   }
//   int start=count-n;
//     for(int row=0; row<n; row++){
//       int k=start;
//     for(int col=0; col<n-row; col++){
//       cout<<k++;
//       if(col!=n-row-1){
//         cout<<"*";
//       }
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// Output:

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 7*8*9
// 7*8
// 7


// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int count=1;
//   for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//       cout<<count++;
//     }
//     cout<<endl;
//   }
//   return 0;
// }
// Output:

// 1
// 23
// 456
// 78910
// 1112131415
// 161718192021
// 22232425262728



// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//       cout<<"*";
//     }
//     for(int col=0; col<2*n-(2*row+1); col++){
//       cout<<" ";
//     }
//     for(int col=0; col<row+1; col++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   for(int row=0; row<n ; row++){
//     for(int col=0; col<n-row; col++){
//       cout<<"*";
//     }
//     for(int col=0; col<2*row+1; col++){
//       cout<<" ";
//     }
//         for(int col=0; col<n-row; col++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   return 0;
// }


// Output:

// *       *
// **     **
// ***   ***
// **** ****
// **** ****
// ***   ***
// **     **
// *       *

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   for(int row=0; row<n; row++){
//     int cond=row<=n/2 ? 2*row :2*(n-row-1);
//     for(int col=0; col<=cond; col++ ){
//       if(col<=cond/2){
//         cout<<col+1;
//       }
//       else{
//         cout<<cond-col+1;
//       }
//     }
//     cout<<endl;
//   }
//   return 0;
// }
// Output:

// 1
// 121
// 12321
// 1234321
// 12321
// 121
// 1



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     for (int row = 0; row < n; row++) {
//         int c = 1;
        
//         for (int col = 0; col < row + 1; col++) {
//             cout << c << " ";
//             c = c * (row - col) / (col + 1);
//         }
        
//         cout << endl;
//     }
    
//     return 0;
// }
// Output:

// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 