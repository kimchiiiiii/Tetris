#pragma once
#include <SDL.h>

// A simple enumeration to hold all possible actions when playing.
enum class Action
{
    stay_idle, move_down, move_left, move_right, drop, rotate, hold
};

class InputManager
{
public:
    void clearEventQueue();
    Action getAction();
    bool isGameExiting();
    bool isGamePlayedAgain();
    void pollAction(SDL_Event event);
    void setExit();
private:
    bool play_again = false;
    bool quit_game = false;
    Action action = Action::stay_idle;
};
