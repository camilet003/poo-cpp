#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite a idade da pessoa: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "A pessoa é maior de idade." << endl;
    } else {
        cout << "A pessoa é menor de idade." << endl;
    }

    cout << "Contagem regressiva:" << endl;
    for (int i = 10; i >= 1; i--) {
        cout << i << endl;
    }
    cout << "FIM!" << endl;

    int numero, soma = 0;
    cout << "Digite numeros (digite 0 para encerrar):" << endl;
    do {
        cin >> numero;
        soma += numero;
    } while (numero != 0);
    cout << "A soma total dos numeros digitados e: " << soma << endl;

    int n;
    cout << "Digite um numero para ver sua tabuada: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    int positivos = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;
        if (numero > 0) positivos++;
    }
    cout << "Quantidade de números positivos: " << positivos << endl;

    float nota, somaNotas = 0;
    int contador = 0;
    while (true) {
        cin >> nota;
        if (nota < 0) break;
        somaNotas += nota;
        contador++;
    }
    if (contador > 0) {
        cout << "A média das notas válidas é: " << somaNotas / contador << endl;
    } else {
        cout << "Nenhuma nota válida foi digitada." << endl;
    }

    cout << "Números pares de 1 a 50:" << endl;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) cout << i << " ";
    }
    cout << endl;

    srand(time(0));
    int numeroSecreto = rand() % 10 + 1, tentativa;
    cout << "Tente adivinhar o número secreto entre 1 e 10!" << endl;
    while (true) {
        cout << "Digite seu palpite: ";
        cin >> tentativa;
        if (tentativa == numeroSecreto) {
            cout << "Parabéns! Você acertou!" << endl;
            break;
        } else if (tentativa < numeroSecreto) {
            cout << "O número secreto é MAIOR que " << tentativa << "." << endl;
        } else {
            cout << "O número secreto é MENOR que " << tentativa << "." << endl;
        }
    }

    int somaImpares = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) somaImpares += i;
    }
    cout << "A soma de todos os números ímpares entre 1 e 100 é: " << somaImpares << endl;

    srand(time(0));
    numeroSecreto = rand() % 10 + 1;
    do {
        cout << "Digite seu palpite: ";
        cin >> tentativa;
        if (tentativa > numeroSecreto) {
            cout << "O numero secreto eh menor!" << endl;
        } else if (tentativa < numeroSecreto) {
            cout << "O numero secreto eh maior!" << endl;
        } else {
            cout << "Parabens! Voce acertou!" << endl;
        }
    } while (tentativa != numeroSecreto);

    return 0;
}
