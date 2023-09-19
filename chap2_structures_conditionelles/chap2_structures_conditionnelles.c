//Chap2: les structures conditionnels


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//*******************Chap2-Testing (conditions) *******************
//Exemple1

/*int main(){
    int nbImp;
    float prixTotal;
    printf("Donner le nombres des imp\n");
    scanf("%d",&nbImp);
    if (nbImp<5){
        prixTotal=nbImp*120;
        printf("prixTotal=%f",prixTotal);
    }else{
    prixTotal=nbImp*85;
    printf("prixTotal=%f",prixTotal);
    }
}
*/

//***chapitre2 serie*************************
//Exercice 1
/*Ecrire un programme en langage C qui demande � l�utilisateur d'entrer la moyenne d'un �l�ve.
Le programme permet d'afficher la mention obtenue.
moyenne en dessous de 10 : redouble
moyenne entre 10 (inclus) et 12 : passable
moyenne entre 12 (inclus) et 14 : Assez Bien
moyenne entre 14 (inclus) et 16: Bien
moyenne sup�rieure � 16 : Tr�s Bien*/

/*
int main(){
    float moy;
    printf("entrer la moyenne\n");
    scanf("%f",&moy);
    if ((moy>0 || moy<20)){
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
        }
     else {
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
    fflush(stdin); // pour regler le problem du tempon
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


// Exercice 5
/*
int main(){
    float total;
    printf("entrer le montant \n");
    scanf("%f",&total);
    if(total<=20){
        printf ("le montant a paye est %f",total);
    }else if(total>20 && total<=100){
        printf ("le montant a paye est %f",total-total*0.05);
    }else if(total>100 && total<=200){
        printf ("le montant a paye est %.3f",total-total*0.1);
    }else if (total>200){
        printf ("le montant a paye est %.3f",total-total*0.15);
    } else {
        printf("erreur!");
    }
    return 0;
}
*/
//avec switch

/* !!!!!!!!!!!!!!!!!!!!!!
int main(){
    switch ((int)solde){
    case 0 ...20:
    remise=0;
    break;
    case 21 ...100:
    remise=0.05;
    break;
    case 101 ..200;
    remise=0.10;
    break;
    default:
    remise=0.15;
    }
    montant=solde-(solde*remise);
    printf("montant=%.3f",montant);
    return 0;
}*/

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
            printf("som*som=%d\n",som*som);
        }else{
            printf("racine carre de som=%f",(float)sqrt(som));
        }}
    else {
        printf("Error\n");
        }
    return 0;
}
