#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    bool f;
    char a;
    string tab [5][7] = {
    {"A-1","B-1","C-1","D-1","E-1","F-1","G-1"},
    {"A0","B0","C0","D0","E0","F0","G0"},
    {"A1","B1","C1","D1","E1","F1","G1"},
    {"A2","B2","C2","D2","E2","F2","G2"},
    {"A3","B3","C3","D3","E3","F3","G3"}
    };
    cout << "quelle gamme choisissez vous : 1 , 2 , 3 , 4 ,5 ? ";
    cin >> x;
    while ( !f ) {
        cout << "écrivez vos notes entre 0 et 6";
        cin >> y;
        if ( y == 7 || y == 7 ){
            f == true;
        } else {
            cout << tab[x][y] << endl;
        }
    }
    return 0;
}