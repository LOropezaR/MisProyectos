#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int deci, bandera,brandon, cele, numero, dinero, cuenta,selex, paroimpar, guarda,se, moni, apuesta;
int moni1, bband,ban;
int menu();
int nrand();
int falta[17]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
int pasa[17]={19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
int par[17]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36};
int impar[17]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35};
int doc1[11]={1,2,3,4,5,6,7,8,9,10,11,12};
int doc2[11]={12,13,14,15,16,17,18,19,20,21,22,24};
int doc3[11]={25,26,27,28,29,30,31,32,33,34,35,36};
int col1[11]={1,4,7,10,13,16,19,22,25,28,31,34};
int col2[11]={2,5,8,11,14,17,20,23,26,29,32,35};
int col3[11]={3,6,9,12,15,18,21,24,27,30,33,36};
void seleccion();
void doce();
void col();
int main()
{
    moni=1000;
    srand (time(NULL));
    bandera=0;
    do
    {
    printf("Bienvenido al juego de la ruleta \n desea jugar? si/no 1/0\n");
    scanf("%i", &deci);
    switch(deci)
    {

    case 1: bandera=1;
    break;

    case 0:printf("Gracias por jugar, hasta pronto\n");
    return 0;
        break;

    default:
    {printf("Respuesta invalida, intente de nuevo\n");//-------------------------------------------------------
    }
    }
    }while(bandera!=1);
    printf("\n");
    printf("Inserte la cantida de dinero que desee apostar\n");
       do{

    printf("Tiene %i\n", moni);//-------------------------------------------------------
    moni1=moni;
    do
    {
        ban=1;
        moni=moni1;
    if(moni<=0)
    {
    printf("No le queda más dinero, gracias por jugar, hasta pronto");//------------------Ver--------------
    return 0;
    }

printf("Cuanto desea apostar? : ");//-------------------------------------------------------
scanf("%i", &apuesta);
    moni=moni-apuesta;
    printf("Ahora tiene %i en la bolsa\n",moni);
    system("pause");
 if(moni>=0)
 {
     ban=0;
 }
    }while(ban!=0);

    printf("\n");
    seleccion();
    brandon=rand()%37;
    //printf("%i",brandon);
    scanf("%i", &cele);
    bandera=0;
//    brandon=5;//---------------------------------
    //lo anterior fue usado para pruebas
    switch(cele)
    {
    case 0:
        printf("Haz elegido el 0/00 (se tomará como uno)\n");
        if(brandon==0)
        {
            printf("Felicidades, haz ganado\n");
            bandera=1;

        }
        else{
            printf("Haz perdido\n");
            numero=0;
            printf("El numero fue %i", brandon);
        }

    break;
    case 1:
    do {printf("Inserte un numero del 1 al 36 ");
    scanf("%i", &numero);}while((0>numero) || (numero >= 36));
    if(brandon==numero)
    {
        printf("Felicidades, ganaste\n");
        bandera=1;
    }
    else
    {
        printf("Perdiste\n");
        bandera=0;
        printf("El numero fue %i", brandon);
    }
    break;
    case 2:
    printf("Haz elegido Pasa\n");
    for(cuenta=0;cuenta<=17;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==pasa[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=2;
    break;
    }
    }
    if(bandera!=2)
    {
    printf("Perdiste\n");
        bandera=0;
        printf("El numero fue %i", brandon);
    }
    break;
    case 3:
        printf("Haz elegido Falta\n");
    for(cuenta=0;cuenta<=17;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==falta[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=2;
    break;
    }
    }
    if(bandera!=2)
    {
    printf("Perdiste\n");
        bandera=0;
        printf("El numero fue %i", brandon);
    }
    break;
    case 4:
        printf("Haz elegido los pares\n");
    for(cuenta=0;cuenta<=17;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==par[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=2;
    break;
    }
    }
    if(bandera!=2)
    {
    printf("Perdiste\n");
        bandera=0;
        printf("El numero fue %i", brandon);
    }
    break;

    case 5:
    printf("Haz elegido los impares\n");
    for(cuenta=0;cuenta<=17;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==impar[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=2;
    break;
    }
    }
    if(bandera!=2)
    {
    printf("Perdiste\n");
        bandera=0;
        printf("El numero fue %i", brandon);
    }
    break;
        //impar
    case 6:
    printf("Haz elegido rojo\n");
    for(cuenta=0;cuenta<=17;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==impar[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=2;
    break;
    }
    }
    if(bandera!=2)
    {
    printf("Perdiste\n");
        bandera=0;
        printf("El numero fue %i", brandon);
    }
    break;

        //rojo
    case 7:
        printf("Haz elegido los Negros\n");
    for(cuenta=0;cuenta<=17;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==par[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=2;
    break;
    }
    }
    if(bandera!=2)
    {
    printf("Perdiste\n");
        bandera=0;
        printf("El numero fue %i", brandon);
    }
    break;
        //negros
        //-------------------------------------------------------------------------------------------------------
    case 8:
    doce();
    int les;

        printf("Haz elegido las docenas\n");
        printf("Inserte la docena que desee 1, 2 o 3 : ");
        do
        {
            scanf("%i",&les);

        }while(les!=1 && les!=2 && les!=3);
    switch(les)
    {
case 1:
    for(cuenta=0;cuenta<=11;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==doc1[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=3;
    break;
    }
    }
    break;
case 2:
    for(cuenta=0;cuenta<=11;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==doc2[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=3;
    break;
    }
    }
    break;
case 3:
    for(cuenta=0;cuenta<=11;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==doc3[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=3;
    break;
    }
    }
    break;

    if(bandera!=3)
    {
    printf("Perdiste\n");
        bandera=0;
        printf("El numero fue %i", brandon);
    }
    }
    break;

        //docenas
//-------------------------------------------------------------------------------------------------------
    case 9:
    col();
    printf("Haz elegido las columnas\n");
        printf("Inserte la columna que desee 1, 2 o 3 : ");
        do
        {
            scanf("%i",&les);

        }while(les!=1 && les!=2 && les!=3);
    switch(les)
    {
case 1:
    for(cuenta=0;cuenta<=11;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==col1[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=3;
    break;
    }
    }
    break;
case 2:
    for(cuenta=0;cuenta<=11;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==col2[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=3;
    break;
    }
    }
    break;
case 3:
    for(cuenta=0;cuenta<=11;cuenta++)
    {
    if(brandon==0)
    {
        break;
    }
    if(brandon==col3[cuenta])
    {
    printf("Felicidades, ganaste\n");
    bandera=3;
    break;
    }
    }
    break;
    }
    if(bandera!=3)
    {
    printf("Perdiste\n");
        bandera=0;
        printf("El numero fue %i \n", brandon);
    }
    break;
    }
     switch(bandera)
   {
   case 0:
       moni=moni+(apuesta*0);
       break;
   case 1:
       moni=moni+(apuesta*35);
       break;
   case 2:
       moni=moni+(apuesta*1);
       break;
   case 3:
       moni=moni+(apuesta*3);
       break;
   }
   printf("Aposto %i\n", apuesta);
   printf("Ahora tiene %i\n",moni);
   // printf("Continuar? Si/No 1/0\n Usted tiene %i \n",moni);//insertar la variable para guardar dinero
    //scanf("%i",&bband); si se desea poner una opcion que deje al usuario retirarse cuando este dese, se quitaran las barras de comentario
    bband=1;
   }while(bband!=0);
    return 0;
}
int menu()
{


    return bandera;
}
int nrand()
{

    brandon=rand()%(36-0+1)+0;

    return brandon;
}
void seleccion()
{
    system("cls");
    printf("Bienvenido, que tirada desea?\n");
    printf("0.- Cero\n");//
    printf("1.- Elegir un numero del 1 al 36\n");//
    printf("2.- Pasa\n");//
    printf("3.- Falta\n");
    printf("4.- Par\n");
    printf("5.- impar\n");
    printf("6.- Rojo\n");
    printf("7.- Negro\n");
    printf("8.- Docenas\n");
    printf("9.- Columnas\n");
}
void doce()
{
    printf("\n Inserte la docena que desee\n");
    printf("Primera, del 1 al 12 \t 1\n");
    printf("Segunda, del 13 al 24 \t 2\n");
    printf("Tercera, del 25 al 36 \t 3\n");
}
void col()
{
    printf("Inserte la columna que se desee\n");

    printf("Primera\n");
    printf("1,4,7,10,12,16,19,22,25,28,31,34\n");

    printf("Segunda\n");
    printf("2,5,8,11,14,17,20,23,26,29,32,35\n");

    printf("Tercera\n");
    printf("3,6,9,12,15,18,21,24,27,30,33,36\n");

}
