// ################### Conditioncals, loops, patterns ***********

// 2 table
#include <iostream>
using namespace std;

int main(){
    for(int i=1; i<=10; i++){
        cout<<"2 x "<<i<<" = "<<2*i<<endl;
    }
    return 0;
}

// square patteren
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter Num :";
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


// hollow rectangle
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter Num: ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if(row==0 || row==n-1 || col==0 || col==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout << endl;
    }

    return 0;
}

// half pyramid
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Num: ";
    cin >> n;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row+1; col++) {
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}

// inverted half pyramid
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Num: ";
    cin >> n;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n-row; col++) {
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}


// numeric half pyramid
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Num: ";
    cin >> n;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row+1; col++) {
            cout<<col+1;
        }
        cout << endl;
    }
    return 0;
}

