#include <iostream>
using namespace std;

int sumatoria(int m, int n);
int main()
{
    int n, m;
    cout << "Algoritmo que realiza la sumatoria de los numeros comprendidos entre n y m" << endl;
    do{
    cout << "Ingrese el numero n: ";
    cin >> n;
    cout << "Ingrese el numero m: ";
    cin >> m;
     if ((n < 0) || (m < 0)){
        cout << "El ingreso de los numeros n y m tiene que ser de enteros postivos " << endl;
        cout << endl;
     }
     if(n >= m){
         cout << "El numero n no puede ser mayor o igual que el numero m" << endl;
         cout << endl;
    }
    }while((n < 0) || (m < 0) || (n >= m ));

    cout << "La sumatoria de los numeros entre n y m es: " << sumatoria(n, m);
    return 0;
}

int sumatoria(int n, int m){
    int sum = 0;
    for(int i = n; i <= m; i++){
        sum = sum + i;
    }

    return sum;
}
