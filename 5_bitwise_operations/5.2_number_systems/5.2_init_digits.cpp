long long values[256];
char digits[62];

void initDigits() {
  long long curDigit = 0ll;
  for (int i = 0; i < 256; i++) {
    values[i] = 100ll;
  }
  for (char a = 'A'; a <= 'Z'; a++) {
    values[a] = curDigit;
    digits[curDigit++] = a;
  }
  for (char a = 'a'; a <= 'z'; a++) {
    values[a] = curDigit;
    digits[curDigit++] = a;
  }
  return;
}