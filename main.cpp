#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Inserisci un numero intero: ";
    cin >> N;

    int count = 0;
    cout << "I divisori di " << N << " sono: ";
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl << "Numero di divisori: " << count << endl;

    if (count == 2) {
        cout << N << " è un numero primo." << endl;
    } else {
        cout << N << " non è un numero primo." << endl;
    }

    return 0;
}
