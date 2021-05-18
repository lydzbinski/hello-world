/*
--------------------------------------------------------------------------------
                                PONG GAME           
--------------------------------------------------------------------------------
A classic game where two paddles on eithe side of the board moves up and down to
prevent a moving ball from passing behind them. 

CREATED BY:     Brandon Lydzbinski
STARTED:        2021-05-18
COMPLETED:      2021-05-18
--------------------------------------------------------------------------------
*/
/*
--------------------------------------------------------------------------------
                                LIBARIES INCLUDED
--------------------------------------------------------------------------------
*/
#include <iostream>
#include <windows.h>
/*
--------------------------------------------------------------------------------
                                    VARIABLES
--------------------------------------------------------------------------------
*/
int PlayerIntInput;
int PlayerOnePaddle = 5;
int BallxPosition = 1;
int BallyPosition = 5;
int PlayerTwoPaddle = 5;
/* 
--------------------------------------------------------------------------------
                                    FUNCTIONS
--------------------------------------------------------------------------------
*/
void PrintIntroduction(){
    /* Print welcome message to terminal.
       Purpose is to provide feedback that the program is running.
    
       PrintIntroduction() -> str */
    std::cout << "---------------" << std::endl;
    std::cout << "WELCOME TO PONG" << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "program running...\n";
    std::cout << "Two Player Game: Press 1 and Enter...\n";
    std::cin >> PlayerIntInput;
}

void PrintBoard(){
    /* Print the game board without any paddles or balls.
       Board Size = 50 x 12 (rows x column).
      
       PrintBoard() -> str() */
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "-                                                -" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
}

void PrintTop(){
    /* Print the string illustration of the top and bottom rows of the game board.
       PrintTop() -> str() */
    std::cout << "--------------------------------------------------" << std::endl;
}

void PrintPlayerOnePaddle(){
    /* Print the string illustration for player one paddles.
       PrintPlayerOnePaddle() -> str() */
    std::cout << "|" << std::endl;
}
void PrintPlayerTwoPaddle(){
    /* Print the string illustration for player one paddles.
       PrintPlayerTwoPaddle() -> str() */
    std::cout << "|" << std::endl;
}
void PrintBall(int x){
    /* Print the illustration of a single row, given the current x position of the ball.
       PrintBall(int) -> str() */
    for (int i = 1; i <= 46; i++){
        if(i == x){
            std::cout << "0";
        }
        else{
            std::cout << " ";
        }
    }
}
void PrintBoard(int POneP, int Ballx, int Bally, int PTwoP){
    /* Print the illustration of a the entire game board given the y coordinate of PlayerOnesPaddle,
       the x and y coordinates of the Ball, and the y coordinate of Player Twos Paddle.
       PrintBall(int, int, int, int) -> str() */
    PrintTop();
    for (int y = 1; y <= 10; y++){
        std::cout << "-";
        if(y == POneP){
            std::cout << "|";
        }
        else{
            std::cout << " ";
        }
        if(Bally == y){
            PrintBall(Ballx);
        }
        else{
            std::cout << "                                              ";
        }
        if(y == PTwoP){
            std::cout << "|";
        }
        else{
            std::cout << " ";
        }
        std::cout << "-\n";
    }
    PrintTop();
}


/* 
--------------------------------------------------------------------------------
                            MAIN FUNCTION OF THE PROGRAME
--------------------------------------------------------------------------------
*/
int main(){
    PrintIntroduction();
    while(BallxPosition <= 48){
        PrintBoard(PlayerOnePaddle, BallxPosition, BallyPosition, PlayerTwoPaddle);
        Sleep(20);
        BallxPosition++;
        system("CLS");
        
    }
    return 0;
}