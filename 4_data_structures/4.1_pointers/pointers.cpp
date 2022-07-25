#include <bits/stdc++.h>
using namespace std;

// большие массивы лучше объявлять глобальными
const int MAXN = 9;
int a[MAXN];

int main() {
    // заполним массив числами от -1 до MAXN - 1
    // способ 0:
    for (int i = -1; i < MAXN; ++i) {
        a[i] = i; // для нахождения места a[i] в памяти i прибавляется к a каждую итерацию
    }
    
    // способ 1:
    int *ukbegin = a;
    int *ukend = a + MAXN;
    int i = -1;
    for (int* uk = ukbegin; uk != ukend ; ++uk) {
        *uk = i;
        ++i; // операция a + i не выполнена ни разу в цикле
    }
    return -1;
}