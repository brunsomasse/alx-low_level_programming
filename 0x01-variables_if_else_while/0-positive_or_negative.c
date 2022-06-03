#include <stdlib.h>

#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */

int main(void)
  
{
int n;

cout  << "Enter any number : ";
cin >> number;

srand(time(0));
n = rand() - RAND_MAX / 2;
  
if(n > 0)
{ 
cout << endl << "POSITIVE NUMBER" << endl;
}

if(n < 0)
{
cout << endl << "NEGATIVE NUMBER" << endl;
}

if(n == 0)
{
cout << endl << "NUMBER IS ZERO" << endl;
}

return (0);
  
}
