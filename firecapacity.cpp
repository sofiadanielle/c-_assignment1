#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int numPeople;
  int roomCap;

  cout << "What is the room capacity?: " << endl;
  cin >> roomCap;
  cout << "How many people are attneding the meeting?: " << endl;
  cin >> numPeople;

  if(roomCap < numPeople){
    int leave = numPeople - roomCap;
    cout << "You are past room capacity, " << leave << " people need to leave." << endl;
  } else if(roomCap >= numPeople) {
    int addPeople = roomCap - numPeople;
    cout << "It is legal to hold the meeting, you can add " << addPeople << " people before you reach room capacity." << endl;
  }

}
