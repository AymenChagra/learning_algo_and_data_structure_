#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//TD tableaux

//Exercice 1 (suppression d'une valeur dans le tableau
/*
int main()
{
//declaration de la taille maximale du tableau
    int T[100];
    int n,i,j;
//saisie de taille n
do{
    printf("n=?\n");
    scanf("%d",&n);
} while (n<0 || n>100);

//remplissage du tableau
for (i=0; i<n;i++){
    printf("T[%d]\n",i);
    scanf("%d",&T[i]);
}
//affichage
for (i=0; i<n; i++){
    printf ("%d\t",T[i]);
}
i=0;

//traitement
while(i<n){
    if(T[i]==0){
        n--;
        j=i;
        while (j<n){
            T[j]=T[j+1];
            j++;
        }
    } else {
    i++;
    }
}
//affichage de tableau aprés
//printf("\n")
for (i=0; i<n; i++){
    printf("%d\t",T[i]);
}
return 0;
}
*/


//Exercice 2 (inserion d'une valeur dans le tableau)
/*
int main()
{
    int T[100];    //declaration de la talle max du tab
    int n,j,i,val;
//saisie de taille n
do{
    printf("n=?\n");
    scanf("%d",&n);
} while (n<0 || n>100);

//remplissage du tableau
for (j=0; j<n;j++){
    printf("T[%d]\n",j);
    scanf("%d",&T[j]);
}
//affichage
for (j=0; j<n; j++){
    printf ("%d\t",T[j]);
}
i=0;
//traitement
printf("\n");
do{
    printf ("Entrez la position\n");
    scanf("%d",&i);
} while (i<0 || i>n);
printf("Entrez la valeur\n");
scanf("%d",&val);
j=n; // on va parcouritr à partir du dernier element;
while(j>(i-1)){
    T[j]=T[j-1];
    j--;
}
T[i]=val;
n++;
for(i=0;i<n;i++){
    printf("%d\t",T[i]);
}
return 0;
}
*/


//Exercice 8 (matrice symetrique)
/*
int main(){
    int A[50][100];
    int  N,i,j,sym;
    //saisie N
    do{
        printf("N=?\n");
        scanf("%d",&N);
    }while((N<0)||(N>50));
    for (i=0; i<N; i++){
        for (j=0;j<N;j++){
            printf("A[%d][%d]\n",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //affichage de la matrice
    for (i=0; i<N; i++){
        for (j=0;j<N;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    //traitement
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(A[i][j]!=A[j][i]){
                sym=0;
                break;
            }
            else sym=1;
        }
    }

    if (sym==1){
        printf("matrice symétrique");
        }else{
            printf("matrice non symétrique");
        }

    return 0;
}
*/

//Exercice 10(vecteur min max dans un tableau)
// il y'a un probléme dans ce code !!!!!!!!!!!!!
/*
int main(){
    int A[50][100],Max[50][50],Min[50][50];
    int  N,i,j,aide,p=0,pp=0;
    //saisie N
    do{
        printf("N=?\n");
        scanf("%d",&N);
    }while((N<0)||(N>50));
    for (i=0; i<N; i++){
        for (j=0;j<N;j++){
            printf("A[%d][%d]\n",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //affichage de la matrice
    for (i=0; i<N; i++){
        for (j=0;j<N;j++){
            printf("%7d",A[i][j]);
        }
        printf("\n");
    }
    //vecteur max
    for (i=0; i<N; i++){
        aide=A[i][0];
        for (j=1; j<N; j++){
            if(A[i][j]>aide){
                aide=A[i][j];
            }
        Max[p]=aide;
        p++;
        }
    }
    //vecteur min
    for (j=0; j<N; j++){
        aide=A[0][j];
        for (i=1; i<N; i++){
            if(A[i][j]<aide){
                aide=A[i][j];
            }
        }
        Min[pp]=aide;
        pp++;
        }
    printf("\n");
    //affichage du vecteur max
    for (i=0; i<p; i++){
            printf("%d\t",Max[i]);
    }
    for (j=0; j<pp; j++){
            printf("%d\t",Max[i]);
    }
    return 0;
}
*/



//chap4 : Les chaines de charactéres**********************************************************************

//exercice 12 (calcule du longueur d'une chaine)
//methode 1 (avec strln)
/*
int main(){
    int len;
    char ch[10];
    printf("ch=?\n");
    fgets(ch,30,stdin);
    len=strlen(ch);
    printf("la longueur de la chaine est %d",len);
    return 0;
}
*/

//methode2 (avec une boucle)
/*
int main(){
    int i,cmp=0;
    char ch[20];
    printf("ch=?\n");
    fgets(ch,30,stdin);
    for (i=0; ch[i]!='\0'; i++){
        cmp++;
    }
    printf("la longuer de la chaine est %d",cmp);
    return 0;
}
*/

//methode 3
/*
int main(){
    char mot[20];
    int i=0;
    printf("donner de la chaine\n");
    gets(mot);
    for (i=0;mot[i]!='\0';i++);
    printf("com=%d\n",i);
}
*/



//Exercice13 (inversion d'une chaine)
//methode 1
/*
int main(){
    int i,j=0,len;
    char ch[20],inv[20];
    printf("ch=?\n");
    fgets(ch,20,stdin);
    len=strlen(ch);
    for(i=len-1; i>=0; i--){
        inv[j]=ch[i];
        j++;
    }
    inv[len]='\0';
    printf("la chaine inverse est %s",inv);
    return 0;
}
*/

//methode2
/*
int main() {
    int cmp;
    char mot[20],inverser[20];
    int i = 0;
    printf("donner de la chaine\n");
    fgets(mot, 20, stdin);
    cmp = strlen(mot)-1;
    // Reverse the string
    for (i = 0; i < cmp; i++) {
        inverser[i] = mot[cmp - i - 1];
    }
    inverser[cmp] = '\0';
    printf("chaine=%s\n", inverser);
    return 0;
}
*/

//Exercice15 (chaine palindrome)

//methode 1 avec les boucles
/*
int main(){
    char ch[20];
    int len,i,j=0,verif=0;
    printf("donner de la chaine\n");
    fgets(ch, 20, stdin);
    len=strlen(ch);
    len-=1;//longueur de la chaine sans '\0'
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (ch[i] != ch[j]) {
            verif = -1;
            break;
        }
    }
    if (verif==0){
        printf("la chaine est palindrome");
    } else{
        printf("la chaine est non palindrome");
    return 0;
    }
}
*/

//methode 2 (avec strcmp)
//il y'a un erreur quelque part dans ce code !!!!
/*
int main(){
    int len,i,j=0;
    char str[20], str1[20];
    printf("str=?\n");
    fgets(str,20,stdin);
    len=strlen(str)-1;
    for (i=len-1;i>=0;i--){
        str1[j]=str[i];
        j++;
    }
    str1[len]='\0';
    printf("str1=%s\n",str1);
    if (strcmp(str,str1)==0)
        printf ("la chaine est palindrome");
    else printf ("la chaine est non palindrome");
    return 0;
}
*/
