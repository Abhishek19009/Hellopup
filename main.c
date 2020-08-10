 #include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
//function declaration have to be included here
void gotoxy();
void initial();
void add();
void tutorial();
void deletes();
void search();
void searchintro();
void exits();
void mandatory();
void mainmenu();
void total();
void special();
void fact();


//function declaration have to end here
int n; // global variable
// structure construction starts from here
struct info
{
    char name[27];
    char village[28];
    char mob[20];
    char aadhar[20];
    int cattle;
    int buffalo;
    int sheep;
    int goat;
    int poultry;
    int dog;
    int cat;
    char animal[50];
    char disease[50];
    char status[50]
};

struct mandatory
{
    char name[50];
    char incharge[50];
    char staff[100];
};


//structure construction ends here
int record;
//main function starts from here
int main(void)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED+FOREGROUND_BLUE+FOREGROUND_RED+FOREGROUND_RED+FOREGROUND_GREEN);
    srand(time(0));
    system("cls");
    int c =0;
    char ch;
    ch = getch();
    if(ch=='e'||ch=='E')
    {
        gotoxy(3,3);
    printf("Skipping the tutorial\n");
    gotoxy(24,3);
    while(c<4)
    {
    c++;
    Sleep(170);
    printf(".");

    }
    printf("\n\nPress enter to continue to introduction or e/E to skip intro");
    }
    else
   {
    tutorial();
   }

   ch = getch();
    if(ch=='e'||ch=='E')
    {
        system("cls");
        gotoxy(3,3);
    printf("Skipping the introduction\n");
    gotoxy(28,3);
    c=0;
    while(c<4)
    {
    c++;
    Sleep(170);
    printf(".");
    // Introduction is skipped
    }
    mainmenu();
    }
    else
   {
   system("cls");
   mandatory();
   }

}
// main function ends here
void gotoxy(int x, int y)
{
COORD CRD ;
CRD.X = x;
CRD.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}
void initial()
{
    //Introduction started

        system("cls");
        int c = 0 ,a,b;
        while(c<6000)
        {
        c++;
        a = rand()%150;
        b = rand()%40;
        if((a<52&&b<14) || (a<52&&b>19) || (a>100&&b<14) || (a>100&&b>19) )
        {
        gotoxy(a,b);
        printf("#");
        Sleep(0);
        gotoxy(a,b);
        printf("$");
        }
        else
        continue;
        }
        PlaySoundA(".//Sounds//CHIMES.wav",NULL,SND_FILENAME);
        PlaySoundA(".//Sounds//intro.wav",NULL,SND_FILENAME);
        gotoxy(58,15);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1");
        gotoxy(52,17);
        printf("\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                               \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1");
        // Hospital word
        gotoxy(72,15);
        printf("H");
        Sleep(150);
        gotoxy(74,15);
        printf("O");
        Sleep(150);
        gotoxy(76,15);
        printf("S");
        Sleep(150);
        gotoxy(78,15);
        printf("P");
        Sleep(150);
        gotoxy(80,15);
        printf("I");
        Sleep(150);
        gotoxy(82,15);
        printf("T");
        Sleep(150);
        gotoxy(84,15);
        printf("A");
        Sleep(150);
        gotoxy(86,15);
        printf("L");
        Sleep(150);
        // Management word
          gotoxy(87,17);
        printf("M");
        Sleep(150);
        gotoxy(89,17);
        printf("A");
        Sleep(150);
        gotoxy(91,17);
        printf("N");
        Sleep(150);
        gotoxy(93,17);
        printf("A");
        Sleep(150);
        gotoxy(95,17);
        printf("G");
        Sleep(150);
        gotoxy(97,17);
        printf("E");
        Sleep(150);
        gotoxy(99,17);
        printf("M");
        Sleep(150);
        gotoxy(101,17);
        printf("E");
        Sleep(150);
        gotoxy(103,17);
        printf("N");
        Sleep(150);
        gotoxy(105,17);
        printf("T");
        gotoxy(57,30);

        printf("((( F");
        Sleep(50);
        printf("o");
        Sleep(50);
        printf("r");
        Sleep(50);
        printf("   V");
        Sleep(50);
        printf("e");
        Sleep(50);
        printf("t");
        Sleep(50);
        printf("e");
        Sleep(50);
        printf("r");
        Sleep(50);
        printf("i");
        Sleep(50);
        printf("n");
        Sleep(50);
        printf("a");
        Sleep(50);
        printf("r");
        Sleep(50);
        printf("y");
        Sleep(50);
        printf("   H");
        Sleep(50);
        printf("o");
        Sleep(50);
        printf("s");
        Sleep(50);
        printf("p");
        Sleep(50);
        printf("i");
        Sleep(50);
        printf("t");
        Sleep(50);
        printf("a");
        Sleep(50);
        printf("l");
        Sleep(50);
        printf("s");
        printf(" )))");


        getch();
        mainmenu();
 // Initial introduction closed
}
void add()
{
    system("cls");
    char ch9;
    gotoxy(45,18);
    printf("<--------- ARE YOU SURE YOU WANT TO ENTER NEW RECORD  [Y / N] ? ---------------->");
    ch9 = getch();
    if(ch9 == 'N'||ch9 == 'n')
    {
        mainmenu();
    }
    else
    {
    system("cls");
    FILE *fp, *fs;
    //to construct S.no
    fs = fopen("./data/n.txt", "rb+");
    fseek(fs, 0, SEEK_SET);
    fscanf(fs, "%d", &n);
    n++;
    rewind(fs);
    fprintf(fs, "%d", n);
    fclose(fs);
    char ch1[40], ch;
    fp = fopen("./data/name.txt","wb+");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "./data/P%d.txt", n);
    rewind(fp);
    fscanf(fp, "%s",ch1);
    fclose(fp);
    fs = fopen(ch1,"w+");
    fp = fopen("./data/total.txt", "a+");
    struct info S1;
    gotoxy(54,5);
    printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   ADD NEW OWNER    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
    gotoxy(15,8);
    printf("\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE");
    printf("\n\n\n\n\n");
    printf("Enter the details of new patient\n\n");
    printf("  \xB0\xB0\xB2     Name:  ");
    fgets(S1.name, sizeof(S1.name), stdin);
    fprintf(fs, "%s", S1.name);
    S1.name[strcspn(S1.name, "\r\n")] = ' ';


    printf("\n\n");
    printf("  \xB0\xB0\xB2     Village:  ");
    fgets(S1.village, sizeof(S1.village), stdin);
    fprintf(fs, "%s", S1.village);
    S1.village[strcspn(S1.village, "\r\n")] = ' ';

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Mobile Number:  ");
    fgets(S1.mob, sizeof(S1.mob), stdin);
    fprintf(fs, "%s", S1.mob);
    S1.mob[strcspn(S1.mob, "\r\n")] = ' ';

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Aadhar Number:  ");
    fgets(S1.aadhar, sizeof(S1.aadhar), stdin);
    fprintf(fs, "%s", S1.aadhar);
    S1.aadhar[strcspn(S1.aadhar, "\r\n")] = ' ';

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Cattle number:  ");
    fscanf(stdin, "%d", &S1.cattle);
    fprintf(fs, "%d\n", S1.cattle);


    printf("\n\n");
    printf("  \xB0\xB0\xB2     Buffalo number:  ");
    fscanf(stdin, "%d", &S1.buffalo);
    fprintf(fs, "%d\n", S1.buffalo);

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Sheep number:  ");
    fscanf(stdin, "%d", &S1.sheep);
    fprintf(fs, "%d\n", S1.sheep);

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Goat number:  ");
    fscanf(stdin, "%d", &S1.goat);
    fprintf(fs, "%d\n", S1.goat);

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Poultry number:  ");
    fscanf(stdin, "%d", &S1.poultry);
    fprintf(fs, "%d\n", S1.poultry);

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Dog number:  ");
    fscanf(stdin, "%d", &S1.dog);
    fprintf(fs, "%d", S1.dog);

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Cat number:  ");
    fscanf(stdin, "%d%*c", &S1.cat);
    fprintf(fs, "\n");
    fprintf(fs, "%d\n", S1.cat);

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Diseased animal:  ");
    fgets(S1.animal, sizeof(S1.animal), stdin);
    fprintf(fs, "%s", S1.animal);
    S1.animal[strcspn(S1.animal, "\r\n")] = ' ';

    printf("\n\n");
    printf("  \xB0\xB0\xB2     Disease Diagnosis:  ");
    fgets(S1.disease, sizeof(S1.disease), stdin);
    fprintf(fs, "%s", S1.disease);
    S1.disease[strcspn(S1.disease, "\r\n")] = ' ';


    printf("\n\n");
    printf("  \xB0\xB0\xB2     Status:  ");
    fgets(S1.status, sizeof(S1.status), stdin);
    fprintf(fs, "%s\n", S1.status);
    S1.status[strcspn(S1.status, "\r\n")] = ' ';

    fprintf(fp, "\n\n%-8d%-28s%-29s%-16s%-16s%-15d%-15d%-15d%-15d%-15d%-15d%-15d%-20s%-30s%s", n,S1.name,S1.village,S1.mob,S1.aadhar,S1.cattle,S1.buffalo,S1.sheep,S1.goat,S1.poultry,S1.dog,S1.cat,S1.animal,S1.disease,S1.status );

    fclose(fs);
    fclose(fp);
    printf("\n\n\n\n");
    printf("   Record saved successfully");
    getch();
    mainmenu();
    }
}

void mandatory()
{
    system("cls");
    FILE *fp;
    int k;
    fp = fopen("./data/hospital.txt", "rb+");
    fseek(fp,0,SEEK_END);
    k = ftell(fp);
    if(k != 0)
    {
    system("cls");
    initial();
    }
    else
    {
    struct mandatory hosp;
    gotoxy(54,6);
    printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   M A N D A T O R Y   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
    printf("\n\n\n\n");
    printf("<--  Enter few details before proceeding:\n\n");
    printf("\n\n\n\n");
    printf("  \x9D\x9D\xB0\xB0 1.  Name of incharge:  ");
    fgets(hosp.name, sizeof(hosp.name), stdin);
    fprintf(fp, "%s", hosp.name);

    printf("\n\n\n\n");
    printf("  \x9D\x9D\xB0\xB0 2.  Hospital name:  ");
    fgets(hosp.incharge, sizeof(hosp.incharge), stdin);
    fprintf(fp, "%s", hosp.incharge);


    printf("\n\n\n\n");
    printf("  \x9D\x9D\xB0\xB0 3.  Other staff(not mandatory):  ");
    fgets(hosp.staff, sizeof(hosp.staff), stdin);
    fprintf(fp, "%s", hosp.staff);
    fclose(fp);
    printf("\n\n\n\n\n");

    printf("           Record saved successfully :)\n\n\n\n");
    printf("           Press enter to move to next page");
    getch();
    system("cls");
    initial();
    }
}

void total()
{
    system("cls");
    FILE *fp;
    fp = fopen("./data/total.txt","rb");
    char c;
    while(!feof(fp))
    {
        c = fgetc(fp);
        printf("%c", c);
    }
    fclose(fp);
    getch();
    system("cls");
    gotoxy(50,15);
    printf("<----------    DO YOU WANT PRINTED VERSION OF PATIENT RECORD ?  [Y / N]   ---------->");
    c = getch();
    if(c=='Y'||c=='y')
    {
        ShellExecute(GetDesktopWindow(), "open", "data\\total.txt", NULL, NULL, SW_MAXIMIZE);
        mainmenu();
    }
    else if(c=='N'||c=='n')
    {
        system("cls");
        gotoxy(50,15);
        printf("#######    OK!!!  PRESS ANY BUTTON TO RETURN FOR MAINMENU     ########");
        getch();
        mainmenu();
    }
    else
    {
        system("cls");
        gotoxy(50,15);
        printf("#######    WE CAN'T UNDERSTAND WHAT THAT IMPLIES STILL WE ARE RETURNING TO MAINMENU :)   #########");
        Sleep(2500);
        mainmenu();
    }

}

void special()
{
FILE *fp;
int i, p;
char ch8[50];
system("cls");
fp = fopen("./data/n.txt", "r");
fscanf(fp, "%d", &p);
fclose(fp);
for(i=20;i<=150;i++)
{

    gotoxy(i,1);
    printf("\xA2");
}
for(i=1;i<=42;i++)
{
    gotoxy(20,i);
    printf("\xA2");

}
for(i=1;i<=42;i++)
{
    gotoxy(150,i);
    printf("\xA2");
}
for(i=20;i<=150;i++)
{
    gotoxy(i,42);
    printf("\xA2");
}
for(i=19;i<=150;i++)
{

    gotoxy(i,0);
    printf("\xA2");
}
for(i=0;i<=43;i++)
{
    gotoxy(19,i);
    printf("\xA2");

}
for(i=0;i<=43;i++)
{
    gotoxy(151,i);
    printf("\xA2");
}
for(i=19;i<=150;i++)
{
    gotoxy(i,43);
    printf("\xA2");
}
for(i=1;i<=42;i++)
{
    gotoxy(18,i);
    printf("\xA2");

}
for(i=1;i<=42;i++)
{
    gotoxy(152,i);
    printf("\xA2");
}

gotoxy(60,6);
printf("C E R T I F I C A T E     O F      E X C E L L E N C E");
gotoxy(57,7);
printf("_____________________________________________________________");
gotoxy(38,15);
printf("This  is  to  certify   that       ");
fp = fopen("./data/hospital.txt", "r");
fgets(ch8, sizeof(ch8), fp);
strupr(ch8);
ch8[strcspn(ch8 , "\r\n")] = 0;
fclose(fp);
printf(" %s ", ch8);
printf("    has  successfully  registered   %d   villagers", p);
gotoxy(69,16);
printf("________________________");
gotoxy(125,16);
printf("____");
gotoxy(55,21);
printf("          in  view  of   DIGITAL  INDIA   campaign.");
gotoxy(38,27);
printf("          We  congratulate  and  pray  for  him  for  his  bright  and  successful  future.");
gotoxy(130,37);
printf("From:----");
gotoxy(130,38);
printf("C R E A T O R");
gotoxy(133,39);
printf("    &");
gotoxy(130,40);
printf("D E S I G N E R");
gotoxy(30,37);
printf("By:----");
gotoxy(30,38);
printf("CODE BLOCKS :: CONSOLE");
getch();
mainmenu();
}
void searchintro()
{
    system("cls");
    gotoxy(20,10);
    printf("--------------------------------------------------------------------------------------------------------------------------------------");
    gotoxy(30,12);
    printf("-----------------------------------------------------------------------------------------------------------");
    gotoxy(54,15);
    printf("!!!!!!!!!!!  WELCOME TO MY SEARCH ENGINE !!!!!!!!!!!");
    gotoxy(46,18);
    printf("THIS SEARCH ENGINE EXPECTS YOU TO ENTER EXACT DATA AS YOU ENTERED IN RECORDS");
    gotoxy(67,21);
    printf("PRESS ANY BUTTON TO PROCEED");
    gotoxy(30,24);
    printf("------------------------------------------------------------------------------------------------------------");
    gotoxy(20,26);
    printf("--------------------------------------------------------------------------------------------------------------------------------------");

    getchar();

}
void search()
{
    FILE *fp, *fs;
    int sno, m, i, emp;//checks empty records;
    char ch5,ch6[50],pname[30], ch7[50];
    fs = fopen("./data/n.txt", "rb");
    fscanf(fs, "%d", &m);
    fclose(fs);
    system("cls");
    gotoxy(54,5);
    printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   S E A R C H  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
    gotoxy(15,8);
    printf("\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE");

    gotoxy(25,12);
    printf("  \x9D\x9D\xB0\xB0 1.  Search by Serial number");

    gotoxy(25,16);
    printf("  \x9D\x9D\xB0\xB0 2.  Search by name");

    gotoxy(25,20);
    printf("  \x9D\x9D\xB0\xB0 3.  Search by village");

    gotoxy(25,24);
    printf("  \x9D\x9D\xB0\xB0 4.  Search by Mobile number");

    gotoxy(25,28);
    printf("  \x9D\x9D\xB0\xB0 5.  Search by Disease"),

    gotoxy(25,32);
    printf("  \x9D\x9D\xB0\xB0 6.  Back to main menu");
    gotoxy(15,38);
    printf("\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE   End of search menu   \xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE");
    for(i=9;i<=38;i++)
    {
        gotoxy(15,i);
        printf("\xCE");
    }
    for(i=9;i<=38;i++)
    {
        gotoxy(149,i);
        printf("\xCE");
    }

    ch5 = getch();
    if(ch5 == '1')
    {
    system("cls");
    gotoxy(15,8);
    printf("ENTER  THE  SERIAL  NUMBER  TO  BE  SEARCHED:  ");
    scanf("%d", &sno);
    getchar();
    if(sno > m)
    {
        gotoxy(15,20);
        printf("This record does not exist.");
        gotoxy(15,21);
        printf("There are only %d records in total",m);
        gotoxy(15,24);
        printf("Press enter to return to search menu.......");
        getch();
        search();
    }
    else
    {
    fp = fopen("./data/name.txt", "wb+");
    fprintf(fp, "./data/P%d.txt", sno);
    rewind(fp);
    fscanf(fp, "%s", pname);
    fclose(fp);
    fs = fopen(pname , "rb");
    system("cls");
    gotoxy(54,6);

    printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   ANIMAL RECORD  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
    printf("\n\n\n\n");
    printf("\n");
    printf("  \xB0\xB0  Serial number:");
    printf(" %d\n", sno);

    printf("\n");
    printf("  \xB0\xB0  Name:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Village:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Mobile Number:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Aadhar Number:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Cattle Number:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Buffalo Number:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Sheep Number:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Goat Number:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Poultry Number:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Dog Number:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Cat Number:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Diseased animal:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Diseased diagnosis:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);

    printf("\n");
    printf("  \xB0\xB0  Status:");
    fgets(ch6, 50, fs);
    printf(" %s", ch6);
    fclose(fs);

    printf("\n\n\n\n");
    printf("Press enter to return Main menu\n");

    getchar();
    mainmenu();

    }
    }
else if(ch5 == '2')
        {
        emp = 0;
        system("cls");
        gotoxy(15,8);
        printf("ENTER  THE  NAME  OF  ANIMAL  OWNER:  ");
        fgets(ch6, 50, stdin);
        for(i=1; i<=m; i++)
        {
        fp = fopen("./data/name.txt", "wb+");
        fprintf(fp, "./data/P%d.txt", i);
        rewind(fp);
        fscanf(fp, "%s", pname);
        fclose(fp);
        fs = fopen(pname, "r");
        while(fgets(ch7, 50, fs) != NULL)
        {
            if(strcmp(ch7,ch6) == 0)
            {
            emp++;
            rewind(fs);
            system("cls");
            gotoxy(54,6);
            printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   ANIMAL RECORD  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
            printf("\n\n\n\n");
            printf("\n");
            printf("  \xB0\xB0  Serial number:");
            printf(" %d\n", i);

            printf("\n");
            printf("  \xB0\xB0  Name:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Village:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Mobile Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Aadhar Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Cattle Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Buffalo Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Sheep Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Goat Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Poultry Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Dog Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Cat Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Diseased animal:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Diseased diagnosis:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Status:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);
            fclose(fs);
            printf("\n\n\n\n");
            printf("Press enter to see other records or return to search menu");
            getchar();
            break;

        }
        else
            continue;
        }
        if(i == m)
        {
            if(emp == 0)
            {
                system("cls");
                gotoxy(30,15);
                printf("THERE ARE NO RECORDS WITH MATCHING NAME...");
                gotoxy(30,17);
                printf("FOR ADVANCED SEARCH ENGINE REFER TO UPDATE 1.02.....");
                gotoxy(24,24);
                printf("    ................ THANK YOU..................");
                getchar();
                search();
            }
            else
            {
            system("cls");
            gotoxy(30,15);
            printf("ALL RECORDS WITH MATCHING NAME HAVE BEEN SHOWN");
            gotoxy(24,18);
            printf("...............THANK YOU FOR USING ME..................");
            getchar();
            search();
            }
        }
        else
            continue;
        }
        }
else if(ch5 == '3')
        {
        emp = 0;
        system("cls");
        gotoxy(15,8);
        printf("ENTER  THE  VILLAGE  OF  ANIMAL  OWNER:  ");
        fgets(ch6, 50, stdin);
        for(i=1; i<=m; i++)
        {
        fp = fopen("./data/name.txt", "wb+");
        fprintf(fp, "./data/P%d.txt", i);
        rewind(fp);
        fscanf(fp, "%s", pname);
        fclose(fp);
        fs = fopen(pname, "r");
        while(fgets(ch7, 50, fs) != NULL)
        {
            if(strcmp(ch7,ch6) == 0)
            {
            emp++;
            rewind(fs);
            system("cls");
            gotoxy(54,6);
            printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   ANIMAL RECORD  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
            printf("\n\n\n\n");
            printf("\n");
            printf("  \xB0\xB0  Serial number:");
            printf(" %d\n", i);

            printf("\n");
            printf("  \xB0\xB0  Name:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Village:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Mobile Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Aadhar Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Cattle Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Buffalo Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Sheep Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Goat Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Poultry Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Dog Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Cat Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Diseased animal:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Diseased diagnosis:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Status:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);
            fclose(fs);
            printf("\n\n\n\n");
            printf("Press enter to see other records or return to search menu");
            getchar();
            break;

        }
        else
            continue;
        }
        if(i == m)
        {
            if(emp == 0)
            {
                system("cls");
                gotoxy(30,15);
                printf("THERE ARE NO RECORDS WITH MATCHING VILLAGE NAME...");
                gotoxy(30,18);
                printf("    ................ THANK YOU..................");
                getchar();
                search();
            }
            else
            {
            system("cls");
            gotoxy(30,15);
            printf("ALL RECORDS WITH MATCHING VILLAGES HAVE BEEN SHOWN");
            gotoxy(24,18);
            printf("...............THANK YOU FOR USING ME..................");
            getchar();
            search();
            }
        }
        else
            continue;
        }
        }
else if(ch5 == '4')
        {
        emp = 0;
        system("cls");
        gotoxy(15,8);
        printf("ENTER  THE  MOBILE  NUMBER  OF  ANIMAL  OWNER:  ");
        fgets(ch6, 50, stdin);
        for(i=1; i<=m; i++)
        {
        fp = fopen("./data/name.txt", "wb+");
        fprintf(fp, "./data/P%d.txt", i);
        rewind(fp);
        fscanf(fp, "%s", pname);
        fclose(fp);
        fs = fopen(pname, "r");
        while(fgets(ch7, 50, fs) != NULL)
        {
            if(strcmp(ch7,ch6) == 0)
            {
            emp++;
            rewind(fs);
            system("cls");
            gotoxy(54,6);
            printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   ANIMAL RECORD  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
            printf("\n\n\n\n");
            printf("\n");
            printf("  \xB0\xB0  Serial number:");
            printf(" %d\n", i);

            printf("\n");
            printf("  \xB0\xB0  Name:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Village:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Mobile Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Aadhar Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Cattle Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Buffalo Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Sheep Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Goat Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Poultry Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Dog Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Cat Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Diseased animal:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Diseased diagnosis:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Status:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);
            fclose(fs);
            printf("\n\n\n\n");
            printf("Press enter to see other records or return to search menu");
            getchar();
            break;

        }
        else
            continue;
        }
        if(i == m)
        {
            if(emp == 0)
            {
                system("cls");
                gotoxy(30,15);
                printf("THERE ARE NO RECORDS WITH MATCHING MOBILE NO...");
                gotoxy(30,18);
                printf("    ................ THANK YOU..................");
                getchar();
                search();
            }
            else
            {
            system("cls");
            gotoxy(30,15);
            printf("ALL RECORDS WITH MATCHING MOBILE NUMBER HAVE BEEN SHOWN");
            gotoxy(24,18);
            printf("...............THANK YOU FOR USING ME..................");
            getchar();
            search();
            }
        }
        else
            continue;
        }
        }
else if(ch5 == '5')
        {
        emp = 0;
        system("cls");
        gotoxy(15,8);
        printf("ENTER  THE  DISEASE  NAME:  ");
        fgets(ch6, 50, stdin);
        for(i=1; i<=m; i++)
        {
        fp = fopen("./data/name.txt", "wb+");
        fprintf(fp, "./data/P%d.txt", i);
        rewind(fp);
        fscanf(fp, "%s", pname);
        fclose(fp);
        fs = fopen(pname, "r");
        while(fgets(ch7, 50, fs) != NULL)
        {
            if(strcmp(ch7,ch6) == 0)
            {
            emp++;
            rewind(fs);
            system("cls");
            gotoxy(54,6);
            printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   ANIMAL RECORD  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
            printf("\n\n\n\n");
            printf("\n");
            printf("  \xB0\xB0  Serial number:");
            printf(" %d\n", i);

            printf("\n");
            printf("  \xB0\xB0  Name:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Village:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Mobile Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Aadhar Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Cattle Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Buffalo Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Sheep Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Goat Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Poultry Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Dog Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Cat Number:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Diseased animal:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Diseased diagnosis:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);

            printf("\n");
            printf("  \xB0\xB0  Status:");
            fgets(ch7, 50, fs);
            printf(" %s", ch7);
            fclose(fs);
            printf("\n\n\n\n");
            printf("Press enter to see other records or return to search menu");
            getchar();
            break;

        }
        else
            continue;
        }
        if(i == m)
        {
            if(emp == 0)
            {
                system("cls");
                gotoxy(30,15);
                printf("THERE ARE NO RECORDS WITH MATCHING DISEASE...");
                gotoxy(30,18);
                printf("    ................ THANK YOU..................");
                getchar();
                search();
            }
            else
            {
            system("cls");
            gotoxy(30,15);
            printf("ALL RECORDS WITH MATCHING DISEASE HAVE BEEN SHOWN");
            gotoxy(24,18);
            printf("...............THANK YOU FOR USING ME..................");
            getchar();
            search();
            }
        }
        else
            continue;
        }
        }
else if(ch5 == '6')
    {
    mainmenu();
    }
else
    search();
    }


void deletes()
{
    FILE *fp, *fs;
    system("cls");
    char ch10, pname[50], dname[50],ch6[50],ch7[50],del;
    int i,m, sno,emp,j;
    fs = fopen("./data/n.txt", "rb");
    fscanf(fs, "%d", &m);
    fclose(fs);
    gotoxy(54,5);
    printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   DELETE ANIMAL RECORD  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
    gotoxy(15,8);
    printf("\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE");

    gotoxy(25,12);
    printf("  \x9D\x9D\xB0\xB0 1.  Delete by serial number");

    gotoxy(25,16);
    printf("  \x9D\x9D\xB0\xB0 2.  Delete by name");

    gotoxy(25,20);
    printf("  \x9D\x9D\xB0\xB0 3.  Delete by village");

    gotoxy(25,24);
    printf("  \x9D\x9D\xB0\xB0 4.  Delete by Mobile number");

    gotoxy(25,28);
    printf("  \x9D\x9D\xB0\xB0 5.  Delete by Disease");

    gotoxy(25,32);
    printf("  \x9D\x9D\xB0\xB0 6.  Back to main menu");
    gotoxy(15,38);
    printf("\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE   End of Delete menu   \xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE");

     for(i=9;i<=38;i++)
    {
        gotoxy(15,i);
        printf("\xCE");
    }
    for(i=9;i<=38;i++)
    {
        gotoxy(149,i);
        printf("\xCE");
    }

   ch10 = getch();
   if(ch10 == '1')
   {
       system("cls");
    gotoxy(15,8);
    printf("ENTER  THE  SERIAL  NUMBER  YOU  WANT  TO  DELETE:  ");
    scanf("%d%*c", &sno);
    gotoxy(15,13);
    printf("ARE  YOU  SURE  YOU  WANT  TO  DELETE  RECORD  WITH  SNO  '%d' ?  [Y/N]",sno);
    del = getch();
    if(del=='y'||del=='Y')
    {

    if(sno > m)
    {
        gotoxy(15,20);
        printf("This record does not exist.");
        gotoxy(15,21);
        printf("There are only %d records in total",m);
        gotoxy(15,24);
        printf("Press enter to return to Delete menu.......");
        getch();
        deletes();
    }
    else
    {
    fp = fopen("./data/name.txt", "wb+");
    fprintf(fp, "./data/P%d.txt", sno);
    rewind(fp);
    fscanf(fp, "%s", pname);
    fclose(fp);
    remove(pname);
    chdir("./data/");
    for(i=sno; i<=m; i++)
    {

    fp = fopen("name.txt", "wb+");
    fprintf(fp, "P%d.txt", ++i);
    rewind(fp);
    fscanf(fp, "%s", pname);
    fclose(fp);

    --i;

    fp = fopen("name.txt", "wb+");
    fprintf(fp, "P%d.txt", i);
    rewind(fp);
    fscanf(fp, "%s", dname);
    fclose(fp);

    rename(pname,dname);
    }
    chdir("A://c file folder//hospital management//");
    fs = fopen("./data/n.txt", "wb+");
    fprintf(fs, "%d", --m);
    fclose(fs);
    printf("\n\n  The record is successfully removed");
    printf("\n\n  View your changes in total records");

    // adding to total
    fp = fopen("./data/copy.txt", "w+");
    fprintf(fp, "                                 TOTAL PATIENT RECORD\n\n\n\n");
    fprintf(fp, "S.no    NAME                        VILLAGE                      MOBILE NO.      AADHAR NO.      CATTLE NO.     BUFFALO NO.    SHEEP NO.     GOAT NO.       POULTRY NO.     DOG NO.        CAT NO.       DISEASED ANIMAL     DISEASE DIAGNOSIS             STATUS\n\n\n");
    fclose(fp);
    char ch1[40];
    for(i=1; i<=m; i++)
    {
    fp = fopen("./data/name.txt","wb+");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "./data/P%d.txt", i);
    rewind(fp);
    fscanf(fp, "%s",ch1);
    fclose(fp);
    fs = fopen(ch1,"r+");
    fp = fopen("./data/copy.txt", "a+");
    struct info S1;
    fgets(S1.name, sizeof(S1.name), fs);
    S1.name[strcspn(S1.name, "\r\n")] = ' ';


    fgets(S1.village, sizeof(S1.village), fs);
    S1.village[strcspn(S1.village, "\r\n")] = ' ';

    fgets(S1.mob, sizeof(S1.mob), fs);
    S1.mob[strcspn(S1.mob, "\r\n")] = ' ';

    fgets(S1.aadhar, sizeof(S1.aadhar), fs);
    S1.aadhar[strcspn(S1.aadhar, "\r\n")] = ' ';

    fscanf(fs, "%d", &S1.cattle);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.buffalo);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.sheep);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.goat);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.poultry);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.dog);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d%*c", &S1.cat);


    fgets(S1.animal, sizeof(S1.animal), fs);
    S1.animal[strcspn(S1.animal, "\n")] = ' ';



    fgets(S1.disease, sizeof(S1.disease), fs);
    S1.disease[strcspn(S1.disease, "\n")] = ' ';



    fgets(S1.status, sizeof(S1.status), fs);
    S1.status[strcspn(S1.status, "\n")] = ' ';



    fprintf(fp, "\n\n%-8d%-28s%-29s%-16s%-16s%-15d%-15d%-15d%-15d%-15d%-15d%-15d%-20s%-30s%s", i,S1.name,S1.village,S1.mob,S1.aadhar,S1.cattle,S1.buffalo,S1.sheep,S1.goat,S1.poultry,S1.dog,S1.cat,S1.animal,S1.disease,S1.status );

    fclose(fs);
    fclose(fp);
    }
    chdir("./data/");
    remove("total.txt");
    rename("copy.txt","total.txt");
    chdir("../");


    //total.txt added
    getch();
    deletes();
    }
    }
    else
        deletes();
   }
   else if(ch10 == '2')
   {
       emp = 0;
        system("cls");
        gotoxy(15,8);
        printf("ENTER  THE   NAME  OF  ANIMAL  OWNER  TO  BE  REMOVED:  ");
        fgets(ch6, 50, stdin);
        gotoxy(15,13);
        printf("ARE  YOU  SURE  YOU  WANT  TO  DELETE  RECORDS  WITH  MATCHING  NAME ?  [Y/N]");
        del = getch();
        if(del == 'y'||del == 'Y')
        {

        for(i=1; i<=m; i++)
        {
        fp = fopen("./data/name.txt", "wb+");
        fprintf(fp, "./data/P%d.txt", i);
        rewind(fp);
        fscanf(fp, "%s", pname);
        fclose(fp);
        fs = fopen(pname, "r");
        while(fgets(ch7, 50, fs) != NULL)
        {
            if(strcmp(ch7,ch6) == 0)
            {
            emp++;
            fclose(fs);
            remove(pname);
            chdir("./data/");
            for(j=i; j<=m; j++)
            {

            fp = fopen("name.txt", "wb+");
            fprintf(fp, "P%d.txt", ++j);
            rewind(fp);
            fscanf(fp, "%s", pname);
            fclose(fp);

            --j;

            fp = fopen("name.txt", "wb+");
            fprintf(fp, "P%d.txt", j);
            rewind(fp);
            fscanf(fp, "%s", dname);
            fclose(fp);

            rename(pname,dname);

            }
            --i;
            --m;
            chdir("../");
            break;

            }
            else
                continue;
        }



        }
        fs = fopen("./data/n.txt", "wb+");
        fprintf(fs, "%d", m);
        fclose(fs);
        // ADD TO TOTAL.TXT
        fp = fopen("./data/copy.txt", "w+");
    fprintf(fp, "                                 TOTAL PATIENT RECORD\n\n\n\n");
    fprintf(fp, "S.no    NAME                        VILLAGE                      MOBILE NO.      AADHAR NO.      CATTLE NO.     BUFFALO NO.    SHEEP NO.     GOAT NO.       POULTRY NO.     DOG NO.        CAT NO.       DISEASED ANIMAL     DISEASE DIAGNOSIS             STATUS\n\n\n");
    fclose(fp);
    char ch1[40];
    for(i=1; i<=m; i++)
    {
    fp = fopen("./data/name.txt","wb+");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "./data/P%d.txt", i);
    rewind(fp);
    fscanf(fp, "%s",ch1);
    fclose(fp);
    fs = fopen(ch1,"r+");
    fp = fopen("./data/copy.txt", "a+");
    struct info S1;
    fgets(S1.name, sizeof(S1.name), fs);
    S1.name[strcspn(S1.name, "\r\n")] = ' ';


    fgets(S1.village, sizeof(S1.village), fs);
    S1.village[strcspn(S1.village, "\r\n")] = ' ';

    fgets(S1.mob, sizeof(S1.mob), fs);
    S1.mob[strcspn(S1.mob, "\r\n")] = ' ';

    fgets(S1.aadhar, sizeof(S1.aadhar), fs);
    S1.aadhar[strcspn(S1.aadhar, "\r\n")] = ' ';

    fscanf(fs, "%d", &S1.cattle);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.buffalo);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.sheep);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.goat);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.poultry);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.dog);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d%*c", &S1.cat);


    fgets(S1.animal, sizeof(S1.animal), fs);
    S1.animal[strcspn(S1.animal, "\n")] = ' ';



    fgets(S1.disease, sizeof(S1.disease), fs);
    S1.disease[strcspn(S1.disease, "\n")] = ' ';



    fgets(S1.status, sizeof(S1.status), fs);
    S1.status[strcspn(S1.status, "\n")] = ' ';



    fprintf(fp, "\n\n%-8d%-28s%-29s%-16s%-16s%-15d%-15d%-15d%-15d%-15d%-15d%-15d%-20s%-30s%s", i,S1.name,S1.village,S1.mob,S1.aadhar,S1.cattle,S1.buffalo,S1.sheep,S1.goat,S1.poultry,S1.dog,S1.cat,S1.animal,S1.disease,S1.status );

    fclose(fs);
    fclose(fp);
    }
    chdir("./data/");
    remove("total.txt");
    rename("copy.txt","total.txt");
    chdir("A://c file folder//hospital management//");


        printf("\n\n    The record is successfully removed.");
        printf("\n\n    View your changes in total records");
        getchar();
     deletes();
        }
        else
            deletes();
   }
   else if(ch10 == '3')
   {
    emp = 0;
        system("cls");
        gotoxy(15,8);
        printf("ENTER  THE  VILLAGE  NAME  CORRESSPONDING  TO  RECORDS  TO  BE  REMOVED:  ");
        fgets(ch6, 50, stdin);
        gotoxy(15,13);
        printf("ARE  YOU  SURE  YOU  WANT  TO  DELETE  EVERY  RECORD  WITH  MATCHING  VILLAGE  NAME ?  [Y/N]");
        del = getch();
        if(del=='y'||del=='Y')
        {


        for(i=1; i<=m; i++)
        {
        fp = fopen("./data/name.txt", "wb+");
        fprintf(fp, "./data/P%d.txt", i);
        rewind(fp);
        fscanf(fp, "%s", pname);
        fclose(fp);
        fs = fopen(pname, "r");
        while(fgets(ch7, 50, fs) != NULL)
        {
            if(strcmp(ch7,ch6) == 0)
            {
            emp++;
            fclose(fs);
            remove(pname);
            chdir("./data/");
            for(j=i; j<=m; j++)
            {

            fp = fopen("name.txt", "wb+");
            fprintf(fp, "P%d.txt", ++j);
            rewind(fp);
            fscanf(fp, "%s", pname);
            fclose(fp);

            --j;

            fp = fopen("name.txt", "wb+");
            fprintf(fp, "P%d.txt", j);
            rewind(fp);
            fscanf(fp, "%s", dname);
            fclose(fp);

            rename(pname,dname);

            }
            --i;
            --m;
            chdir("A://c file folder//hospital management//");
            break;

            }
            else
                continue;
        }



        }
        fs = fopen("./data/n.txt", "wb+");
        fprintf(fs, "%d", m);
        fclose(fs);
        // ADD TO TOTAL.TXT
        fp = fopen("./data/copy.txt", "w+");
    fprintf(fp, "                                 TOTAL PATIENT RECORD\n\n\n\n");
    fprintf(fp, "S.no    NAME                        VILLAGE                      MOBILE NO.      AADHAR NO.      CATTLE NO.     BUFFALO NO.    SHEEP NO.     GOAT NO.       POULTRY NO.     DOG NO.        CAT NO.       DISEASED ANIMAL     DISEASE DIAGNOSIS             STATUS\n\n\n");
    fclose(fp);
    char ch1[40];
    for(i=1; i<=m; i++)
    {
    fp = fopen("./data/name.txt","wb+");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "./data/P%d.txt", i);
    rewind(fp);
    fscanf(fp, "%s",ch1);
    fclose(fp);
    fs = fopen(ch1,"r+");
    fp = fopen("./data/copy.txt", "a+");
    struct info S1;
    fgets(S1.name, sizeof(S1.name), fs);
    S1.name[strcspn(S1.name, "\r\n")] = ' ';


    fgets(S1.village, sizeof(S1.village), fs);
    S1.village[strcspn(S1.village, "\r\n")] = ' ';

    fgets(S1.mob, sizeof(S1.mob), fs);
    S1.mob[strcspn(S1.mob, "\r\n")] = ' ';

    fgets(S1.aadhar, sizeof(S1.aadhar), fs);
    S1.aadhar[strcspn(S1.aadhar, "\r\n")] = ' ';

    fscanf(fs, "%d", &S1.cattle);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.buffalo);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.sheep);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.goat);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.poultry);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.dog);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d%*c", &S1.cat);


    fgets(S1.animal, sizeof(S1.animal), fs);
    S1.animal[strcspn(S1.animal, "\n")] = ' ';



    fgets(S1.disease, sizeof(S1.disease), fs);
    S1.disease[strcspn(S1.disease, "\n")] = ' ';



    fgets(S1.status, sizeof(S1.status), fs);
    S1.status[strcspn(S1.status, "\n")] = ' ';



    fprintf(fp, "\n\n%-8d%-28s%-29s%-16s%-16s%-15d%-15d%-15d%-15d%-15d%-15d%-15d%-20s%-30s%s", i,S1.name,S1.village,S1.mob,S1.aadhar,S1.cattle,S1.buffalo,S1.sheep,S1.goat,S1.poultry,S1.dog,S1.cat,S1.animal,S1.disease,S1.status );

    fclose(fs);
    fclose(fp);
    }
    chdir("./data/");
    remove("total.txt");
    rename("copy.txt","total.txt");
    chdir("../");


        printf("\n\n    The record is successfully removed.");
        printf("\n\n    View your changes in total records");
        getchar();
     deletes();
   }
   else
    deletes();
   }
   else if(ch10 == '4')
   {
     emp = 0;
        system("cls");
        gotoxy(15,8);
        printf("ENTER  THE  MOBILE  NUMBER  CORRESSPONDING  TO  RECORDS  TO  BE  REMOVED:  ");
        fgets(ch6, 50, stdin);
        gotoxy(15,13);
        printf("ARE  YOU  SURE  YOU  WANT  TO  DELETE  MATCHING  RECORD ?  [Y/N]");
        del = getch();
        if(del == 'y'||del == 'Y')
        {
        for(i=1; i<=m; i++)
        {
        fp = fopen("./data/name.txt", "wb+");
        fprintf(fp, "./data/P%d.txt", i);
        rewind(fp);
        fscanf(fp, "%s", pname);
        fclose(fp);
        fs = fopen(pname, "r");
        while(fgets(ch7, 50, fs) != NULL)
        {
            if(strcmp(ch7,ch6) == 0)
            {
            emp++;
            fclose(fs);
            remove(pname);
            chdir("./data/");
            for(j=i; j<=m; j++)
            {

            fp = fopen("name.txt", "wb+");
            fprintf(fp, "P%d.txt", ++j);
            rewind(fp);
            fscanf(fp, "%s", pname);
            fclose(fp);

            --j;

            fp = fopen("name.txt", "wb+");
            fprintf(fp, "P%d.txt", j);
            rewind(fp);
            fscanf(fp, "%s", dname);
            fclose(fp);

            rename(pname,dname);

            }
            --i;
            --m;
            chdir("../");
            break;

            }
            else
                continue;
        }



        }
        fs = fopen("./data/n.txt", "wb+");
        fprintf(fs, "%d", m);
        fclose(fs);
        // ADD TO TOTAL.TXT
        fp = fopen("./data/copy.txt", "w+");
    fprintf(fp, "                                 TOTAL PATIENT RECORD\n\n\n\n");
    fprintf(fp, "S.no    NAME                        VILLAGE                      MOBILE NO.      AADHAR NO.      CATTLE NO.     BUFFALO NO.    SHEEP NO.     GOAT NO.       POULTRY NO.     DOG NO.        CAT NO.       DISEASED ANIMAL     DISEASE DIAGNOSIS             STATUS\n\n\n");
    fclose(fp);
    char ch1[40];
    for(i=1; i<=m; i++)
    {
    fp = fopen("./data/name.txt","wb+");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "./data/P%d.txt", i);
    rewind(fp);
    fscanf(fp, "%s",ch1);
    fclose(fp);
    fs = fopen(ch1,"r+");
    fp = fopen("./data/copy.txt", "a+");
    struct info S1;
    fgets(S1.name, sizeof(S1.name), fs);
    S1.name[strcspn(S1.name, "\r\n")] = ' ';


    fgets(S1.village, sizeof(S1.village), fs);
    S1.village[strcspn(S1.village, "\r\n")] = ' ';

    fgets(S1.mob, sizeof(S1.mob), fs);
    S1.mob[strcspn(S1.mob, "\r\n")] = ' ';

    fgets(S1.aadhar, sizeof(S1.aadhar), fs);
    S1.aadhar[strcspn(S1.aadhar, "\r\n")] = ' ';

    fscanf(fs, "%d", &S1.cattle);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.buffalo);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.sheep);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.goat);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.poultry);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.dog);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d%*c", &S1.cat);


    fgets(S1.animal, sizeof(S1.animal), fs);
    S1.animal[strcspn(S1.animal, "\n")] = ' ';



    fgets(S1.disease, sizeof(S1.disease), fs);
    S1.disease[strcspn(S1.disease, "\n")] = ' ';



    fgets(S1.status, sizeof(S1.status), fs);
    S1.status[strcspn(S1.status, "\n")] = ' ';



    fprintf(fp, "\n\n%-8d%-28s%-29s%-16s%-16s%-15d%-15d%-15d%-15d%-15d%-15d%-15d%-20s%-30s%s", i,S1.name,S1.village,S1.mob,S1.aadhar,S1.cattle,S1.buffalo,S1.sheep,S1.goat,S1.poultry,S1.dog,S1.cat,S1.animal,S1.disease,S1.status );

    fclose(fs);
    fclose(fp);
    }
    chdir("./data/");
    remove("total.txt");
    rename("copy.txt","total.txt");
    chdir("../");


        printf("\n\n    The record is successfully removed.");
        printf("\n\n    View your changes in total records");
        getchar();
     deletes();
        }
        else
            deletes();
   }
   else if(ch10 == '5')
   {

     emp = 0;
        system("cls");
        gotoxy(15,8);
        printf("ENTER  THE  DISEASE  NAME  CORRESSPONDING  TO  RECORDS  TO  BE  REMOVED:  ");
        fgets(ch6, 50, stdin);
        gotoxy(15,13);
        printf("ARE  YOU  SURE  YOU  WANT  TO  DELETE  RECORDS  WITH   MATCHING  DISEASE ?  [Y/N] ");
        del = getch();
        if(del == 'y'||del == 'Y')
        {
        for(i=1; i<=m; i++)
        {
        fp = fopen("./data/name.txt", "wb+");
        fprintf(fp, "./data/P%d.txt", i);
        rewind(fp);
        fscanf(fp, "%s", pname);
        fclose(fp);
        fs = fopen(pname, "r");
        while(fgets(ch7, 50, fs) != NULL)
        {
            if(strcmp(ch7,ch6) == 0)
            {
            emp++;
            fclose(fs);
            remove(pname);
            chdir("./data/");
            for(j=i; j<=m; j++)
            {

            fp = fopen("name.txt", "wb+");
            fprintf(fp, "P%d.txt", ++j);
            rewind(fp);
            fscanf(fp, "%s", pname);
            fclose(fp);

            --j;

            fp = fopen("name.txt", "wb+");
            fprintf(fp, "P%d.txt", j);
            rewind(fp);
            fscanf(fp, "%s", dname);
            fclose(fp);

            rename(pname,dname);

            }
            --i;
            --m;
            chdir("../");
            break;

            }
            else
                continue;
        }


        }
        fs = fopen("./data/n.txt", "wb+");
        fprintf(fs, "%d", m);
        fclose(fs);
        // ADD TO TOTAL.TXT
        fp = fopen("./data/copy.txt", "w+");
    fprintf(fp, "                                 TOTAL PATIENT RECORD\n\n\n\n");
    fprintf(fp, "S.no    NAME                        VILLAGE                      MOBILE NO.      AADHAR NO.      CATTLE NO.     BUFFALO NO.    SHEEP NO.     GOAT NO.       POULTRY NO.     DOG NO.        CAT NO.       DISEASED ANIMAL     DISEASE DIAGNOSIS             STATUS\n\n\n");
    fclose(fp);
    char ch1[40];
    for(i=1; i<=m; i++)
    {
    fp = fopen("./data/name.txt","wb+");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "./data/P%d.txt", i);
    rewind(fp);
    fscanf(fp, "%s",ch1);
    fclose(fp);
    fs = fopen(ch1,"r+");
    fp = fopen("./data/copy.txt", "a+");
    struct info S1;
    fgets(S1.name, sizeof(S1.name), fs);
    S1.name[strcspn(S1.name, "\r\n")] = ' ';


    fgets(S1.village, sizeof(S1.village), fs);
    S1.village[strcspn(S1.village, "\r\n")] = ' ';

    fgets(S1.mob, sizeof(S1.mob), fs);
    S1.mob[strcspn(S1.mob, "\r\n")] = ' ';

    fgets(S1.aadhar, sizeof(S1.aadhar), fs);
    S1.aadhar[strcspn(S1.aadhar, "\r\n")] = ' ';

    fscanf(fs, "%d", &S1.cattle);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.buffalo);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.sheep);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.goat);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.poultry);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d", &S1.dog);

    fseek(fs, 1, SEEK_CUR);
    fscanf(fs, "%d%*c", &S1.cat);


    fgets(S1.animal, sizeof(S1.animal), fs);
    S1.animal[strcspn(S1.animal, "\n")] = ' ';



    fgets(S1.disease, sizeof(S1.disease), fs);
    S1.disease[strcspn(S1.disease, "\n")] = ' ';



    fgets(S1.status, sizeof(S1.status), fs);
    S1.status[strcspn(S1.status, "\n")] = ' ';



    fprintf(fp, "\n\n%-8d%-28s%-29s%-16s%-16s%-15d%-15d%-15d%-15d%-15d%-15d%-15d%-20s%-30s%s", i,S1.name,S1.village,S1.mob,S1.aadhar,S1.cattle,S1.buffalo,S1.sheep,S1.goat,S1.poultry,S1.dog,S1.cat,S1.animal,S1.disease,S1.status );

    fclose(fs);
    fclose(fp);
    }
    chdir("./data/");
    remove("total.txt");
    rename("copy.txt","total.txt");
    chdir("../");


        printf("\n\n    The record is successfully removed.");
        printf("\n\n    View your changes in total records");
        getchar();
     deletes();
       }
       else
        deletes();
   }
   else if(ch10 == '6')
   mainmenu();
   else
    deletes();

}


void mainmenu()
{
    system("cls");
    char s;
    int i;
    gotoxy(54,5);
    printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   M A I N      M E N U   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
    gotoxy(15,9);
    printf("\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE");
    gotoxy(25,12);
    printf("  \x9D\x9D\xB0\xB0 1.  Add new animal owner");

    gotoxy(25,16);
    printf("  \x9D\x9D\xB0\xB0 2.  Search animal record");

    gotoxy(25,20);
    printf("  \x9D\x9D\xB0\xB0 3.  Delete animal owner ");

    gotoxy(25,24);
    printf("  \x9D\x9D\xB0\xB0 4.  Total record list ");

    gotoxy(25,28);
    printf("  \x9D\x9D\xB0\xB0 5.  Introduction page ");

    gotoxy(25,32);
    printf("  \x9D\x9D\xB0\xB0 6.  Special");

    gotoxy(25,36);
    printf("  \x9D\x9D\xB0\xB0 7.  Exit application ");

    gotoxy(15,40);
    printf("\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE   End of main menu   \xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE\xCE");
    for(i=9;i<=39;i++)
    {
        gotoxy(15,i);
        printf("\xCE");
    }
    for(i=9;i<=39;i++)
    {
        gotoxy(149,i);
        printf("\xCE");
    }
    s = getch();
    if(s == '1')
        add();
    else if(s == '2')
        {
        searchintro();
        search();
        }
    else if(s == '3')
        deletes();
    else if(s == '4')
        total();
    else if(s == '5')
        initial();
    else if(s == '6')
        special();
    else if(s == '7')
        exits();
    else if(s == 'q'||s == 'Q')
    {
       fact();
       mainmenu();
    }
    else
        mainmenu();
}

void tutorial()
{
    gotoxy(54,6);
    printf("\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   I N S T R U C T I O N S   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1");
    printf("\n\n\n\n");
    printf("Read the instructions carefully:---\n\n");
    printf("<-- This is console application so there are no graphics used.\n    The intention of this program is to provide high speed management of data,\n    however the application is completely user friendly.\n\n");
    printf("<-- e/E button will be used to either skip or exit program , while using any other button will start next page.\n\n");
    printf("<-- The options can be selected by clicking on the numbers assigned to them.\n\n");
    printf("<-- You can skip introduction and tutorial pages.\n\n");
    printf("<-- If possible try to use short sentences while writing names, village etc. , this is to facilitate you for searching patients.\n\n");
    printf("<-- Data file of patients can be accessed seperately or using console.\n\n");
    printf("<-- Run the application in MAXIMISED window or BATCH file for proper functioning.\n\n");
    printf("<-- The application is totally glitch free and has been tested fully on several platforms.\n\n\n\n\n");

    printf("    Press Enter to proceed for introduction page ");
    getch();



}


void fact()
{
int a,i;
char f[500];
FILE *fp;
fp = fopen("./data/fact.txt", "r");
a = rand()%300 + 1;
for(i=1; i<=a; i++)
{
fgets(f, sizeof(f), fp);
if(f[1]== 0 && i==a)
{
 i=1;
 continue;
}
else
 continue;
}
gotoxy(10,7);
for(i=0;i<=strlen(f);i++)
{
printf("%c", f[i]);
Sleep(20);
}
getch();
}


void exits()
{
    system("cls");
    gotoxy(14,3);
    printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
    Sleep(120);
    gotoxy(30,3);
    printf("  H");
    Sleep(120);
    printf(" O");
    Sleep(120);
    printf(" S");
    Sleep(120);
    printf(" P");
    Sleep(120);
    printf(" I");
    Sleep(120);
    printf(" T");
    Sleep(120);
    printf(" A");
    Sleep(120);
    printf(" L");
    Sleep(120);
    printf("     M");
    Sleep(120);
    printf(" A");
    Sleep(120);
    printf(" N");
    Sleep(120);
    printf(" A");
    Sleep(120);
    printf(" G");
    Sleep(120);
    printf(" E");
    Sleep(120);
    printf(" M");
    Sleep(120);
    printf(" E");
    Sleep(120);
    printf(" N");
    Sleep(120);
    printf(" T");
    gotoxy(14,5);
    printf("Brought to you by ---\n\n   Code::Blocks console\n\n");
    printf("Creator and designer ---\n\n   Abhishek Kuriyal\n\n");
    printf("DISCORD Channel --\n\n--------------------------------------------------------\n\nEmail: codeshelf2020@gmail.com\n\nContact number: \n8868865200\n9458973616\n\n----------------------------------------------------------------\n\n");
    printf("Version  1.01 \n\n");
    printf("For Updates and Queries , kindly refer to discord channel\n\n\n");
    printf("\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D");
    printf("\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D");
    printf("\n\n        !!!!!!   T H A N K   Y O U   !!!!!");
    printf("\n\n");
    printf("\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D");
    printf("\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D\x9D");
    PlaySoundA(".//Sounds//end.wav",NULL, SND_FILENAME);

    getch();
    exit(0);
}



