

#include <iostream>

enum State {
    ACTIVE,
    IDLE,
    DEAD
};

enum class MachineState {
    ALIVE,
    NOT_ALIVE,
    SLEEP
};



int main() {
    State s = ACTIVE;
    int state = IDLE;

    MachineState ms = MachineState::ALIVE;
    auto sleepy = MachineState::SLEEP;

    std::cout << "firt machine: " << s << "\t" << state << "\n";
    std::cout << "second machine: " << static_cast<int>(ms) << "\t" << static_cast<int>(sleepy);

}
