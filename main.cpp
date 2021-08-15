#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

string pad(string texto, const int comprimento = 10, const char ch = ' ') {
    int l = texto.length();
    if (l < comprimento) {
        texto.insert(0, comprimento - l, ch);
    }
    return texto;
}

int main() {
    const int tamanho = 4;
    int vetor[tamanho][tamanho], x = 0, y = 0, valor = 0, valorDigitado;
    string texto;

    cout << "Programa que lê uma matriz bidimensional 4x4 "
            "e multiplica o valor inserido pelo valor "
            "de cada item da matriz.\n\n";

    for (y = 0; y < tamanho; y++) {
        for (x = 0; x < tamanho; x++) {
            if (x > 0) {
                cout << "  |  ";
            }
            texto = to_string(valor);
            cout << pad(texto, 2);
            vetor[y][x] = valor++;
        }
        cout << endl;
    }

    cout << endl;
    cout << "Digite um valor: ";
    cin >> valorDigitado;
    cout << endl;

    for (y = 0; y < tamanho; y++) {
        for (x = 0; x < tamanho; x++) {
            if (x > 0) {
                cout << "  |  ";
            }
            valor = vetor[y][x] * valorDigitado;
            texto = "";
            texto.append(to_string(valorDigitado));
            texto.append("x");
            texto.append(to_string(vetor[y][x]));
            texto.append(" = ");
            texto.append(pad(to_string(valor), 3));
            cout << pad(texto, 11);
        }
        cout << endl;
    }

    return 0;
}
