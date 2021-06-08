
#include <iostream>
using namespace std;
int main() 
{
   unsigned long long int f; // Fosc 
   unsigned long long int b; // Baud
   unsigned long long int d; // Veriable 
   float ubr; // float veriable UBRRn
   f = 16000000; // Frequency 
   d = 16;
   cout << "Enter Your Baud:" ;
   cin >> b;
   ubr = (f/(d * b) - 1); // UBRRn Formula 
   cout << "UBRRn Value: " << ubr; // Output 
   return 0;
}

