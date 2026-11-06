#include<stdio.h>

int o,p,n,t;
char f,m[10][25]={"PAV BHAJI","PIZZA","PASTA","BURGER","J. BURGER"};
int pr[5]={80,250,200,40,30};
int qty[5]={0,0,0,0,0};
int main()
{
   printf("\n\n\n\n");
    printf("\n************ HONEST *************");
    printf("\nWelcome To Honest Restaurant Pakwan Branch :)\n");
    printf("\nSr. no    \tName     \t Price\n");
    for(int i=0;i<5;i++)
    {
        printf("\n\n%i.    \t\t%s     \t%i",i+1,m[i],pr[i]);
    }
    while(1){
    printf("\n\nPRESS :");
    printf("\n1. Place order \n2. Exit \n Enter A Number");
    scanf("%i",&o);
    
    if(o==1)
    {
        int s=0;
      while(1){
     printf("\n\nENTER YOUR ORDER :-\n\n1:-Pav bhaji \n2:-Pizza \n3:-Pasta \n4:-Burger \n5:-Jain Burger "); 
scanf("%i",&p);
      
      printf("\nEnter quantity :");
      scanf("%i",&n);
      printf("Your order-->");
      
      if(p==1)
      {
          qty[0]=n;
          printf("Pav Bhaji");
          s=s+80*n;
         // m[i]=0;
      }
      else if(p==2)
      {
        qty[1]=n;
          printf("Pizza");
          s=s+250*n;
      }
      else if(p==3)
      {
 qty[2]=n;
          printf("Pasta");
          s=s+200*n;
      }
      else if(p==4)
      {
        qty[3]=n;
          printf("Burger");
          s=s+40*n;
      }
      else if(p==5)
      {
        qty[4]=n;
          printf("Jain Burger");
          s=s+30*n;
      }

      printf("\n\nWant to order more good food (y/n) :");
      fflush(stdin);
      scanf("%c",&f);
      if(f=='n')
      {
         break;
      }
      }
      printf("\n\t\t\t\t\t   BILL");
      printf("\n\t\t\t----------------------------------------------");
       printf("\n\t\t\tName.   \t\tQty.    Price  \tPrice ");
      for(int i=0;i<5;i++)
      {
        if(qty[i]!=0)
        {
          int x=pr[i]*qty[i];
            printf("\n\t\t\t%s   \t\t%i   \t%i  \t%i",m[i],qty[i],pr[i],x);
        }
      }
      printf("\n\t\t\t----------------------------------------------");
      printf("\n\t\t\tTotal Amount   : %i",s);
      
      int cgst=s*0.025;
      
     printf("\n\t\t\tCGST (2.5perc.) : %i",cgst);
     printf("\n\t\t\tSGST (2.5perc.) : %i",cgst);
     printf("\n\t\t\t----------------------------------------------");
     t=s+2*cgst;
     printf("\n\t\t\tNET Amount : %i",t);
     
     goto end;
    }
    else
    {
      printf("EXITED");
    }
    }
    end:
    printf("\n.....Bye....");
}