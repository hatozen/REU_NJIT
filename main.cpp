// Hatice Ozen's Application for REU Big Data @ NJIT
// Program to calculate the total amount of money spent by each customer in the dataset.
// Programming Language: C++

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float eggplant(float quantity)
{
    float price = 1.99;
    float e_total = price * quantity;
    return e_total;
}

float bread(float quantity)
{
    float price = 0.99;
    float b_total = price * quantity;
    return b_total;
}

float milk(float quantity)
{
    float price = 3.99;
    float m_total = price * quantity;
    return m_total;
}

int main()
{
   float customer1 = 0.0;
   float customer2 = 0.0;

   // the quantities of each item are from the given table within the problem. 
   customer1 = (eggplant(6.28) + bread(0.0) + milk(3.0));
   customer2 = (eggplant(6.25) + bread(14.0) + milk(1.0));

   cout << "Customer 001 spent a total of $";
   cout << setprecision(4) << customer1; 
   cout << " at the grocery store." << endl;
   cout << "Customer 002 spent a total of $"; 
   cout << setprecision(4) << customer2;
   cout << " at the grocery store." << endl;

    return 0;
}
