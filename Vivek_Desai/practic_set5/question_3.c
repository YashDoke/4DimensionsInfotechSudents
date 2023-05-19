#include<stdio.h>

int min_max(int fst,int snd){

    printf("\n");

    if(fst > snd){
        printf("first is maximam number: %d \nsecund is minimam number: %d",fst,snd);
    }
    else{
        printf("second is maximam number: %d \nfirst is minimam number: %d",snd,fst);
    }

    return 0;

}

int main(){

    int a,b;

    printf("enetr the first number: ");
    scanf("%d",&a);
    printf("enetr the secund number: s");
    scanf("%d",&b);

    min_max(a,b);



    return 0;
}