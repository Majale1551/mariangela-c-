#include <iostream> 
#include <ctime>
using namespace std;


int main (){
    int num;
    int adivinar;
    int intentos = 0;

    srand(time(NULL));
    num = (rand() % 100 ) + 1;

    cout<<"---Adivinanzas con DR JULIO---\n";
    cout<<"ELEGI AHORA un numero entre el 1 al 100\n";

    do{
        
        cin>>adivinar;
        intentos++;

        if(adivinar > num ){
            cout<<"Más bajo\n";
        } else if (adivinar < num){
            cout<<"Más alto\n";
        }

    }while (adivinar != num);{
        cout<<"Felicidades bebota, lo lograste con "<<intentos<<"intentos"<<endl;
    }
    

    return 0;
}