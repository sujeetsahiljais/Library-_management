#include<stdio.h> 
#include<conio.h>
struct library
 { char name[100];
  int option,i,j,login, date,month,year,no;
 };
int main()
{ int option,i,j,login, date,month,year,no,qty=0,q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,q7=0,regi;
char name[100];
 struct library a;
 FILE *fp,*r;
 fp=fopen("library.txt","a");
  r=fopen("library.txt","r");
  if(fp==NULL && r==NULL)
   {printf("cannot open file");
   }
  else
 { 

 printf("\n\t*************************************************************************************************\n");
 printf("\n\t\t\t\t\tpatna memorial library bihar\t\t");
 printf("\n\t_________________________________________________________________________________________________\n");
 printf("\n");
 printf("\n\tADD BOOKS-");
 printf("\n\tOPTION       \tBOOKS       ");
 printf("\n\t  1.         \t earl gates\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2000\n\t\t2.\t\tvol2\t\t2006\n\t\t3.\t\tvol3\t\t2010\n");
 printf("\n\t  2.         \t che\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2001\n\t\t2.\t\tvol2\t\t2009\n\t\t3.\t\tvol3\t\t2016\n           ");
 printf("\n\t  3.         \t ncert phy\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t1999\n\t\t2.\t\tvol2\t\t2004\n\t\t3.\t\tvol3\t\t2015\n  ");
 printf("\n\t  4.         \t rs aggrawal\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2003\n\t\t2.\t\tvol2\t\t2006\n\t\t3.\t\tvol3\t\t2017\n  ");
 printf("\n\t  5.         \t bk panday\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t1994\n\t\t2.\t\tvol2\t\t2003\n\t\t3.\t\tvol3\t\t2011\n  ");
 printf("\n\t  6.         \t advance engineering mathematics\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2000\n\t\t2.\t\tvol2\t\t2005\n\t\t3.\t\tvol3\t\t2010\n   ");
 printf("\n\t  7.         \t hc verma\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2000\n\t\t2.\t\tvol2\t\t2006\n\t\t3.\t\tvol3\t\t2010\n ");
 fprintf(fp,"\n\t*************************************************************************************************\n");
 fprintf(fp,"\n\t\t\t\t\tpatna memorial library bihar\t\t");
 fprintf(fp,"\n\t_________________________________________________________________________________________________\n");
 fprintf(fp,"\n");
 fprintf(fp,"\n\tADD BOOKS-");
 fprintf(fp,"\n\tOPTION       \tBOOKS       ");
 fprintf(fp,"\n\t  1.         \t earl gates\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2000\n\t\t2.\t\tvol2\t\t2006\n\t\t3.\t\tvol3\t\t2010\n   ");
 fprintf(fp,"\n\t  2.         \t che\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2001\n\t\t2.\t\tvol2\t\t2009\n\t\t3.\t\tvol3\t\t2016\n           ");
 fprintf(fp,"\n\t  3.         \t ncert phy\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t1999\n\t\t2.\t\tvol2\t\t2004\n\t\t3.\t\tvol3\t\t2015\n  ");
 fprintf(fp,"\n\t  4.         \t rs aggrawal\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2003\n\t\t2.\t\tvol2\t\t2006\n\t\t3.\t\tvol3\t\t2017\n   ");
 fprintf(fp,"\n\t  5.         \t bk panday\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t1994\n\t\t2.\t\tvol2\t\t2003\n\t\t3.\t\tvol3\t\t2011\n  ");
 fprintf(fp,"\n\t  6.         \t advance engineering mathematics\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2000\n\t\t2.\t\tvol2\t\t2005\n\t\t3.\t\tvol3\t\t2010\n     ");
 fprintf(fp,"\n\t  7.         \t hc verma\n\t\tno.\t\tvolume\t\tedition\n\t\t1.\t\tvol1\t\t2000\n\t\t2.\t\tvol2\t\t2006\n\t\t3.\t\tvol3\t\t2010\n             ");
 
 printf("\n\n\tenter date- ");
 scanf("%d/%d/%d",&date,&month,&year);
 fprintf(fp,"enter date--%d/%d/%d",date,month,year);
 {
 int id ,password;
 printf("\n\n\tenter user id-");
 
 scanf("%d",&id);
 printf("\n\n\tenter password-");
 
 scanf("%d",&password);
 if(id==11712230&&password==112233)
 {printf("\n\n***/////welcome to the patna memorial library bihar/////***");
 fprintf(fp,"\n\n***/////welcome to the patna memorial library bihar/////***");
 printf("\n");
 }
 else
 { printf("\n\n\twrong password");
 printf("\n\n\tplease enter right pasword");
 return 0;
 }
}
 
 do
 { printf("\nenter the OPTION-\n"); 
   scanf("%d",&option);
   fprintf(fp,"\nenter the OPTION=%d\n",option);
   switch(option)
   { case 1:
   	printf("you choose earl gates");
   	printf("\nenter the vol you want-\n");
   	scanf("%d",&no);
   	fprintf(fp,"\nenter the vol you want=%d\n",no);
   	for(no=0;no<=2;no++)
   	{
	 if(no==1)
   	 { printf("you have choosen vol1");
   	    break;
	 }
	 else if(no==2)
	 {printf("you have choosen vol2");
	 break;}
	 else if(no==3)
	 {printf("you have choosen vol3");
	 break;}
	 else
	 { printf("choose the correct option");  
        break;
	 }
     }
	 printf("\nhow many books he/she taken\n",q1);
	 scanf("%d",&q1);
	 fprintf(fp,"\nhow many books he/she taken=%d\n",q1);
   	fprintf(fp,"/nyou choose earl gates--\n");
   	
   	break;


	
   	
   	case 2:
   	printf("you choose che");
   	printf("\nenter the vol you want-\n");
   	scanf("%d",&no);
   	fprintf(fp,"\nenter the vol you want=%d\n",no);
   	
   	{ if(no==1)
   	 { printf("you have choosen vol1");
   	 
	 }
	 else if(no==2)
	 printf("you have choosen vol2");
	 else if(no==3)
	 printf("you have choosen vol3");
	 
	 else 
	 printf("choose the correct option");
	}
	printf("\nhow many books he/she taken\n");
	scanf("%d",&q2);
	fprintf(fp,"\nhow many books he/she taken=%d\n",q2);

   	fprintf(fp,"/nyou choose che");
    
   	break;
   	
   	case 3:
   	printf("you choose ncert phy");
   	scanf("%d",&no);
   	printf("\nenter the vol you want=%d\n",no);
   	
   	{ if(no==1)
   	 { printf("you have choosen vol1");
	 }
	 else if(no==2)
	 printf("you have choosen vol2");
	 else if(no==3)
	   printf("you have choosen vol3");
	 else 
	 printf("choose the correct option");
	}
	printf("\nhow many books he/she taken\n");
	scanf("%d",&q3);
	fprintf(fp,"\nhow many books he/she taken\n=%d",q3);
   	fprintf(fp,"/nyou choose ncert phy");
   	
   	break;
   	
   	case 4:
   	printf("you choose rs aggrawal");
   	printf("\nenter the vol you want-\n");
   	scanf("%d",&no);
   	fprintf(fp,"\nenter the vol you want=%d\n",no);
   	
   	{ if(no==1)
   	 { printf("you have choosen vol1");
   	 
	 }
	 else if(no==2)
	 printf("you have choosen vol2");
	 
	 else if(no==3)
	 printf("you have choosen vol3");
	 
	 else 
	 printf("choose the correct option");
	}
	printf("\nhow many books he/she taken\n");
	scanf("%d",&q4);
	fprintf(fp,"\nhow many books he/she taken\n=%d",q4);
	
   	fprintf(fp,"\nyou choose rs aggrawal");
   	
   	break;
   	
   	case 5:
   	printf("you choose bk panday");
   	printf("\nenter the vol you want-\n");
   	scanf("%d",&no);
   	fprintf(fp,"\nenter the vol you want=%d\n",no);
   	
   	{ if(no==1)
   	 { printf("you have choosen vol1");
   	 
	 }
	 else if(no==2)
	 printf("you have choosen vol2");
	 
	 else if(no==3)
	 printf("you have choosen vol3");
	 else 
	 printf("choose the correct option");
	 fprintf(fp,"choose the correct option");
    }
    printf("\nhow many books he/she taken\n");
    scanf("%d",&q5);
    fprintf(fp,"\nhow many books he/she taken\n=%d",q5);
	
   	fprintf(fp,"\nyou choose bk panday");
   	
   	break;
   	
   	case 6:
   	printf("you choose advance engineering mathematics");
   	scanf("%d",&no);
	printf("\nenter the vol you want\n");
   	fprintf(fp,"\nenter the vol you want=%d\n",no);
   	
   	{ if(no==1)
   	 { printf("you have choosen vol1");
   	  
	 }
	 else if(no==2)
	 printf("you have choosen vol2");
	 
	 else if(no==3)
	 printf("you have choosen vol3");
	
	 else 
	 printf("choose the correct option");
	 
	}
	printf("\nhow many books he/she taken\n");
	scanf("%d",&q6);
	fprintf(fp,"\nhow many books he/she taken=%d\n",q6);
   	fprintf(fp,"\nyou choose advance engineering mathematics");
   	
	break; 
   	case 7:
   	printf("you choose hc verma");
   	printf("\nenter the vol you want-\n");
   	scanf("%d",&no);
   	fprintf(fp,"\nenter the vol you want=%d\n",no);
   	
   	{ if(no==1)
   	 { printf("you have choosen vol1");
   	 
	 }
	 else if(no==2)
	 printf("you have choosen vol2");
	 
	 else if(no==3)
	 printf("you have choosen vol3");
	 
	 else 
	 printf("choose the correct option");
	}
	printf("\nhow many books he/she taken\n");
	scanf("%d",&q7);
	fprintf(fp,"\nhow many books he/she taken=%d\n",q7);
   	fprintf(fp,"\nyou choose hc verma");
   	break;
   	
   	default:
   printf ("\n please choose correct option\n");
   fprintf (fp,"\n please choose correct option\n");
   printf(" Oops!!! we don't have this book");
   fprintf(fp," Oops!!! we don't have this book");
   }
   printf("\npress 9 to choose  another item or 0 to exit");
   fprintf(fp,"\npress 9 to choose  another item or 0 to exit");
   scanf("%d",&i);
   if(i==0)
   {break;
   }
   
   
 }while(i=9);
  
  printf("\n\n\tenter name to whom alloted this book-\n\n");
  scanf("%s",&name);
  
  printf("\n\nregi no is\n\n");
  scanf("%d",&regi);
  fprintf(fp,"\n\n\tenter name--%s\n\n",name);
  fprintf(fp,"\n\nregi no is--%d\n\n",regi);
  

  printf("\n\t name of books      \tno of books   ");
  printf("\n\t  1. \t earl gates      %d \n",q1);
 printf("\n\t  2.  \t che             %d    \n  ",q2);
 printf("\n\t  3.  \t ncert phy       %d   \n ",q3);
 printf("\n\t  4.  \t rs aggrawal     %d     \n  ",q4);
 printf("\n\t  5.  \t bk panday       %d   \n   ",q5);
 printf("\n\t  6.  \t advance engineering mathematics   %d  \n  ",q6);
 printf("\n\t  7.  \t hc verma        %d   \n       ",q7);
 printf("\n\t   qty=                   %d\n",qty=q1+q2+q3+q4+q5+q6+q7);
 
 fprintf(fp,"\n\t name of books      \tno of books   ");
  fprintf(fp,"\n\t  1. \t earl gates      %d \n",q1);
 fprintf(fp,"\n\t  2.  \t che             %d    \n  ",q2);
 fprintf(fp,"\n\t  3.  \t ncert phy       %d   \n ",q3);
 fprintf(fp,"\n\t  4.  \t rs aggrawal     %d     \n  ",q4);
 fprintf(fp,"\n\t  5.  \t bk panday       %d   \n   ",q5);
 fprintf(fp,"\n\t  6.  \t advance engineering mathematics   %d  \n  ",q6);
 fprintf(fp,"\n\t  7.  \t hc verma        %d   \n       ",q7);
 fprintf(fp,"\n\t   qty=                   %d\n",qty=q1+q2+q3+q4+q5+q6+q7);
 
 { printf("\n\n\t login for next student");
  fprintf(fp,"\n\n\t login for next student");
   printf("enter 1 for login or 2 for log out");
   fprintf(fp,"enter 1 for login or 2 for log out");
   scanf("%d",&login);
  switch(login)
  {case 1:
  	{return main();
  	break;
    }
    case 2:
    {printf("you logged out");
    break;
    }
  }
} 
 
 getch();
}
}


