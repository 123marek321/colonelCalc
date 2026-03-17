
#include <iostream>
using namespace std;
//X=quantity, ZL=money XP=experience TP=trade points REP= reputation, Time = quest refresh in hours




void main() {

	long legsZL{ 45000 }, legsXP{ 32000 };
	double legsX{ 100 }, legsTP{ 20 }, legsREP{ 50 }, legsTIME{ 16 };
	//quest data

	//input
	long inputX{}, inputZL{};
	cout << "How many legs did you buy: ";
	cin >> inputX;
	cout << "How much money for 1: ";
	cin >> inputZL;
	// start gross rewards
	cout << "-----------------------------\n";
	cout << "You will get the following \n";


	long zl = (legsZL / legsX) * inputX;//gross revenue
	long netzl = zl - (inputX * inputZL);//revenue minus cost of legs

	long tp = (legsTP / legsX) * inputX;//trade points
	int tools = tp / 200;// how many old tools can be bought with trade points

	long total=netzl;

	if (tools > 0) { // if you can, adds revenue from tools to total profits
	    total = (tools*391027)+netzl;
	}
	
	long xp = (legsXP / legsX) * inputX;
	cout << "Experience: " << xp << '\n';;

	long rep = (legsREP / legsX) * inputX;
	cout << "Reputation: " << rep << '\n';

	if (tp >= 200) { //if enough for a tool, mention it
		cout << "Trade points: " << tp << ", which is enough for " << tools << " old tool(s)" <<'\n';
	}
	else {
		cout << "Trade points: " << tp << '\n';
	}

	cout << "Profits: " << netzl << '\n';
	
	if (tools>0) { //if enough for a tool, add them to the total profits
		cout << "Profits + old tools: " << total << '\n';
	}



}