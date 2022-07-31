#include <stdio.h>


int convertToIndx(int choice){
    switch(choice){
        case 0:
        return 2;

        case 1:
        return 6;

        case 2 :
        return 10;

        
        case 3 :
        return 16;

        case 4:
        return 20;

        case 5 :
        return 24;

        case 6 :
        return 30;

        case 7 :
        return 34;

        case 8:
        return 38 ;
    }
}
char ChangeboardX(char b[] , int indx){
    if (b[indx] != 'O')
    b[indx] = 'X';

return b[41];
}
char ChangeboardO(char b[] , int indx){
    if (b[indx] != 'X')
    b[indx] = 'O';
return b[41];
}

int finsh(char b[]){
   int value = 0 ;
  for(int i = 0;i < 41;i++)
    if (b[i] == b[i+4] && b[i] ==b[i+8] && b[i] != '_' && b[i] != '|' ){
        value =  1;  }
    else if(b[i] == b[i+18] && b[i] ==b[i+36] && b[i] != '_' && b[i] != '|' ){
       value =  1;}
    else if (b[i] == b[i+14] && b[i] ==b[i+28] && b[i] != '_' && b[i] != '|' ){
        value =  1;
    } 
    else if (b[i] == b[i+10] && b[i] ==b[i+20] && b[i] != '_' && b[i] != '|' ){
        value =  1;
    }

return value ;          
}



int main(){

    printf("|_0_|_1_|_2_|\n");
    printf("|_3_|_4_|_5_|\n");
    printf("|_6_|_7_|_8_|\n");
    char b[] ="|___|___|___|\n|___|___|___|\n|___|___|___|";

    int userInput;
    int userInput2;
    
    for(int i= 0;i<=8;i++){
        printf("Enter ur choice for X (0-8):");
        scanf("%d" , &userInput);
        int indx = convertToIndx(userInput);
        ChangeboardX(b , indx);
        printf("%s\n" , b); 
        
        if(finsh(b)== 1){
            printf("GG! player X has won the match" );
            break;
        }
        printf("Enter ur choice for O (0-8):");
        scanf("%d" , &userInput2);
        int indx2 = convertToIndx(userInput2);
        ChangeboardO(b , indx2);
        printf("%s\n" , b);
        
         if(finsh(b)== 1){
            printf("GG! player O has won the match" );
            break;
        }    } }