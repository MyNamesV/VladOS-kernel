#include <stdio.h>
#include <string.h>

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

int main()
{
    char name[100];        // Массив для имени
    char compname[100];    // Массив для имени компьютера
    char command[100];     // Массив для команды

    printf("Enter your name: ");
    scanf("%99s", name);
    printf("Enter your computer-name: ");
    scanf("%99s", compname);
    
    printf("\nHello World! Welcome to the VladOS\n");
    while(1)
    {
        printf("\nEnter command, for help using '");
    printf(GREEN "help" RESET);
    printf("'\n");

    printf(GREEN"%s"RESET"@"RED"%s"RESET":~$ ", name, compname);
    scanf("%99s", command);
    
    if(strcmp(command, "help") == 0){
    
        printf("======== "GREEN"Available commands"RESET" ========\n\n");
        printf("1)" GREEN "help" RESET "     - Show this help message\n");
        printf("2)" GREEN "exit" RESET "     - Exit the system\n");
        printf("3)" GREEN "clear" RESET "    - Clear the screen\n");
        printf("4)" GREEN "date" RESET "     - Show current date\n");
        printf("===================================");
    }
    else if(strcmp(command, "date") == 0){
        printf("It's your date: ");
    }
    else {
        printf(RED "Unknown command: %s" RESET "\n", command);
        printf("Type 'help' for available commands\n");
    }
    
    }
    return 0;
}