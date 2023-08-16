
#include <iostream>

using namespace std;

int main()
{
    int vetor[100];
    int numero,auxilo,ultimo,soma;
    auxilo=0;
    numero=1;
    soma=0;
    while(numero!=0 && auxilo<100){
        cin>>numero; 
        auxilo=auxilo+1;
      
   if(numero!=0){
       vetor[auxilo]={numero};
       ultimo=vetor[auxilo];
   }
        
       
           
        }
       for(int t=0; t<auxilo; t++){
            if(vetor[t]==ultimo){
                soma=soma+1;
            }
    }

 
     cout<<"Foram digitados: "<<soma<<" Numeros: "<<ultimo;
  
    return 0;
}
