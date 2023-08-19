
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Digite o número de letras";
    cin>>n;
    char vetor[n];
    char letra;
    for(int i=0; i<n;i++){
        cout<<"Digite a "<<i+1<<"º letra";
        cin>>letra;
        vetor[i]={letra};
    }
     cout<<"Palavra normal ";
     for(int i=0; i<n;i++){
      cout<<vetor[i];
          }
          
    cout<<"\nPalavra invertida ";
        for(int i=n; i>-1;i--){
        cout<<vetor[i];
            
          }
    return 0;
}
