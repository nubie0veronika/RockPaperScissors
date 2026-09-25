#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char userChoice, char computerChoice);
int main() {
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice is: " ;
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice is: " ;
    showChoice(computer);

    chooseWinner(player, computer);
return 0;
}
char getUserChoice(){
    char player;
    do{
        std::cout << " Rock-Paper-Scissors Game\n";
        std::cout << "************************\n";
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'s' for Scissors\n";
        std::cin >> player;
    }while (player != 'r' && player != 'p' && player != 's');
    return player;
}
char getComputerChoice() {

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice) {
    switch(choice) {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }
}

void chooseWinner(char userChoice, char computerChoice){
    switch(userChoice){
        case 'r': if(computerChoice == 'r'){
            std::cout << "It's a tie!\n";
        } else if(computerChoice == 'p'){
            std::cout << "Computer wins!\n";
        } else {
            std::cout << "You win!\n";
        }
        break;
        case 'p': if(computerChoice == 'r'){
            std::cout << "You win!!\n";
        } else if(computerChoice == 'p'){
            std::cout << "It's a tie!\n";
        } else {
            std::cout << "Computer wins!\n";
        }
        break;
        case 's': if(computerChoice == 'r'){
            std::cout << "Computer wins!\n";
        } else if(computerChoice == 'p'){
            std::cout << "You win!!\n";
        } else {
            std::cout << "It's a tie!\n";
        }
        break;
    }
}