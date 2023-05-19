#include<stdio.h>

int main(){

    char str[] = "omakar ,desai,omy";

    char ch1 = 'o' , ch2 = ',';
    int fst_ch1 = -1 , scnd_ch1 = -1;
    int fst_ch2 = -1 , scnd_ch2 = -1;

    for(int i = 0; str[i] != '\0';i++){
        if(str[i] == ch1){
            if(fst_ch1 == -1){
                fst_ch1 = i;
            }
            scnd_ch1 = i;
        }
        else if(str[i] == ch2){
            if(fst_ch2 == -1){
                fst_ch2 = i;
            }
            scnd_ch2 = i;
        }

    }

    printf("First accorrance of the %c in endex %d\n",ch1,fst_ch1);
    printf("Second accorrance of the %c in endex %d\n",ch1,scnd_ch1);
    printf("First accorrance of the %c in endex %d\n",ch2,fst_ch2);
    printf("Second accorrance of the %c in endex %d\n",ch2,scnd_ch2);



    return 0;
}