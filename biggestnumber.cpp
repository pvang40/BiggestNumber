//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int A;
  cout<<"Please enter a whole number:\n";
  cin>> A;

  int B;
  cout<<"Please enter another whole number:\n";
  cin>> B;

  int biggest; 

  if (A >= B) 
  { 
    biggest = A; 
  } 
else  
{
  biggest = B;
}
cout<<"Of those two numbers, the biggest is: " << biggest;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
