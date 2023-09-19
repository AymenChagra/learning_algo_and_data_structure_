//Serie 1 et TD 1 : Instructions simples


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//*****************************************SERIE D'EXERCICE 1*************************************
//Exercice 1
/*
int main()
{
    int a,b;
    printf("Entrez la longueur du rectangle \n");
    scanf("%d",&a);
    printf("Entrez la largeur du rectangle \n");
    scanf("%d",&b);
    printf("perimetre=%d",(a+b)*2);
    return 0;
}*/

//Exercice 2
/*
int main(){
    float a;
    int b;
    printf("donner le premier entier \n");
    scanf("%f",&a);
    printf("donner le deuxieme entier \n");
    scanf("%d",&b);
    printf("la somme est:%f",a+b);
    return 0;
}*/

//Exercice 3
/*
int main(){
    int a,b;
    float q;
    printf("donner a: \n");
    scanf("%d",&a);
    printf("donner b: \n");
    scanf("%d",&b);
    q=(float)a/b;
    printf("q est %.3f ",q);
    return 0;
}*/

//Exercice 3+
//ces lignes de codes vont afficher le code
//ascii du charact�re 'b' qui est 98
/*
int main(){
    char var='b';
    printf("%d",var);
    return 0;
}
*/

//Exercice 4
/*
int main(){
    int a,b,c,tmp;
    printf("saisir a \n");
    scanf("%d",&a);
    printf("saisir b \n");
    scanf("%d",&b);
    printf("saisir c \n");
    scanf("%d",&c);
    tmp=a;
    a=b;
    b=c;
    c=tmp;
    printf("les nouvelles valeurs sont a=%d, b=%d, c=%d",a,b,c);
    return 0;
}
*/

//Exercice 6
/*
int main(){
    int inscr, pres;
    float pource_pres;
    printf("Nombre de condidats inscrits\n");
    scanf("%d",&inscr);
    printf("Nombre de condidats presents\n");
    scanf("%d",&pres);
    pource_pres=((float)pres/inscr)*100;
    printf("le pourcentage de condidats presents est %.1f %%",pource_pres);
    return 0;
}
*/





//*****************************TD N1 : Instructions Simples*************************************
//Exercice 4:
/*
int main(){
    const float salParHeure=3.397, salSupp=4.322,retenu=2.2;
    int nbreHeure, heureSupp;
    printf("Entrer le nombre d'heures de base\n");
    scanf("%d",&nbreHeure);
    printf("Entrer le nombre d'heures de suppl�mentaires\n");
    scanf("%d",&heureSupp);
    printf("le salaire brute est %.2f DT",(salParHeure*nbreHeure)+(salSupp*nbreHeure));
    return 0;
}
*/

// Exercice 5 partie 1
/*
int main(){
    int a,b,c,d,som=0;
    printf("entrer la premiere valeur \n");
    scanf("%d",&a);
    printf("entrer la deuxieme valeur \n");
    scanf("%d",&b);
    printf("entrer la troisieme valeur \n");
    scanf("%d",&c);
    printf("entrer la quatrieme valeur \n");
    scanf("%d",&d);
    som=a+b+c+d;
    printf("la somme est %d",som);
    return 0;
}
*/

// Exercice 5 partie 2
/*
int main(){
    int val,som=0;
    printf("entrer la premiere valeur \n");
    scanf("%d",&val);
    som+=val;
    printf("entrer la deuxieme valeur \n");
    scanf("%d",&val);
    som+=val;
    printf("entrer la troisieme valeur \n");
    scanf("%d",&val);
    som+=val;
    printf("entrer la quatrieme valeur \n");
    scanf("%d",&val);
    som+=val;
    printf("la somme est %d",som);
    return 0;
}
*/


//Exercice 7
/*int main(){
    const float pi=3.14;
    printf("%f",pi);
    return 0;
}
*/

