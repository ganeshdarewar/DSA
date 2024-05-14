#include <iostream>
using namespace std;

int main() 
{
  int x,y;
  x=5;
  y=++x*++x; //7*7
  cout<<x<<endl<<y<<endl;
  y=x++*++x; //9 * 7
  cout<<x<<endl<<y;
  
    return 0;
}

Output:

7
49
9
63