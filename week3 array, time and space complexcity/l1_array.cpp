// #include <iostream>
// using namespace std;

// int main(){

//     // // bad practice
//     // int n;
//     // cin>>n;
//     // int arr[n];



//     int arr[5];

//     //input array 
//     for(int i=0; i<5; i++){
//         cin>>arr[i];
//     }

//     // accessing array
//     for(int i=0; i<5; i++){
//         cout<<arr[i];
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]*2<< " " ;
//     }
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[100]={1,3,4,5};

//     for(int i=0; i<4; i++){
//         arr[i]=1;
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr[i];
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<< " ";
//     }
//     cout<<endl;
// }
// void inc(int arr[], int size){
//     arr[0]=arr[0]+10;
//     printArray(arr, size);
// }

// int main(){
//     int arr[]={1,2,3,4};
//     int size=4;
//     inc(arr, size); // pass by reference 
//     printArray(arr, size);
//     return 0;
// }

// linear Search
// 


// bool find(int arr[], int size, int key){
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int size=4;
//     int key;
//     cout<<"enter key";
//     cin>>key;
//     if(find(arr, size, key)){
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
//     cout<<sizeof(arr)/sizeof(int);
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int size = sizeof(arr)/sizeof(int);
//     int key =10;
//     bool flag=0;
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             flag=1;
//             break;
//         }
//     }
//     if(flag){
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
// }


// count 0s and 1s 

// #include <iostream>
// using namespace std;
// int countNum(int arr[], int size){
//     int countZero=0;
//     int countOne=0;
//     for(int i=0;i<size; i++){
//         if(arr[i]==0){
//             countZero++;
//         }
//         if(arr[i]==1){
//             countOne++;
//         }
//     }
//     cout<<"count zero "<<countZero<<endl;
//     cout<<"count one "<<countOne;
// }
// int main(){
//     int arr[]={0,1,0,0,0,0};
//     int size= sizeof(arr)/sizeof(int);
//     countNum(arr, size);
//     return 0;
// }


// maxnum in array

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4, 2, 4, 10, 2};
//     int size=sizeof(arr)/sizeof(int);
//     int max=INT_MIN;
//     for(int i=0; i<size; i++){
//         for(int j=0; j<size; j++){
//             if(arr[i]<arr[j]){
//                max =arr[j]; 
//             }
//         }
//     }
//     cout<<max;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3};
//     int size = sizeof(arr)/sizeof(int);
//     int max = INT_MIN;
//     int min = INT_MAX;
//     for(int i=0; i<size; i++){
//         if(arr[i]> max){
//             max = arr[i];
//         }
//         if(arr[i]<min){
//             min= arr[i];
//         }
//     }
//     cout<<"max num "<<max<<endl;
//     cout<<"min num "<<min;
//     return 0;
// }



// extreme print in array

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10, 11};
//     int size= sizeof(arr)/ sizeof(int);
//     int start=0;
//     int end= size-1;
//     while (start<=end){
//         if(start == end){
//             cout<<arr[start++]<<" ";
//         }else{
//         cout<<arr[start++]<<" ";
//         cout<<arr[end--]<<" ";
//         }
//     }
//     return 0;
// }


// reverse array

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    int size = sizeof(arr)/sizeof(int);
    int start =0;
    int end=size-1;
    while(start<=end){
        // int temp= arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;

        // or

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}