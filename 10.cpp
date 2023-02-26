/*10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically.*/

#include <iostream>
#include <string>

class Player {
public:
    // parameterized constructor to initialize player number, name, and number of matches
    Player(int playerNo, std::string playerName, int numMatches);

    // destructor to free memory allocated for arrays
    ~Player();

    // function to set the number of goals for a particular match
    void setGoalsForMatch(int matchNo, int numGoals);

    // function to get the total number of goals for all matches played
    int getTotalGoals();

private:
    int playerNo;
    std::string playerName;
    int numMatches;
    int* goalsArray;  // dynamically allocated array to store number of goals for each match
};

Player::Player(int playerNo, std::string playerName, int numMatches) {
    this->playerNo = playerNo;
    this->playerName = playerName;
    this->numMatches = numMatches;

    // allocate memory for the goals array
    goalsArray = new int[numMatches];
}

Player::~Player() {
    // free the memory allocated for the goals array
    delete[] goalsArray;
}

void Player::setGoalsForMatch(int matchNo, int numGoals) {
    // make sure the match number is valid
    if (matchNo >= 0 && matchNo < numMatches) {
        // set the number of goals for the specified match
        goalsArray[matchNo] = numGoals;
    } else {
        std::cout << "Invalid match number!\n";
    }
}

int Player::getTotalGoals() {
    int totalGoals = 0;
    for (int i = 0; i < numMatches; i++) {
        totalGoals += goalsArray[i];
    }
    return totalGoals;
}

int main() {
    // create a player object with 5 matches
    Player player1(1, "John", 5);

    // set the number of goals for each match
    player1.setGoalsForMatch(0, 2);
    player1.setGoalsForMatch(1, 1);
    player1.setGoalsForMatch(2, 0);
    player1.setGoalsForMatch(3, 3);
    player1.setGoalsForMatch(4, 1);

    // get the total number of goals and display it
    int totalGoals = player1.getTotalGoals();
    std::cout << "Total goals scored by " << player1.playerName << " in " << player1.numMatches << " matches: " << totalGoals << "\n";

    return 0;
}
