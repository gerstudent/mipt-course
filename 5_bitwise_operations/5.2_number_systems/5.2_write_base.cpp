#include <string>
using namespace std;

using ll = long long;

char digits[62];

string writeBase(ll x, int base) {
  string sign = "", res = "";
  if (x < 0ll) {
    x = -x;
    sign = "-";
  }
  for (; x != 0ll; x /= base) {
    res.push_back(digits[x % base]);
  }
  int len = res.length();
  for (int i = 0; len - i - 1 > i; i++) {
    swap(res[i], res[len - i - 1]);
  }
  return len ? sign + res : "0";
}