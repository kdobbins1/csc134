/*
CSC 134
M2LAB1
Keion Dobbins
02/16/25
*/
// I asked ChatGPT to make a code to simulate a sneaker raffle.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for shuffle
#include <random>   // for random_device and mt19937
#include <map>


using namespace std;
// Function to represent a pair of sneakers
struct Sneaker {
    string size;
    double retail = 220.00; // price of each pair
};

// Function to simulate the sneaker raffle
vector<string> runRaffle(vector<string> participants, int numWinners) {
    numWinners = min(numWinners, static_cast<int>(participants.size())); // ensure valid count

    // shuffle the participants list
    random_device rd;
    mt19937 g(rd()); // Mersenne Twister PRNG??
    shuffle(participants.begin(), participants.end(), g);
    // select the first winner
    vector<string>
    winners(participants.begin(), participants.begin() +numWinners);
    return winners;
}

int main() 
{
// seed the random number generator (only needed once)
srand(time(0));
// Letters representing customers initials
vector<string> participants = {
    "AB", "JR", "JB", "KD", "KK", "NJ", "JJ", "BS", "AC", "DW", "MJ", "KB",
    "YN", "LB", "QB" };
// Sizes for 10 pairs
vector<Sneaker> sneakers = {
    {"8"}, {"8"}, {"9"}, {"9"}, {"9"}, {"10"}, {"10"}, {"11"}, {"12"}, {"13"} };
// map how to track how many winners per size
map<string, vector<string>> sizeWinners;
    // simulate the raffle for each size group
    for (const Sneaker& sneaker : sneakers) {
        vector<string> winners = runRaffle(participants, 1);  // pick 1 winner for this size
            if (!winners.empty()){
        sizeWinners[sneaker.size].push_back(winners[0]);  // store winner
        }
 }
        // print the raffle results
    cout << "----- Sneaker Raffle List-----" << endl;
    for (const auto& entry : sizeWinners) {
        cout << "Size " << entry.first << ": ";
        for (const string& winner : entry.second) {
            cout << winner << " ";
        } 
        cout << " " << endl;
    }
    cout << " " << endl;
return 0; 
}