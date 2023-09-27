#include <stdio.h>
int main()
{
    char ch;
    start:
    printf("\033[104;93m-------------------<  KBC BY Vighnesh Singhal  >-------------------");
    printf("\n%65s\n%27s< P > Play%27s \n%27s< Q > Quit%27s \033[0m"," "," "," "," "," ");
    printf("\nEnter your choice : ");
    scanf("%c",&ch);
    getchar();

    if(ch == 'P' || ch == 'p')
    {
        level:
        printf("\033[H\033[2J\033[104;93m------------------------<  Select Level  >------------------------");
        printf("\n%66s\n%27s< E > Easy%28s \n%27s< M > Medium%26s \n%27s< H > Hard%28s \033[0m"," "," "," "," "," "," "," ");
        printf("\nEnter your choice: ");
        scanf("%c",&ch);
        getchar();

        if(ch == 'E' || ch == 'e')
        {
            printf("\033[104;93m\nKhela suru karte hain\n----< 'OS' compurter abbreviation usually means ? >----");
            printf("\n%100s\n%18s--------< a) Order of Significance >---------  --------< b) Open Software>--------%18s\n%18s--------< c) Operating System  >---------  --------< d) Optical Sensor >--------%18s\033[0m"," "," "," "," "," ");
            printf("\nEnter your choice : ");
            scanf("%c",&ch);
            getchar();

            if (ch == 'C' || ch == 'c')
                printf("\033[32mOperating System\033[0m is correct \n App jeet chuke hain 7 cr rupee");
            else
            {
                printf("\033[31mWrong\033[0m");
            }
        }
        else if(ch == 'M' || ch == 'm')
        {
            printf("\033[104;93m\nKhela suru karte hain\n--------< How many keywords are reserved in C programming ? >--------");
            printf("\n%95s\n --------< a) 30>---------  --------< b) 32>--------\n --------< c) 42 >---------  --------< d) 40 >--------\033[0m"," ");
            printf("\nEnter your choice : ");
            scanf("%c",&ch);
            getchar();

            if (ch == 'B' || ch == 'b')
            {
                printf("\033[32m 32\033[0m is correct \n App jeet chuke hain 7 cr rupee");
            }   
            else
            {
                printf("\033[31mWrong\033[0m");
            }
        }
        else if(ch == 'H' || ch == 'h')
        {
        	 printf("\033[104;93m\nKhela suru karte hain\n--------< On the basis of Historical Encycopaedia how many programming languages made human ? >--------");
            printf("\n%95s\n --------< a) 8952>---------  --------< b) 8945>--------\n --------< c) 8954 >---------  --------< d) 9542 >--------\033[0m"," ");
            printf("\nEnter your choice : ");
            scanf("%c",&ch);
            getchar();

            if (ch == 'B' || ch == 'b')
            {
                printf("\033[32m 8945\033[0m is correct \n App jeet chuke hain 7 cr rupee");
            }   
            else
            {
                printf("\033[31mWrong\033[0m");
            }
            
        }
        else
        {
            printf("Wrong Input Try again");
            goto level;
        }
    }
    else if (ch == 'Q' || ch == 'q')
    {
        printf("Tussi Ja re ho.");
        return 0;
    }
    else
    {
        printf("Wrong Input Try again");
        goto start;
    }
    printf("\n\nWant To Play again ? (Y/N) : ");
    scanf("%c",&ch);
    getchar();
    if(ch == 'Y' || ch == 'y')
        goto level;
    else
        goto start;
    return 0;
}
