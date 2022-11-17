#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>

using namespace std;

void showData(int *a,int *b,int *suma,int *mul){

    while(true){
        cout<<"dato1: "<<*a<<endl;
        cout<<"dato2: "<<*b<<endl;
        cout<<*a<<"+"<<*b<<"="<<*suma<<endl;
        cout<<*a<<"x"<<*b<<"="<<*mul<<endl;
        cout<<"============="<<endl;
        *a+=1;
        *b+=1;
        this_thread::sleep_for(chrono::milliseconds(5000));
    }
}

void sum(int *a,int *b,int *suma){
    while(true){
        *suma = *a+*b;
        this_thread::sleep_for(chrono::milliseconds(5000));
    }
}

void multi(int *a,int *b,int *mul){

    while(true){
        *mul = (*a)*(*b);
        this_thread::sleep_for(chrono::milliseconds(5000));
    }

}
void upDate(int *a,int *b){

    while(true){

        *a+=1;
        *b+=1;

        this_thread::sleep_for(chrono::milliseconds(5000));
    }
}

int main()
{
    //Hilos
    /*int data1=0,data2=1,sumas=0,mult=0;

    std::thread job1(showData,&data1,&data2,&sumas,&mult);//se encarga de mostrar los datos y sumar una unidad a a y b
    std::thread job2(sum,&data1,&data2,&sumas);//se encarga de sumar a y b
    std::thread job3(multi,&data1,&data2,&mult);//se encarga de multiplicar a y b
    //std::thread job4(upDate,&data1,&data2);

    job1.join();
    job2.join();
    job3.join();
   // job4.join();*/

    //Interrupciones

    int a=0,b=0,c=0;
    bool bandera=false;
    try{
    while(bandera==false){
        try{
        cout<<"Que oepracion decea realizar \n"
              "1.divicion \n"
              "2.raiz \n"
              "3.limpiar pantalla";

        cin>>c;
        if(c==1){
            cout<<"ingrese el numerador";
            cin>>a;
            cout<<"ingrese el denominador";
            cin>>b;
            if(b==0){
                throw "el valor de b no puede ser cero";
            }
            else{
                cout<<a/b<<endl;
            }
        }
        else if(c==2){
            cout<<"ingrese el numero al que le sacara raiz ";
            cin>>b;
            if(b<0){
                throw "el valor de b es menor a 0 y en raices no es posible efectuar la operacion";
            }
            else{
               cout<<"la raiz es:"<<sqrt(b)<<endl;
            }
        }
        else if(c==3){
            system("cls");
        }
        else{
            throw "la opcion que a escogido no es correcta";
        }

        }catch(const char *error){
            cout<<"Error:"<<error<<endl;
        }
    }
    }catch(const char *equivocado){
        cout<<"Error:"<<equivocado<<endl;
    }


    return 0;
}
