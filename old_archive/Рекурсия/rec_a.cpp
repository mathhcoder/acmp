#include <iostream>
#include <string>

using namespace std;

int n;

void rec (int k, string s)
{
 if (k == n)
 {
  cout << s << endl;
  return;
 }
 rec (k + 1, s + '0');

 rec (k + 1, s + '1');
}

int main ()
{
 cin >> n;

 rec (0, "");

 return 0;
}
