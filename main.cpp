#include <iostream>
#include <time.h>
#include <chrono>

using namespace std;

int main() {
    srand(std::chrono::duration_cast<std::chrono::milliseconds>(
 std::chrono::system_clock::now().time_since_epoch()).count()
 );
 int n = rand()%1000 - 500;

    int x;
    for (int i = 0; i < 8; i++) {
        cout << "Alege un numar intre -500 si 500: ";
        cin >> x;
        if (x == n) break;
        else if (x < n) cout << "Numarul ales este mai mic decat cel selectat de program." << endl;
        else cout << "Numarul ales este mai mare decat cel selectat de program." << endl;
    }

    if (x == n) {
        cout << "Felicitari! Ai ghicit numarul." << endl;
    }
    else {
        cout << "Ghinion! Numarul era " << n << endl;
    }

    return 0;
}
