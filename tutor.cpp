#include <iostream>
using namespace std;

void BF(string x, int m, string y, int n) {
   int i, j;

   /* Searching */
   for (j = 0; j <= n - m; ++j) {
      for (i = 0; i < m && x[i] == y[i + j]; ++i);
      if (i >= m)
         cout << j << "\n";
   }
}
int main() {
  BF("aababababbba", 12, "kklfaaa", 7);
  return 0;
}