#include <iostream>

using namespace std;

int main() {
    int V[10];  
    int W[10];  
    int n, fatorial;

    for (int i = 0; i < 10; i++) {
        cout<<"Digite um numero: ";
        cin>>n;
        V[i]=n;
    }
    
    for (int x = 0; x < 10; x++) {
        fatorial = 1;

        for (int y = 1; y <= V[x]; y++) {
            fatorial *= y;
        }
        
        W[x] = fatorial;  
    }

   
    for (int i = 0; i < 10; i++) {
        cout << W[i] << " ";
    }


    return 0;
}
