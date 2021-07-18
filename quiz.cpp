//quiz complete
#include<stdio.h>
#include<fstream.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
int logscreen();
void stats();
void oplay();
void wo_play();
void add();
void del();
void modify();
void date();
void setting();
void menu();
void mainpage();
void delay(unsigned int mseconds)
{
 clock_t goal = mseconds + clock();
 while (goal > clock());
}
class status
{
public:
char name[30];
 char type[20];
 int score,a;
};
class QUIZ
{int qno;
char question[50];
 char option[4][20];
 char correct[20];
 int cor;
public:
void entry()
 {
 cout<<"\n enter the question number\n";
 cin>>qno ;
 cout<<"\n enter the question\n";
 gets(question);
 for(int i=0;i<4;i++)
 {
cout<<"\n enter the "<<i+1<<" th option\n";
gets(option[i]);
 }
 cout<<"\n enter the correct option number\n";
 cin>>cor;
 cor--;
 strcpy(correct,option[cor]);
 cor++;
 }
 void display1()
 {
 cout<<endl<<"Qno "<<qno<<"."<<question<<endl;
 cout<<"\n\t options\n";
 for(int i=0;i<4;i++)
 {
cout<<i+1<<"."<<option[i]<<endl;
 }
 } void display2()
 {
cout<<endl<<"Qno "<<qno<<"Q."<<question<<endl;
 }
 int c_o()
 {
return (cor);
 }
char* answer()
 {
return correct;
 }
 int retqno()
 {
return qno;
 }
};
void main()
{
mainpage();
 getche();
}
void date()
{
time_t T= time(NULL);
 struct tm tm = *localtime(&T);
 printf("\n\n\n");
printf("\t\t\t\t\t Date:%02d/%02d/%04d\n",tm.tm_mday, 
tm.tm_mon+1, tm.tm_year+1900);
}
void mainpage()
{
int process=0; system("cls");
 date();
printf("\n");
 printf("\t\t\t\t ----------------------------\n");
 printf("\t\t\t\t | Welcome to Quiz Game |\n");
 printf("\t\t\t\t ----------------------------\n");
 printf("\n\n\n");
 printf("\n\t\t\t\t-> Sanjay Jaiswal");
 printf("\n\n");
 printf("\t\t\t\t");
 printf("Mini Project ");
 printf(":");
 printf(" Quiz game");
 printf("\n\n");
 printf("\t\t\t\t Press Enter to continue......");
 printf("\n\n");
 getchar();
 printf("\t\t\t\tLoading");
 for(process=0;process<25;process++)
 {
 delay(150);
 printf(".");
 }
 menu();}
void menu()
{
int input;
 system("cls");
 printf("\n\n\n");
 printf("\t\t\t\t\t");
 printf("\n");
 printf("\t\t\t\t# # ##### ## # # #\n");
 printf("\t\t\t\t# # # # # # # # # #\n");
 printf("\t\t\t\t# # # ##### # # # # #\n");
 printf("\t\t\t\t# # # # # # # #\n");
 printf("\t\t\t\t# # ##### # ## #####\n");
 printf("\n\n");
 printf("\t\t\t\t");
 printf(" 1. Play\n\n");
 printf("\t\t\t\t");
 printf(" 2. Stats\n\n");
 printf("\t\t\t\t");
 printf(" 3. Setting\n\n");
 printf("\t\t\t\t");
 printf(" 4. Exit\n\n");
 printf("\t\t\t\t");
 printf("Choose options:[1/2/3/4]:");
 fflush(stdin);
 scanf("%d",&input);
 switch(input)
 {
 case 1:
 {
 system("cls");
 char ch;cout<<"\n enter ur choice \n 1. with option\n 
2.without option \n";
 ch=getche();
 if(ch=='1')
 {
 oplay();
 }
 if(ch=='2')
 {
 wo_play();
 }
 getchar();
 }
 break;
 case 2:
 {
 system("cls");
 stats();
 }
 break;
 case 3:
 {
 system("cls");
 logscreen();
 }
break;
 case 4:
 {
system("cls"); 
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n
\n");
 fflush(stdin);
 printf("\t\t\t\t"); printf("\n\n\n\n");
 exit(0);
 }
 break;
 default:
 {
 fflush(stdin);
 printf("\n\n\n");
 printf("\t\t\t\t");
 printf(" Invalid input!");
 printf("\n\n");
 printf("\t\t\t\t");
 printf("Press Enter to choose again...");
 getchar();
 menu();
 }
 }
}
int logscreen()
{
char username[30];
 char password[30];
 int try1 = 0;
 int true1 = 1;
 do
 {
 system("cls");
 printf("\n\n\n\n\n\n\n\n\n\n");
 printf("\t\t\t\t\t");
 printf("Username: ");
 scanf("%s",username);
 printf("\t\t\t\t\t");
 printf("\n"); printf("\t\t\t\t\t");
 printf("Password: ");
 scanf("%s",password);
 if(strcmp(username,"admin")==0 && s
trcmp(password,"pass")==0)
 {
 printf("\n\n");
 printf("\t\t\t\t");
 printf("You are accessed to the system!\n\n");
 printf("\t\t\t\t Press Enter to continue...");
 fflush(stdin);
 getchar();
 setting();
 system("cls");
 getchar();
 true1 =0;
 }
 else
 {
 system("cls");
 try1 = try1+1;
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n
\n");
 printf("\t\t\t\t\t");
 printf("No. of attempts remain: %d",3-try1);
 fflush(stdin);
 getchar();
 if(try1>=3)
 {
 printf("\t\t\t\t\t\t");
 printf("\n");
 printf("\t\t\t\t");
 printf(" No permission to enter the system!"); getchar();
 }
 } 
}
while(true1==1);
}
void setting()
{
int input;
 system("cls");
 printf("\n\n\n");
 printf("\t\t\t\t\t");
 printf("\n");
 printf("\t\t\t@@@@@ @@@@@ @@@@@ @@@@@ 
@@@@@ @@ @ @@@@@@\n");
 printf("\t\t\t@ @ @ @ @ @ @ @ @\n");
printf("\t\t\t@@@@@ @@@@@ @ @ @ @ @ @ @ 
@@@@\n");
 printf("\t\t\t @ @ @ @ @ @ @ @ @ @@ @\n");
printf("\t\t\t@@@@@ @@@@@ @ @ @@@@@ @ 
@@ @@@@ @\n");
 printf("\n\n");
printf("\t\t\t\t");
 printf(" 1. Adding questions\n\n");
 printf("\t\t\t\t");
 printf(" 2. Modify Questions\n\n");
 printf("\t\t\t\t");
 printf(" 3. Delete Questions\n\n");
 printf("\t\t\t\t");
 printf(" 4. Back To Main Menu\n\n");
 printf("\t\t\t\t");
 printf("Choose options:[1/2/3/4]:");
 fflush(stdin); scanf("%d",&input);
 switch(input)
{
 case 1:
 {
 system("cls");
 add();
 getchar();
 }
 Break;
 case 2:
 {
 system("cls");
 modify();
 }
 break;
 case 3:
 {
 system("cls");
 del();
 }
break;
 case 4:
 {
 system("cls");
 menu();
 }
 break;
 default:
 {
 fflush(stdin);
 printf("\n\n\n");
 printf("\t\t\t\t"); printf(" Invalid input!");
 printf("\n\n");
 printf("\t\t\t\t");
 printf("Press Enter to choose again...");
 getchar();
 setting();
 }
 }
}
void add()
{
fstream file;
 char ch;
 ch='y';
 QUIZ q;
 file.open("NEWQUIZ.dat",ios::app|ios::binary);
 do
 {
if(ch=='y'||ch=='Y')
 {
q.entry();
file.write((char*)&q,sizeof(q));
 }
 else
break;
 cout<<"\n do u want to enter more\n";
ch=getche();
 }while(ch=='y'||ch=='Y');
 clrscr();
 file.close();
 printf("\t\t\t\t Press Enter to continue......");
 printf("\n\n");
 getchar(); menu();
}
void modify()
{
fstream file;
 QUIZ q;
 int n;
 file.open("NEWQUIZ.dat",ios::in|ios::out|ios::binary);
cout<<"\n enter the question number which u want to 
modify\n";
 cin>>n;
 int c=0;
 while(file)
 {
file.read((char*)&q,sizeof(q));
 if(n==q.retqno())
 {
q.entry();
file.seekp(file.tellg()-sizeof(q),ios::beg);
file.write((char*)&q,sizeof(q));
c++;
clrscr();
break;
 }
 }
 if(c==0)
cout<<"\n question no did not found\n";
 file.close();
 printf("\t\t\t\t Press Enter to continue......");
 printf("\n\n");
 getchar();
 menu();
}void del()
{
fstream fin,fout;
 fin.open("NEWQUIZ.dat",ios::in|ios::binary);
 fout.open("temp.dat",ios::out|ios::binary);
 QUIZ q;
 int qno,f=0;
 cout<<"enter the question no to be deleted\n";
 cin>>qno;
 while(fin)
 {
 fin.read((char*)&q,sizeof(q));
 if(q.retqno()!=qno)
 {
 fout.write((char*)&q,sizeof(q));
 }
 else
 {
 f++;
 }
 }
 if(f==0)
 cout<<"\nquestion no doesnot exist\n";
 else
 cout<<"record deleted";
 fin.close();
 fout.close();
 remove("NEWQUIZ.dat");
 rename("temp.dat","NEWQUIZ.dat");
 printf("\t\t\t\t Press Enter to continue......");
 printf("\n\n");
 getchar();
 menu();}
void oplay()
{
fstream file,fout;
 QUIZ q;
 status s;
 int score=0;
 int ans;
 int c=0;
 char name[30];
 cout<<"\nEnter Your name\n";
 gets(name);
 fout.open("status.dat",ios::app|ios::binary);
 file.open("NEWQUIZ.dat",ios::in|ios::app|ios::binary);
 strcpy(s.name,name);
 strcpy(s.type,"Option Play");
 while(file)
 {
 file.read((char*)&q,sizeof(q));
 q.display1();
 cout<<"\n choose the correct option \n";
 cin>>ans;
 c++;
 if((ans++)==q.c_o())
 {
cout<<"\n \t ------correct answer------";
score+=10;
cout<<"\n score"<<score;
 }
 else
 {
cout<<"\nscore="<<score;cout<<"\n -------wrong answer-----";
cout<<"\n correct answer is"<<q.answer();
 }
 }
 clrscr();
 cout<<"\nscore="<<score<<"out of"<<(c*10);
 s.score=score;
 s.a=c;
 fout.write((char*)&s,sizeof(s));
 file.close();
 fout.close();
printf("\t\t\t\t Press Enter to continue......");
 printf("\n\n");
 getchar();
 menu();
}
void wo_play()
{
fstream file,fout;
 QUIZ q;
 status s;
 int score=0;
 char ans[25];
 int c=0;
 fout.open("status.dat",ios::app|ios::binary);
 file.open("NEWQUIZ.dat",ios::in|ios::app|ios::binary);
 char name[30];
 cout<<"\n Enter your name\n";
 gets(name);
 strcpy(s.name,name);
 strcpy(s.type,"Direct Play");
 while(file)
 { file.read((char*)&q,sizeof(q));
 q.display2();
 cout<<"\n write the answer \n";
 gets(ans);
 c++;
 if(strcmpi(ans,q.answer())==0)
 {
cout<<"\n \t ------correct answer------";
score+=10;
cout<<"\n score"<<score;
 }
 else
 {
cout<<"\nscore="<<score;
cout<<"\n -------wrong answer-----";
cout<<"\n correct answer is"<<q.answer();
 }
 }
 clrscr();
 cout<<"\nscore="<<score<<"out of"<<(c*10);
 s.score=score;
 s.a=c;
 fout.write((char*)&s,sizeof(s));
 file.close();
 fout.close();
 printf("\t\t\t\t Press Enter to continue......");
 printf("\n\n");
 getchar();
 menu();
}
void stats()
{
status s; fstream file;
 file.open("status.dat",ios::in|ios::binary);
 int a=1;
 while(file)
 {
file.read((char*)&s,sizeof(s));
 cout<<"Sno: \t"<<a<<endl;
 cout<<"Name: \t"<<s.name<<endl;
 cout<<"Type: \t"<<s.type<<endl;
 cout<<"Score: \t"<<s.score<<endl;
 cout<<"Maximum score:\t"<<s.a*10<<endl;
 cout<<"\n\n";
 a++;
 }
 printf("\n\n");
 printf("\t\t\t\t");
 printf("Press Enter to go to main menu...");
 getchar();
 menu();
}
