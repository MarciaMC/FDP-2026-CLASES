```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    int suma = 0;

    cout << "Ingrese numeros (0 para terminar): " << endl;
    cin >> num;

    while(num != 0) {
        suma = suma + num;
        cin >> num;
    }

    cout << "La suma total es: " << suma;

    return 0;
}
```
