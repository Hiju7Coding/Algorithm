#include <iostream>
using namespace std;
main()
{
 string s;
 for (cin >> s; cin >> s;)
  for (char c = 'a'; c <= 'h'; c++)
   for (char d = '1'; d <= '8'; d++)
    if ((c == s[0]) ^ (d == s[1]))
     cout << c << d << "\n";
}
//1907A