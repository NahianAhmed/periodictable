#include<stdio.h>
#include<string.h>
void all_element();
void search();
void periodic_table();
void nature();
void menu();
int z;
int main()
{
    system("COLOR C");
    int choice;
    printf("\t\t\t MODERN PERIODIC TABLE\n");
    printf("\t\t\t =====================\n");

        printf("1.Show All Element\n2.Search\n3.Full Table\n4.Nature\n5.Exit\n");
        scanf("%d",&choice);
        system("CLS");
        if(choice==1)
            all_element();
        else if(choice==2)
            search();
        else if (choice==3)
            periodic_table();

        else if(choice==4)
            nature();
        }


void menu()
{
     int choice;
    printf("\t\t\t MODERN PERIODIC TABLE\n");
    printf("\t\t\t =====================\n");

        printf("1.Show All Element\n2.Search\n3.Full Table\n4.Nature\n5.Exit\n");
        scanf("%d",&choice);
        //system("CLS");
        if(choice==1)
            all_element();
        else if(choice==2)
            search();
        else if (choice==3)
            periodic_table();

        else if(choice==4)
            nature();

}
void all_element()


 {
        system("COLOR c");
        int i,k=0;
        char str[2000];
        FILE *fp;
        fp=fopen("ot.txt","r");

        fprintf(fp,"%s",str);
        for(i=0;i<590;i++)
    {
        k++;
        fscanf(fp,"%s",str);

        printf("%s\t",str);
        if(k==5)
    {
        printf("\n\n");
        k=0;
    }

    }
        fclose(fp);
    printf("\t\t\t\t\t\t1.BACK TO MENU\n");
    printf("\t\t\t\t\t\t2.EXIT\n");
    scanf("%d",&z);
    if(z==1)
        menu();
    else
        return 0;
}
void search()
{
    do
    {
    int found=0,i,s,y;
    char l[1000],p[2000][15];

FILE *fp;
    fp=fopen("ot.txt","r");
    printf("What\'s you looking for: (For atomic number put 0 in front of 1-18 EX:03)\nDon\'t search with group\n");
    scanf("%s",l);
    for (i=0;i<2000;i++)

{   fscanf(fp,"%s",p[i]);
        if(strcmp(l,p[i])==0)
        {
           y=(int)(i/5)*5;
           found=1;
           printf("Atomic Number\tSymbol:\tMass:\tGroup:\tName:\n");
           printf("\t%s",p[y]);
        }
    }
    ++y;
    printf("\t%s",p[y]);
    ++y;
    printf("\t%s",p[y]);
    ++y;++y;--y;
    printf("\t%s",p[y]);
    printf("\t%s",p[++y]);
    if (found==0)
    printf("The input does not exist.\n");
     printf("\n\n");
     printf("\t\t\t\t\t\t1.BACK TO MENU\n");
    printf("\t\t\t\t\t\t2.For Continue\n");

    scanf("%d",&z);
    }while(z!=1);
    system("CLS");
    if(z==1)
        menu();
    else if(z==2)
        return 0;
        else
            printf("Wrong input\n");

}
periodic_table()

 {
     int z;
int i,j,k=0,n=0,m;
char element0[30][30]={"H","He"};
char element1[30][30]={"Li","Be","B","c","N","O","F","Ne"};
char element2[30][30]={"Na","Mg","Al","Si","P","S","Cl","Ar"};
char element3[20][20]= {"K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ga","As","Se","Br","Kr"};
char element4[30][30]={"Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe"};
char element5[30][30]={"Cs","Ba","*Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Ti","Pb","Bi","Po","At","Rn"};
char element6[30][30]={"Fr","Ra","#Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Uub","Uut","Uuq","Uup","Uuh","Uus","Uuo"};

char element7[30][30]={"La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb"};
char element8[30][30]={"Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No"};
char rnumber[30][30]={"IIIB","IVB"," VB", "VIB", "VIIB","--","VIII","--","IB","IIB"};
char rnumber2[30][30]={"IIA","IIIA","IVA","VA","VIA","VIIA"};
char rnumber3[30][30]={"IA","0"};

                             //roman number
                                 printf("\n");
                             printf("\t\t\t     --PERODIC TABLE OF ELEMENT--");
                            system("COLOR c");
                                printf("\n");
                             printf("\t  ");

                             for(i=0;i<18;i++){
                              if(i==0||i==17){
                                printf(" %s   ",(rnumber3[n]));
                                n++;
                              }
                              else
                                printf("     ");
                              }
                              n=0;
                              printf("\n");
                              //start here
                             printf("\t  ");
                              for(i=0;i<18;i++){
                              if(i==0||i==17){

                                printf("-----");
                              }
                              else
                                printf("     ");
                              }
                                printf("\n");
                               printf("\t  ");
                               for(i=0;i<19;i++){

                              if(i==0||i==1||i==17||i==18)
                               {
                                printf("|    ");
                                 }
                                 else
                                    printf("     ");
                               }
                               printf("\n");
                               printf("\t1 ");

                             for(i=0;i<19;i++){

                              if(i==0||i==1||i==17||i==18)
                                {
                             if(i==0){

                             printf("| %s  ",(element0[k]));

                             k++;
                             }

                             else if(i==17){

                              printf("| %s ",(element0[k]));

                              k++;
                             }
                              else
                                 printf("|    ");

                                 }
                                 else
                                    printf("     ");
                               }
                               k=0;

                               printf("\n");
                               printf("\t  ");




                                for(i=0;i<19;i++){

                              if(i==0||i==17||i==18)

                                printf("|    ");

                                else if(i==1)
                                {
                                    printf("|%s ",(rnumber2[n]));
                                    n++;
                                }

                                  else if(i==16)
                                {
                                    printf("%s",(rnumber2[n]));
                                    n++;
                                }

                                    else if(i==14)
                                {
                                    printf(" %s  ",(rnumber2[n]));
                                    n++;
                                }
                                else if(i==12||i==13||i==15){
                                          printf("%s  ",(rnumber2[n]));
                                          n++;}

                                  else

                                    printf("     ");

                               }
                               n=0;

                                printf("\n");
     system("COLOR 2");
                         {

                         }       printf("\t  ");

                              for(i=0;i<18;i++){

                              if(i==0||i==1||i==12||i==13||i==14||i==15||i==16||i==17){

                                printf("-----");
                              }
                              else
                                printf("     ");
                              }
                                printf("\n");

                                 printf("\t  ");

                               for(i=0;i<19;i++){

                              if(i==0||i==1||i==2||i==12||i==13||i==14||i==15||i==16||i==17||i==18)
                               {
                                printf("|    ");
                                 }
                                 else
                                    printf("     ");
                               }
                               printf("\n");

                                printf("\t2 ");

                                  for(i=0;i<19;i++){

                              if(i==0||i==1||i==2||i==12||i==13||i==14||i==15||i==16||i==17||i==18)
                                {

                             if(i==12||i==13||i==14||i==15||i==16){

                             printf("| %s  ",(element1[k]));
                             k++;
                             }

                             else if(i==0||i==1){

                              printf("| %s ",(element1[k]));

                              k++;
                             }
                             else if(i==17){

                              printf("| %s ",(element1[k]));

                              k++;
                             }

                             else
                                printf("|    ");
                              }
                                 else
                                    printf("     ");
                               }
                               k=0;

                               printf("\n");

                                printf("\t  ");

                             for(i=0;i<19;i++){

                              if(i==0||i==1||i==2||i==12||i==13||i==14||i==15||i==16||i==17||i==18)
                               {
                                printf("|    ");
                                 }
                                 else
                                    printf("     ");
                                     }
                                printf("\n");

                                 printf("\t  ");





     for(i=0;i<18;i++){

  if(i==0||i==1||i==12||i==13||i==14||i==15||i==16||i==17){

    printf("-----");
  }
  else
    printf("     ");
  }
    printf("\n");

     printf("\t  ");


   for(i=0;i<19;i++){

  if(i==0||i==1||i==2||i==12||i==13||i==14||i==15||i==16||i==17||i==18)
   {
    printf("|    ");
     }
     else
        printf("     ");
   }
    printf("\n");

     printf("\t3 ");


  for(i=0;i<19;i++){

  if(i==0||i==1||i==2||i==12||i==13||i==14||i==15||i==16||i==17||i==18)
   {
 if(i==12||i==13||i==16||i==17||i==18){

 printf("| %s ",(element2[k]));
 k++;
 }

  else if(i==0||i==1 ){

  printf("| %s ",(element2[k]));
  k++;
  }
  else if(i==14||i==15)
  {
    printf("| %s  ",(element2[k]));
    k++;
  }
  else printf("|    ");

  }
  else
  printf("     ");
  }
  printf("\n");

   printf("\t  ");

  k=0;



     for(i=0;i<19;i++){

   if(i==0||i==1||i==2||i==12||i==13||i==14||i==15||i==16||i==17||i==18)

   {
       if(i==2){
    printf("|%s ",(rnumber[n]));
    n++;
       }
       else
            printf("|    ");
     }
     else{
       printf("%s  ",(rnumber[n]));
       n++;
       }
   }
         printf("\n");

          printf("\t  ");




                                    for(i=0;i<18;i++)

                                    printf("-----");

                                    printf("\n");

                                     printf("\t  ");

                                    for(j=0;j<19;j++)

                                    printf("|    ");

                                    printf("\n");

                                     printf("\t4 ");

                                       for(j=0;j<19;j++)
                                      {
                                          if(j==0||j==4)
                                          {
                                              printf("| %s  ",(element3[j]));
                                          }
                                          else
                                    printf("| %s ",(element3[j]));
                                      }

                                       printf("\n");

                                        printf("\t  ");


                                      for(j=0;j<19;j++)

                                     printf("|    ");

                                        printf("\n");

                                         printf("\t  ");

                                    for(j=0;j<18;j++)

                                     printf("-----");


                                    printf("\n");

                                     printf("\t  ");

                                    for(j=0;j<19;j++)

                                    printf("|    ");

                                    printf("\n");

                                     printf("\t5 ");

                                    for(j=0;j<19;j++)
                                    {
                                    if(j==2||j==16)
                                    {
                                    printf("| %s  ",(element4[j]));
                                    }
                                    else
                                    printf("| %s ",(element4[j]));
                                      }

                                       printf("\n");

                                        printf("\t  ");

                                      for(j=0;j<19;j++)

                                     printf("|    ");

                                        printf("\n");

                                         printf("\t  ");

                                    for(j=0;j<18;j++)

                                     printf("-----");


                                         printf("\n");

                                          printf("\t  ");

                                    for(j=0;j<19;j++)

                                    printf("|    ");

                                    printf("\n");

                                     printf("\t6 ");

                                      for(j=0;j<19;j++)
                                      {
                                          if(j==5)
                                          {
                                              printf("| %s  ",(element5[j]));
                                          }
                                          else if(j==2)
                                           printf("| %s",(element5[j]));
                                          else
                                    printf("| %s ",(element5[j]));
                                      }
                                       printf("\n");

                                        printf("\t  ");

                                      for(j=0;j<19;j++)

                                     printf("|    ");

                                        printf("\n");

                                         printf("\t  ");

                                    for(j=0;j<18;j++)

                                     printf("-----");

                                         printf("\n");
                                          printf("\t  ");

                                    for(j=0;j<19;j++)

                                    printf("|    ");

                                    printf("\n");

                                     printf("\t7 ");

                                      for(j=0;j<19;j++){

                                    if(j==11||j==2||j==12||j==13||j==14||j==15||j==16||j==17||j==18||j==19){

                                     printf("| %s",(element6[j]));
                                     }
                                     else

                                      printf("| %s ",(element6[j]));

                                     }
                                       printf("\n");

                                        printf("\t  ");

                                      for(j=0;j<19;j++)

                                     printf("|    ");

                                        printf("\n");

                                         printf("\t  ");

                                    for(j=0;j<18;j++)

                                     printf("-----");


                                         printf("\n\n\n");

      printf("\t\t\t    ");
    for(j=0;j<14;j++)
    printf("-----");
    printf("\n");
    printf(" \t\t\t    ");
    for(j=0;j<15;j++)
    printf("|    ");
    printf("\n");
 printf("Lanthanide Series:        * ");
    for(j=0;j<15;j++){
    printf("| %s ",(element7[j]));
    }
    printf("\n");
     printf("\t\t\t    ");
    for(j=0;j<14;j++)
    printf("-----");
    printf("\n");
    printf("\t\t\t    ");
    for(j=0;j<15;j++)
     printf("|    ");
      printf("\n");
     printf("\t\t\t    ");
    for(j=0;j<15;j++){
    if(j==3){
    printf("| %s  ",(element8[j]));
    }
    else
    printf("| %s ",(element8[j]));
    }
     printf("\n");
     printf("Actinide  Series:         # ");
    for(j=0;j<15;j++)
    printf("|    ");
    printf("\n");
 printf("\t\t\t    ");
    for(j=0;j<14;j++)
    printf("-----");
    printf("\n");
    printf("\t\t\t\t\t\t1.BACK TO MENU\n");
    printf("\t\t\t\t\t\t2.EXIT\n");
    scanf("%d",&z);
    system("CLS");
    if(z==1)
        menu();
    else if (z==2)
        return 0;
    else
            printf("Wrong input\n");
}
nature()

{

    printf("Enter Your Element:\n");
int i,k=0,n=1;
char m[30];
    char element18[30][30]={"He","Ne","Ar","Kr","Xe","Rn","Helium","Neon","Argon","Krypton","Xenon","Radon"};
    char element17[30][30]={"F","Cl","Br","I","At"};
    char element1[30][30]={"H","Li","Na","k","Rb","Cs","Fr"};
    char element2[30][30]={"Be","Mg","Ca","Sr","Ba","Ra"};
    char element3[30][30]={"Sc","Y","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr"};
    char element4[30][30]={"Ti","Zr","Hf","Rf"};
    char element5[30][30]={"V","Nb","Ta","Db"};
    char element6[30][30]={"Cr","Mo","W","Sg"};
    char element7[30][30]={"Mn","Tc","Re","Bh"};
    char element8[30][30]={"Fe","Ru","Os","Hs"};
    char element9[30][30]={"Co","Rh","Ir","Mt"};
    char element10[30][30]={"Ni","Pd","Pt","Ds"};
    char element11[30][30]={"Cu","Ag","Au","Rg"};
    char element12[30][30]={"Zn","Cd","Hg","Cn"};
    char element13[30][30]={"B","Al","Ga","In","TI","Uut"};
    char element14[30][30]={"C","Si","Ge","Sn","Pb","Fl"};
    char element15[30][30]={"N","P","As","Sb","Bi","Uup"};
    char element16[30][30]={"O","S","Se","Te","Po","Ly"};
scanf("%s",m);
 //system("CLS");

for(i=0;i<12;i++){

 if(strcmp(m,(element18[i]))==0)
 {

     k=18;

     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: NOBEL GASS\n",k,n);

 }
  n++;

}
n=1;

for(i=0;i<7;i++){
 if(strcmp(m,(element1[i]))==0)
 {

     k=1;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Alkali metal\n",k,n);


 }
 n++;
}

n=2;
for(i=0;i<7;i++){
 if(strcmp(m,(element17[i]))==0)

 {
     k=17;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: HALLOZEN\n",k,n);


 }
 n++;
}
n=2;

for(i=0;i<7;i++){
 if(strcmp(m,(element2[i]))==0)
 {

     k=2;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Alkaline Earth Metals\n",k,n);


 }
 n++;
}
n=2;
for(i=0;i<32;i++){
 if(strcmp(m,(element3[i]))==0)
 {

     k=3;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Rare earth metals\n",k,n);


 }
 n++;
}

n=2;
for(i=0;i<4;i++){
 if(strcmp(m,(element4[i]))==0)
 {
     n+=2;
     k=4;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Transition metals\n",k,n);


 }
 n++;
}
n=2;

for(i=0;i<4;i++){
 if(strcmp(m,(element5[i]))==0)
 {
     n+=2;
     k=5;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Transition metals\n",k,n);


 }
 n++;
}
n=2;

for(i=0;i<4;i++){
 if(strcmp(m,(element6[i]))==0)
 {
     n+=2;
     k=6;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Transition metals\n",k,n);


 }
 n++;
}
n=2;

for(i=0;i<4;i++){
 if(strcmp(m,(element7[i]))==0)
 {
     n+=2;
     k=7;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Transition metals\n",k,n);


 }
 n++;
}
n=2;

for(i=0;i<4;i++){
 if(strcmp(m,(element8[i]))==0)
 {
     n+=2;
     k=8;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Transition metals\n",k,n);


 }
 n++;
}
n=2;

for(i=0;i<4;i++){
 if(strcmp(m,(element9[i]))==0)
 {
     n+=2;
     k=9;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Transition metals\n",k,n);


 }
 n++;
}
n=2;

for(i=0;i<4;i++){
 if(strcmp(m,(element10[i]))==0)
 {
     n+=2;
     k=10;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Transition metals\n",k,n);


 }
 n++;
}
n=2;

for(i=0;i<4;i++){
 if(strcmp(m,(element11[i]))==0)
 {
     n+=2;
     k=11;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Coinage metal\n",k,n);


 }
 n++;
}
n=2;

for(i=0;i<4;i++){
 if(strcmp(m,(element12[i]))==0)
 {
     n+=2;
     k=12;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Volatile metal\n",k,n);


 }
 n++;
}
n=0;

for(i=0;i<6;i++){
 if(strcmp(m,(element13[i]))==0)
 {
     n+=2;
     k=13;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Metalloid\n",k,n);


 }
 n++;
}
n=0;

for(i=0;i<6;i++){
 if(strcmp(m,(element14[i]))==0)
 {
     n+=2;
     k=14;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Metal\n",k,n);


 }
 n++;
}
n=0;

for(i=0;i<6;i++){
 if(strcmp(m,(element15[i]))==0)
 {
     n+=2;
     k=15;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: Two nonmetals (one gas, one solid), two metalloids, one metal\n",k,n);


 }
 n++;
}
n=0;

for(i=0;i<7;i++){
 if(strcmp(m,(element16[i]))==0)
 {
     n+=2;
     k=16;
     printf("\nABOUT THE INFORMATION OF %s:\n\n",m);
      printf("COLOUM IS:%d\nROW IS:%d\nNATURE IS: One gas,One Solid,Two metalloidl\n",k,n);


 }
 n++;
}
 printf("\t\t\t\t\t\t1.BACK TO MENU\n");
    printf("\t\t\t\t\t\t2.EXIT\n");
    scanf("%d",&z);
    if(z==1)
        menu();
    else if(z==2)
        return 0;
        else
            printf("Wrong input\n");
}
