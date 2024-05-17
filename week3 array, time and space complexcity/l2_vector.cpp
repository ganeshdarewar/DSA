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



// union with avoid duplicates 

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> a{1,2,3,4,5};
//     vector<int> b{6,7,2,8};
//     vector<int> ans;
//     for(int i=0; i<a.size();i++){
//         for(int j=0; j<b.size(); j++){
//             if(a[i]==b[j]){
//                 b[j]=INT_MIN;
//             }
//         }
//     }
//     for(int i=0; i<a.size(); i++){
//         ans.push_back(a[i]);
//     }
//     for(int i=0; i<b.size(); i++){
//         if(b[i]!=INT_MIN){
//             ans.push_back(b[i]);
//         }
//     }
//     for(int i=0; i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }


// pair sum i.e 3+6 =9
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> a{1, 3, 5, 7, 4, 6};
//     int sum=9;
//     for(int i = 0; i < a.size(); i++){
//         for(int j = i + 1; j < a.size(); j++){
//             if(a[i] + a[j] == sum){
//                 cout << a[i] << " " << a[j] << endl;   
//             }
//     }
//     }
//     return 0;
// }


// triplet sums 10,20,30 =50

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> a{10,20,30,40,50,60,70,80,90,100};
//     for(int i=0; i<a.size(); i++){
//         for(int j=i+1; j<a.size();j++){
//             for(int k=j+1; k<a.size(); k++){
//                 if(a[i]+a[j]+a[k]==80){
//                     cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl; 
//                 }
//             }
//         }
//     }
//     return 0;
// }




// sort 0s and 1s

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a{0,1,1,0,1};
    int start=0;
    int end=a.size()-1;
    while(start<=end){
        if(a[start]>a[end]){
            // int temp= a[end];
            // a[end]=a[start];
            // a[start]=temp;
            swap(a[start], a[end]);
            start++;
            end--;
        }
        else{
             start++;
             end--;
        }
    }
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i]<<" ";
    // }
    for(auto val : a){
        cout<<val<<" ";
    }
    return 0;
}