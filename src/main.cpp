//==============================================================================
///
/// @file
/// @brief Программа для робота Карела и стартовая функция
///
//==============================================================================


#include "karel.h"


//==============================================================================
/// Программа для робота Карела
///
/// @todo Добавить программу для Карела
void turnRight() {
TurnLeft();
TurnLeft();
TurnLeft();
}

void turnAround() {
TurnLeft();
TurnLeft();
}

void KarelProgram() {
    while (!BeepersPresent()) {
        TurnLeft();
    if (FrontIsClear()) {
        Move();
    } else {
        turnRight();
    if (FrontIsClear()) {
        Move();
    } else {
        turnRight();
    if (FrontIsClear()) {
        Move();
    } else {
        turnRight();
}}}}}


//==============================================================================
/// Стартовая функция
///
int main() {
    LoadWorld("worlds/Maze_01.w");
    KarelProgram();
    Finish();
    return 0;
}
