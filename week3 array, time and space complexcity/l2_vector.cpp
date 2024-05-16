// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
    // vector<int> arr;
    // cout<<arr.empty()<<endl; // empty will return 0
    // cout<<arr.size()<<endl; // 0 here size means how much item is filled
    // cout<<arr.capacity()<<endl; // 0 here capacity means how item can filled

    // // insert
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }

    // // delete/remove
    // arr.pop_back();
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }

    // vector<int> arr(10);
    // cout<<arr.size()<<endl; // 10
    // cout<<arr.capacity()<<endl; //10
    // for(int i=0; i<arr.size();i++){
    //     cout<<arr[i]; // all will be 0
    // }

    
    // vector<int> arr(10, -1); // now all item will be -1
//     vector<int> arr{1,2,3}; 
//     cout<<arr.empty();

//     return 0;
// }




// problems 

// find unique value in array

// #include <iostream>
// #include <vector>
// using namespace std;

// int findUnique(vector<int> arr){
//     int ans=0;
//     for(int i=0; i<arr.size(); i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"enter size";
//     cin>>n;
//     vector<int> arr(n);
//         cout<<"enter items";
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     cout<<"unique Num: "<<findUnique(arr);
//     return 0;
// }



// union of array

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr{1,2,3};
//     vector<int> brr{4,5};
//     vector<int> ans;

//     for(int i=0; i<arr.size();i++){
//         ans.push_back(arr[i]);
//     }
//     for(int i=0; i<brr.size();i++){
//         ans.push_back(brr[i]);
//     }

//     // print array
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }


// intersection of array (common item between 2 array)
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> a{1,2,3,3,4,5};
//     vector<int> b{1,2,3,4,3};
//     vector<int> ans;
//     for(int i=0; i<a.size(); i++){
//         for(int j=0; j<b.size(); j++){
//             if(a[i]==b[j]){
//                 b[j]=INT_MIN; // to avoid prev item check value
//                 ans.push_back(a[i]);
//             }
//         }
//     }
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }



// union with avoid duplicates time 1.5