 #include <iostream>
 using namespace std;
 
 int main ()
 {
 	int valor1, valor2;
 	
 	cout << "digite o primeiro valor: " ;
 	cin >> valor1;

    cout << "digite o segundo valor (diferente do primeiro): " ;
    cin >> valor2;
    
    if (valor1 == valor2) {
		cout << "os valores devem ser distintos." << endl;
	} else {
		if (valor1 > valor2) {
        cout << "o maior valor es: " << valor1 << endl;
        
		} else { 
			cout << "o maior valor es: " << valor2 << endl;
		}
	}
	
	return 0;
 }