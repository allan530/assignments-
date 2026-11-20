#include <stdio.h>

int main (){
       int choice;
       printf("Select Data Bundle\n");
       printf("1.100MB @50\n");
       printf("2.500MB @200\n");
       printf("3.1GB   @350\n");
       printf("4.2GB   @600\n");
       printf("Enter your choice:");
       scanf("%d",& choice);

       if(choice==1)
       {
       printf("you selected 100MB cost=50 kes");
       }
       else if(choice==2)
       {
       printf("you selected 500MB cost=200 kes");
       }
       else if(choice==3)
       {
       printf("you selected 1GB cost=350 kes");
       }
       else if(choice==4)
       {
       printf("you selected 2GB cost=600 kes");
       }
       else {
       printf("invalid choice");
       }

       return 0;

}
