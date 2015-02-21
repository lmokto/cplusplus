#include <iostream>
#include <cstdlib>
using namespace std;
int mcd(int x, int y){
    return (!y) ? x : mcd(y,x%y);
}

int main(int argc, char *argv[]){
    if (argc != 3)
        cout << "uso: mcd entero1 entero2\n";
    else{
        int a,b,MCD;
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        MCD = mcd(a,b);
        cout << a << "/" << b << " = " << a/MCD << "/" << b/MCD << endl;
    }
    return 0;
}
