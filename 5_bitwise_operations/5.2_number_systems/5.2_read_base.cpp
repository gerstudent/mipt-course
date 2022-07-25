#include <string>
using namespace std;

long long values[256];

long long readBase(string s, int base) {
  long long res = 0ll, mult = 1ll;
  int i = 0;
  if (s[i] == '-') {
    mult = -1ll;
    i++;
  }
  for (; i < (int)s.length(); i++) {
    if (values[s[i]] < base) {
      res = res * (long long)base + values[s[i]];
    } else {
      break;
    }
  }
  return mult * res;
}