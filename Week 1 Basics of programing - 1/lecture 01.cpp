
// #multiply 2 num taking input
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter values for a and b: ";
    cin >> a >> b;

    cout << "Result: " << a * b << endl;

    return 0;
}
 
//  perimeter
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a,,b,c=";
    cin>>a>>b>>c;
    cout<<"perimeter:"<<a+b+c;
    return 0;
}

// Simple Interest
#include<iostream>
using namespace std;
int main(){
    int p, r, t;
    cout<<"enter p, r, i:";
    cin>>p>>r>>t;
    cout<<"Simple Interest: "<<p*r*t;
    return 0;
}

// countring from N to 1
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter numm :";
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<n-i<<"\n";
    }
    return 0;
}

// factorial
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num";
    cin>>n;
    int fact=1;
    for(int i=0; n>=1;i++){
        fact=fact*n;
        n--;
    }
    cout<<"factorial :"<<fact;
    return 0;
}


// 1 to N but only even
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter Num ";
    cin>>n;
    for(int i=1; i<n+1;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}


// greater num from 3
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a,b,c:";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"c is greater";
    }
    else if(b>c){
        cout<<"b is greater";
    }
    else{
        cout<<"c is greater";
    }
    return 0;
}

// valid triangle 
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ente a,b,c: ";
    cin>>a>>b>>c;
    if(((a+c)>c) || ((b+c)>a) || ((a+c)>b)){
        cout<<"valid traingle";
    }
    else{
        cout<<"Invlid Triangle";
    }
    return 0;
}


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=2; i<n;i++){
        if(n%i==0){
            cout<<"no prime"<<endl;
            return 0;
        }
    }
    cout<<"prime";
    return 0;
}