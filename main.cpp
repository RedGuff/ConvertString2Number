#include <iostream>

using namespace std;

int main()
{
   string a1 = "3";
   int b1 = 1;
   b1 = atoi(a1.c_str()); // 0 if not a number.
   if ((b1 == 0) && (a1 !="0"))
   {
       cout << "Pas un nombre !" << endl;
   }
   cout << b1 << endl;

   string a2 = "TR";
   int b2 = atoi(a2.c_str()); // 0 if not a number.
   if ((b2 == 0) && (a2 !="0"))
   {
       cout << "Pas un nombre !" << endl;
   }
   cout << b2 << endl;
   
   return 0;
}
