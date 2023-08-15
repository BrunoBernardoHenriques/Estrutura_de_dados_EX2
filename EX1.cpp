
#include <iostream>

using namespace std;

int main()
{
    int limitador,numero[10];
    int inseri,forzinho;
    limitador = 0;
    
    while(limitador!=10){

        cin>>inseri;
        numero[limitador]={inseri};
        limitador=limitador+1;
        if(inseri<0){
            
            forzinho=limitador;
            limitador=10;
            for(int i = 0; i < forzinho; i++){
               cout<<numero[i]*-1<<"\n";
                                              }
            
                     }
        
    }
         
          for(int i = 0; i < 10; i++){
               cout<<numero[i]*-1<<"\n";
    
}
    

    return 0;
}
