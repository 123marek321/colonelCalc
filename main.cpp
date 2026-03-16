#include <iostream>
using namespace std;

//calculates rewards for legs
//
//
//
void calculateLegs() {
	//Q=quantity, ZL=money XP=experience TP=trade points REP= reputation, Time = quest refresh in hours
	float legsQ{ 100 }, legsZL{ 45000 }, legsXP{ 32000 }, legsTP{ 20 }, legsREP{ 50 }, legsTIME{ 16 };
	cout << "How many legs did you buy: ";
	float inpQ{}, inpZL{};
	cin >> inpQ;
	cout << "How much money for 1: ";
	cin >> inpZL;
	// start gross rewards
	cout << "-----------------------------\n";
	cout << "You will get the following \n";
	cout << "Money: " << ((legsZL / legsQ) * inpQ) - inpZL * inpQ << " rubles" << '\n'; // net profit using inpZL
	cout << "Experience: " << (legsXP / legsQ) * inpQ << '\n';
	cout << "Trade points: " << (legsTP / legsQ) * inpQ << '\n';
	cout << "Reputation: " << (legsREP / legsQ) * inpQ << '\n';
	// end gross rewards
	// old tool calculation
	int tools = ((legsTP / legsQ) * inpQ) / 200;
	cout << "You can get " << tools << " old tools" << '\n';
}








void main() {
	//selection of resource
	cout << "Welcome to MCN Calculator: \n";
	cout << "-----------------------------\n";
	cout << "1[Big spider legs]\n";
	cout << "2[Hog mutant knees]\n";
	cout << "3[Shelled verliock paws]\n";
	cout << "4[Peat spider legs]\n";
	cout << "-----------------------------\n";
	cout << "Select a numer 1-4: ";
	//start of selection code
	int category{};
	cin >> category;
	if (category == 1) {
		calculateLegs();
	}

	
	//Q=quantity, ZL=money XP=experience TP=trade points REP= reputation, Time = quest refresh in hours
	float kneeQ{ 15 } , kneeZL{ 90000 }, kneeXP{ 86000 }, kneeTP{ 40 }, kneeREP{ 80 }, kneeTIME{ 12 };
	float shellQ{ 3 }, shellZL{ 60000 }, shellXP{ 70000 }, shellTP{ 50 }, shellREP{ 100 }, shellTIME{ 8 };
	float peatQ{ 8 },   peatZL{   0   }, peatXP{ 250000 }, peatTP{ 300 }, peatREP{ 500 }, peatTIME{ 48 };
	// end of dataset
	
	
	

}