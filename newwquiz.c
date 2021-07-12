#include<stdio.h>  
#include<stdlib.h>  
//#include<conio.h>  
  
struct Player {  
            char player_name[50];  
            int player_score;  
            int player_rating;       //star ratings  
}p;  
  
void high_score();  
void start();  
void help(); 
  
int main()  
{  
    //clrscr();  
       system("cls");
       int choice=0;  
  
    printf("Press 1 to start the game\n2 to see high scores \n3 to see game help\n0 to exit :   ");  
    scanf("%d",&choice);  
  
    switch(choice)  
    {  
        case 1:  
        start();  
        break;  
  
        case 2:  
        high_score();  
        break;  
  
        case 3:  
        help();  
        break;  
  
          default:  
          exit(1);  
    } 
  
  //getch();  
}  
  
void help()  
{  
     int choice_Y_N;  
  
     printf("\n\n ************************* GAME HELP *************************");  
     printf("\n -------------------------------------------------------------------------");  
     printf("\n .................... QUIZEEE ...........\n");  
     printf("\n >> There will be a total of 10 questions");  
     printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");  
     printf("\n    right option");  
     printf("\n >> Each question will carry 10 points");  
     printf("\n >> You will be asked questions continuously.");  
     printf("\n >> There is no negative marking for wrong answer");  
  
    printf("\n\n ************************* BEST OF LUCK *************************\n\n");  
  
  
    printf("\nContinue playing ? (1/0) :  ");  
    scanf("%d",&choice_Y_N);  
  
    if(choice_Y_N==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
}  
  
void start()  
{  
          int answer;  
          int score_tracker=0;  
          char rating[20];  
  
          FILE *fp;  
  
          if((fp=fopen("\\tmp\play2.txt","a"))==NULL)  
             {  
                 printf("error opening file\n");  
             }  
         system("cls");
  
        printf("\nPlease enter your name: ");  
        scanf("%s",p.player_name);  
  
  
  
        system("cls");
        printf("******************* Welcome \" %s \"  to C QuizEEE Game *************************** \n\n", p.player_name);  
        
        system("cls");
  
        printf("\n\nQ(1).What is the 16-bit compiler allowable range for integer constants in C? \n 1. -3.4e38 to 3.4e38 \n2. -32767 to 32768\n 3. -32668 to 32667\n 4. -32768 to 32767\n\n");  
  
        printf("Your answer: ");  
        scanf("%d",&answer);  
  
        if(answer==4)  
        {  
            printf("Correct! +5 points\n\n");  
            ++score_tracker;  
  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. -32768 to 32767\n\n");  
        }  
  
        printf("\nQ(2) What is required in each C program? \n 1. The program must have at least one function.\n2. The program does not require any function \n3. Input data\n4. Output data\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
  
        if(answer==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++score_tracker;  
  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1. The program must have at least one function.\n\n");  
        }  
  
        printf("\nQ(3) What is a lint? \n1. C compiler\n2. Interactive debugger\n3. Analyzing tool\n4. C interpreter\n\n");  
  
        printf("Your answer: ");  
        scanf("%d",&answer);  
  
        if(answer==3)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3. Analyzing tool\n\n");  
        }  
  
  
        printf("\nQ(4). What does this declaration mean? int x : 4;   \n1.X is a four-digit integer\n2.X cannot be greater than a four-digit integer\n3.X is a four-bit integer\n4. None of the these\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==3)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3.X is a four-bit integer\n\n");  
        }  
  
        printf("\nQ(5). Why is a macro used in place of a function? \n1. It reduces execution time.\n2. It reduces code size.\n3. It increases execution time.\n4. It increases code size.\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2. It reduces code size.\n\n");  
        }  
  
        printf("\nQ(6). In the C language, the constant is defined _______. \n1. Before main\n2. After main\n3. Anywhere, but starting on a new line.\n4. None of the these.\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==3)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3. Anywhere, but starting on a new line.\n\n");  
        }  
  
        printf("\nQ(7). which of he following is a read only memory storage device  \n1.Flash drive\n2. Floppy disk\n3. CDROM\n4. Hard disk\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==3)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3. CDROM\n\n");  
        }  
  
        printf("\nQ(8). A pointer is a memory address. Suppose the pointer variable has p address 1000, and that p is declared to have type int*, and an int is 4 bytes long. What address is represented by expression p + 2?\n1. 1002\n2. 1004\n3. 1006\n4. 1008\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==4)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. 1008\n\n");  
        }  
  
        printf("\nQ(9). Directives are translated by the \n1. Pre-processor\n2. Compiler\n3. Linker\n4. Editor\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1. Pre-processor\n\n");  
        }  
  
        printf("Q(10). How many bytes does int = D use? \n1. 0\n2. 1\n3. 5\n4. 2 or 4\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==4)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. 2 or 4\n\n");  
        }  
  
        
        
  
  
        //score_trackering number of correct answers and, ratings  
        if(score_tracker > 0)  
        {  
                printf("Thanks for playing, Your scored: %d points \t", score_tracker*5);  
  
                p.player_score=score_tracker*10;  
  
                if(p.player_score >= 80)  
                {  
                    printf("Rating: * * * * *");  
                    p.player_rating=5;  
                }  
                else if(p.player_score >= 60 && p.player_score < 80)  
                {  
                    printf("Rating: * * * *");  
                    p.player_rating=4;  
                }  
                else if(p.player_score >= 40 && p.player_score < 60)  
                {  
                    printf("Rating: * * *");  
                  p.player_rating=3;  
                }  
                else if(p.player_score >= 20 && p.player_score < 40)  
                {  
                    printf("Rating: * *");  
                    p.player_rating=2;  
                }  
                else if(p.player_score < 20)  
                {  
                    printf("Rating: *");  
                     p.player_rating=1;  
                }  
  
            //writing to file  
  
                    fprintf(fp,"%s %d %d", p.player_name,p.player_score,p.player_rating);  
                    fclose(fp);  
        }  
        else  
        {  
            printf("Try again!");  
        }  
}  
  
void high_score()  
{  
  
    int choice_Y_N;  
  
    FILE *fp;  
    if((fp=fopen("\\tmp\play2.txt", "r"))==NULL)  
          {  
                //printf("error opening file\n");  
                printf("\nNo games played yet!\n");  
            }  
            else  
            {  
  
    printf("\n******************************* HIGH SCORES *******************************\n\n");  
    printf("NAME     POINTS     RATING\n");  
    while(fscanf(fp,"%s %d %d",p.player_name,&p.player_score, &p.player_rating) !=EOF)  
    {  
        printf("____________________________\n");  
        printf("%s     %d     %d star(s)\n\n",p.player_name,p.player_score,p.player_rating);  
    }  
  
    fclose(fp);  
  
    }  
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");  
    scanf("%d",&choice_Y_N);  
  
    if(choice_Y_N==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
} 
