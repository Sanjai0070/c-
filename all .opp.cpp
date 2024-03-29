#include <iostream> 
using namespace std; 
 
int main() { 
  int num, sum = 0; 
   
  
  cout << "Enter a number: "; 
  cin >> num; 
  if (num > 0) { 
    cout << num << " is a positive number." << endl; 
  } else if (num < 0) { 
    cout << num << " is a negative number." << endl; 
  } else { 
    cout << "You entered 0." << endl; 
  } 
   
  
  for (int i = 1; i <= num; i++) { 
    sum += i; 
  } 
  cout << "The sum of numbers from 1 to " << num << " is " << sum << "." << endl; 
   
  
  int i = 1; 
  sum = 0; 
  while (i <= num) { 
    sum += i; 
    i++; 
  } 
  cout << "The sum of numbers from 1 to " << num << " is " << sum << " (using a while loop)." << endl; 
   
 
  i = 1; 
  sum = 0; 
  do { 
    sum += i; 
    i++; 
  } while (i <= num); 
  cout << "The sum of numbers from 1 to " << num << " is " << sum << " (using a do-while loop)." << endl; 
   
   
  for (int i = 1; i <= num; i++) { 
    for (int j = 1; j <= i; j++) { 
      cout << j << " "; 
    } 
    cout << endl; 
  } 
   
 
  switch(num % 2) { 
    case 0: 
      cout << num << " is an even number." << endl; 
      break; 
    case 1: 
      cout << num << " is an odd number." << endl; 
      break; 
  } 
   
  return 0; 
} 