#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Numeros pares de 1 a 50:" << endl;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) cout << i << " ";
    }
    cout << endl;

    int numero;
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << numero << " eh PAR." << endl;
    } else {
        cout << numero << " eh IMPAR." << endl;
    }

    double nota, somaNotas = 0;
    int qtdNotas = 0;
    while (true) {
        cin >> nota;
        if (nota == -1) break;
        somaNotas += nota;
        qtdNotas++;
    }
    if (qtdNotas > 0) {
        cout << "Media das notas: " << somaNotas / qtdNotas << endl;
    } else {
        cout << "Nenhuma nota foi inserida." << endl;
    }

    double a, b, resultado;
    cout << "Digite dois valores: ";
    cin >> a >> b;
    cout << "Soma: " << a + b << endl;
    cout << "Subtracao: " << a - b << endl;
    cout << "Multiplicacao: " << a * b << endl;
    if (b != 0) {
        cout << "Divisao: " << a / b << endl;
    } else {
        cout << "Nao e possivel dividir por zero!" << endl;
    }

    cout << "Digite um numero: ";
    cin >> numero;
    cout << "\nTabuada de " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    cout << "Digite um numero inteiro: ";
    cin >> numero;
    int digitos = 0, num = abs(numero);
    while (num > 0) {
        num /= 10;
        digitos++;
    }
    if (numero == 0) digitos = 1;
    cout << "O numero possui " << digitos << " digitos." << endl;

    int a, b, qtdPrimos = 0;
    cout << "Digite os valores de a e b: ";
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (ehPrimo(i)) {
            qtdPrimos++;
        }
    }
    cout << "Quantidade de numeros primos no intervalo [" << a << ", " << b << "]: " << qtdPrimos << endl;

    return 0;
}
