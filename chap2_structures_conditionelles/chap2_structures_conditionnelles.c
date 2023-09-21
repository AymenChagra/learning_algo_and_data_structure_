//Chap2: les structures conditionnelles

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Exemple de structure conditionnelle:
//si le nombre des imprimantes acheté est inférieur à 5
//alors le prix unitaire des imprimantes est 120, si le nombre des imprimantes acheté
//est supérieur à 5 alors le prix unitaire est 85DTt
/*
int main(){
    int nbImp;
    float prixTotal;
    printf("Donner le nombre des imp\n");
    scanf("%d",&nbImp);
    if (nbImp<5){
        prixTotal=nbImp*120;
        printf("prixTotal=%.2f\n",prixTotal);
    }else{
    prixTotal=nbImp*85;
    printf("prixTotal=%.2f\n",prixTotal);
    }
    return 0;
}
*/

//***************chapitre2 serie2*************************
//Exercice 1
/*
int main(){
    float moy;
    printf("entrer la moyenne\n");
    scanf("%f",&moy);
    if (moy>0 && moy<20){  //condition utilsé pour le controle des entrés
        if (moy<10){
        printf ("redouble \n");
        } else if (moy>= 10 && moy<12){
        printf("assez bien\n");
        } else if ((moy>= 12) && (moy<14)){
        printf("assez bien\n");
        } else if ((moy>= 14) && (moy<16)){
        printf("bien\n");
        } else if ((moy>= 16) && (moy<=20)){
        printf("Tres bien\n");
        }
    }else {
    printf("erreur!!");
    }
    return 0;
}
*/

//Exercice 2
/*
int main(){
    char op;
    int a,b;
    printf("entrer deux valeurs\n");
    scanf("%d",&a);
    scanf("%d",&b);
    fflush(stdin); // pour regler le probleme du tampon
    printf("entrer l'operateur\n");
    scanf("%c",&op);
    switch(op){
        case '+':
        printf("a+b=%d",a+b);
        break;
        case '-':
        printf("a-b=%d",a-b);
        break;
        case '*':
        printf("a*b=%d",a*b);
        break;
        case '/':
        if (b!=0){
            printf("a/b=%f",(float)a/b);
        } else {
            printf("division impossible");
        }
        break;
        case '%':
        printf("a%%b=%d",a%b);
        break;
        default :
        printf("erreur");
    }
    return 0;
}
*/


// Exercice 5 partie 1 (with if statement)
/*
int main(){
    float solde;
    printf("entrer le solde \n");
    scanf("%f",&solde);
    if (solde>0){
        if(solde<=20){
        printf ("le montant a paye est %.3f \n",solde);
        }else if(solde>20 && solde<=100){
        printf ("le montant a paye est %.3f \n",solde-solde*0.05);
        }else if(solde>100 && solde<=200){
        printf ("le montant a paye est %.3f\n",solde-solde*0.1);
        }else{
            printf ("le montant a paye est %.3f\n",solde-solde*0.15);
        }
        }else {
            printf("erreur!\n");
        }
    return main();   // main est effectué à return pour essayer le code plusiers fois en console
}
*/

// Exercice 5 partie 1 (with switch)

/*
int main(){
    float solde,remise,montant;
    printf("entrer le solde \n");
    scanf("%f",&solde);
    switch ((int)solde){  //Note: le switch n'accepte pas le type float comme paramétre
    case 0 ...20:
    remise=0;
    break;
    case 21 ...100:
    remise=0.05;
    break;
    case 101 ...200:
    remise=0.10;
    break;
    default:
    remise=0.15;
    }
    montant=solde-(solde*remise);
    printf("montant=%.3f",montant);
    return 0;
}
*/


//Exercice 6:
int main(){
    int a,cent,diz,unite,som;
    printf("Entrer un entier compris entre 100 et 999 \n");
    scanf("%d",&a);
    if (a>100 && a<=999){
        cent=a/100;
        diz=(a%100)/10;
        unite=(a%100)%10;
        som=cent+diz+unite;
        if (som%2==0){
            printf("som*som=%d\n",(int)pow(som,2)); // the pow fct returns a double so we need to cast it with (int)
        }else{
            printf("racine carre de som=%.3f\n",(float)sqrt(som));
        }}
    else {
        printf("Error\n");
        }
    return 0;
}

