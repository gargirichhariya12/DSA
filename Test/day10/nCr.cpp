#include <iostream>
using namespace std;
                // Source, Aux,   Destination
                //nCr = (n-1 C r-1) + (n-1 C r)
int nCr (int n, int r){
    if(r == 0 || r == n) return 1;

    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}



int main() {
    int res = nCr(8, 6);

    cout << res;
	return 0;
}
