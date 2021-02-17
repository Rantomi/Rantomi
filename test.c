#include<stdio.h>
int somme(int x,int y){
    int resultat=x+y;
    return resultat;
}
int factorielle(int nbr){
    int r=1;

    for(i=1;i<n;i++){
        r=r*i;
    }
    return r;
}
int division(float a,float b){
    while(b<>0){
        int resulat=a/b;
    }
    printf("Tapez un autre nbr");

}

int main(void){
    printf("tapez x");
    printf("tapez y");
    scanf(x);
    scanf(y);
    printf(somme(x,y));
    printf(division(a,b));
    printf(voyelle(c));
    int n,k;
    int fact;
    printf('Entre le nbr n et k',n,k);
    scanf(n,k);
    fact=factorielle(n)/(factorielle(n-k)*factorielle(k));
    printf('la factorielle est:',fact);


}
int voyelle(char c;)
{

    printf("Entrer un caractère: \n");
    scanf(" %c", &c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')  {
    printf("\n %c est une voyelle.", c);
  }
    else {
      printf("\n %c est une consonne.", c);
  }
    return 0;
}
