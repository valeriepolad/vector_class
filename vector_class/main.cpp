#include <iostream>
#include "pic10b_vector.h"
using namespace std;

int main () {
    int i=5, j=6, k;
    long l=10, m=5, n;
    k = pic10b::get_max(i,j);
    n = pic10b::get_max(l,m);
    cout << k << std::endl;
    cout << n << std::endl;
    return 0;
}
