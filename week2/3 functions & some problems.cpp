// ***********Functions------>Linked with well define task, without function code become bulky, lenghty
    // - function declaration or define should before the main function 

// #include <iostream>
// using namespace std;

// void printName(){
//   int n;
//   cout<<"enter num:";
//   cin>>n;
//   for(int i=0; i<n; i++){
//     cout<<"ganesh"<<endl;
//   }
// }
// int main() 
// {
//   //function call or invoke
//   printName();
// return 0;
// }


// #include <iostream>
// using namespace std;
// void addNum(int a){;
//   a++;
//   cout<<"copied value which doest affect the actual values "<<a<<endl;
// }
// int main() {
//   int a=5;
//   addNum(a);
//   cout<<"************Call by Value**********"<<endl;
//   cout<<"actual value"<<a;
// }
// copied value which doest affect the actual values 6
// ************pass or pass by Value **********
// actual value5



// #include <iostream>
// using namespace std;
// int addNum(int a, int b){;
//   cout<<"addition: "<<a+b;
// }
// int main() {
//   int a=5;
//   int b=10;
//   addNum(a, b);
//   return 0;
// }
// Output:

// addition: 15


// #include <iostream>
// using namespace std;
// int findMax(int x, int y, int z);// function declaration
// int main() {
//   int a=5;
//   int b=10;
//   int c=12;
//   int result=findMax(a, b,c);
//   cout<<"max: "<<result;
//   return 0;
// }
// int findMax(int x, int y, int z){ //function defination 
// int return type used when your function return number
//   if(x>y && x>z){
//     return x;
//   }
//   else if(y>z){
//     return y;
//   }
//   else{
//     return z;
//   }
// }
// Output:

// max: 12



// #include <iostream>
// using namespace std;
// void countNum(int n){ n is the parameter
//   for(int i=0; i<n; i++){
//     cout<<i<<endl;
//   }
// }
// int main(){
//   int n;
//   cout<<"enter Num :";
//   cin>>n;
//  countNum(n); n is the argument 
  
//   return 0;
// }



// #include <iostream>
// using namespace std;

// char getGrade(int m){ // char is used to return char value
//   if(m>=90){
//     return 'A';
//   }
//   else if(m>=70){
//     return 'B';
//   }
//   else{
//     return 'C';
//   }
// }
// int main(){
//   int marks;
//   cout<<"enter marks: ";
//   char finalGrde=getGrade(marks);
//   cout<<finalGrde;
//   return 0;
// }


// #include <iostream>
// using namespace std;

// char getGrade(int m){
//   switch(m/10){
//     case 10:
//     return 'A';
//     break;
//     case 9:
//     return 'A';
//     break;
//     case 8:
//     return 'B';
//     break;
//     default: return 'E';
//   }
// }
// int main(){
//   for(int i=0; i<=100; i++){
//   char finalGrde=getGrade(i);
//   cout<<"Grade for "<<i<<"is "<<finalGrde<<endl;
//   }
//   return 0;
// }


// #include <iostream>
// using namespace std;

// int sumOfEven(int n){
//   int sum=0;
//   for(int i=0;i<=n; i+=2){
//     sum=sum+i;
//   }
//   return sum;
// }
// int main(){
//   int n;
//   cin>>n;
//   int sum=sumOfEven(n);
//   cout<<"sum "<<sum;
//   return 0;
// }


// #include <iostream>
// using namespace std;

// int getArea(int r){
//   return (3.14*r*r);
// }
// int main(){
//   int r;
//   cout<<"enter radius: "<<endl;
//   cin>>r;
//   cout<<"area of circle "<<getArea(r);
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int getOddEven(int n){
//   if(n%2==0){
//     cout<<"even";
//   }
//   else{
//     cout<<"odd";
//   }
// }
// int main(){
//   int n;
//   cout<<"enter n ";
//   cin>>n;
//   getOddEven(n);
//   return 0;
// bxc


// check given number is prime 

// #include <iostream>
// using namespace std;
// #include <cmath>
// bool checkPrime(int n){
//   if(n>0){
//       for(int i=2; i<sqrt(n);i++){
//     if(n%i==0){
//       return false;
//     }
//   }
//   return true;
//   }
//   return false;
// }
// int main(){
//   int n;
//   cin>>n;
//   bool isPrime=checkPrime(n);
//   if(isPrime){
//     cout<<"prime";
//   }
//   else{
//     cout<<"not prime";
//   }
//   return 0;
// }


// print all prime 1 to N
// #include <iostream>
// using namespace std;
// #include <cmath>

// bool checkPrime(int n){
//   for(int i=2; i<=sqrt(n); i++){
//     if(n%i==0){
//       return false;
//     }
//   }
//   return true;
// }
// int main(){
//   int n;
//   cin>>n;
//   for(int i=2; i<n; i++){
//     bool isPrime=checkPrime(i);
//     if(isPrime){
//       cout<<i<<endl;
//     }
//   }
  
//   return 0;
// }


