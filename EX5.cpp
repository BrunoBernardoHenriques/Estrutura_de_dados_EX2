
#include <iostream>
using namespace std;

int main()
{
    int V[12],maior,menor,n,par,soma;
    float percentual,media;
    //for para inserir os dados
    for (int i=0;i<12;i++){
        cin>>n;
        V[i]=n;
    }      
          par=0;
          menor=V[0];
          maior=V[0];
          soma=0;
      for (int i=0;i<12;i++){
         soma=soma+V[i];
          if(maior<V[i]){
              maior=V[i];
                         }
            if(menor>V[i]){
              menor=V[i];
                          }
                          
              if(V[i]%2==0){
                  par=par+1;
              }            
                         
                          
      }
      media= soma/12;
     percentual = (100*par)/12;  
    cout<<"Maior numero"<<maior<<"\n";
     cout<<"Menor numero"<<menor<<"\n";
        cout<<"Percentual de numeros par é "<<percentual<<"%\n";
          cout<<"Soma dos numeros é " <<soma<<"\n";
           cout<<"Media dos numeros é "<<media;
    return 0;
}
