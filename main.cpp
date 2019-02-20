#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);

/*
 * Main() contains all of the outputs and receiving of data.
 */
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

/*
 * This function takes in three integers passed by reference, and 
 * compares them to each other. If a preceding number is less than a
 * number after it, they are swapped. The goal of this is to order the numbers
 * in decending order
 */
void sortDescending(int &first, int &second, int &third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}

/*
 * This function gets two integers passed by reference.
 * It then swaps them with each other.
 */
void swap(int &a, int &b)

{
  int temp = a;
  a = b;
  b = temp;
}
