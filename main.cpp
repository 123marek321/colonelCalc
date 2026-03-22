#include <iostream>
using namespace std;
//X=quantity, ZL=money XP=experience TP=trade points REP= reputation, Time = quest refresh in hours
void legs();
void knees();
void shelled();
void peat();


void main()
{
	cout << "Welcome to MCN colonel calculator:\n";
	cout << "|-------------------------------------|\n";
	cout << "|1: Big spider legs                   |\n";
	cout << "|2: Hog Mutant Knees                  |\n";
	cout << "|3: Shelled Verliock Paws             |\n";
	cout << "|4: Peat Bog Spider Legs              |\n";
	cout << "|-------------------------------------|\n";
	cout << "Type a number 1-4: ";
	int selection{};
	cin >> selection;


	if (selection == 1) {
		legs();
	}
	else if (selection == 2) {
		knees();
	}
	else if (selection == 3) {
		shelled();
	}
	else if (selection == 4) {
		peat();
	}
}


void legs() {
	long legsZL{ 45000 }, legsXP{ 32000 };
	double legsX{ 100 }, legsTP{ 20 }, legsREP{ 50 }, legsTIME{ 16 };
	//quest data

	//input
	long inputX{}, inputZL{};
	cout << "How many legs did you buy: ";
	cin >> inputX;
	cout << "How much did you pay for 1: ";
	cin >> inputZL;
	// start gross rewards
	cout << "-----------------------------\n";
	//cout << "You will get the following \n";


	long zl = (legsZL / legsX) * inputX;//gross revenue
	long netzl = zl - (inputX * inputZL);//revenue minus cost of legs

	long tp = (legsTP / legsX) * inputX;//trade points
	int tools = tp / 200;// how many old tools can be bought with trade points

	long total = netzl;

	if (tools > 0) { // if you can, adds revenue from tools to total profits
		total = (tools * 391027) + netzl;
	}

	long xp = (legsXP / legsX) * inputX;
	cout << "Experience: " << xp << '\n';;

	long rep = (legsREP / legsX) * inputX;
	cout << "Reputation: " << rep << '\n';

	if (tp >= 200) { //if enough for a tool, mention it
		cout << "Trade points: " << tp << ", which is enough for " << tools << " old tool(s)" << '\n';
	}
	else {
		cout << "Trade points: " << tp << '\n';
	}

	cout << "Profits: " << netzl << '\n';

	if (tools > 0) { //if enough for a tool, add them to the total profits
		cout << "Profits + old tools revenue: " << total << '\n';
	}
}


void knees() {
	long kneesZL{ 90000 }, kneesXP{ 86000 };
	double kneesX{ 15 }, kneesTP{ 40 }, kneesREP{ 80 }, kneesTIME{ 12 };
	//quest data

	//input
	long inputX{}, inputZL{};
	cout << "How many knees did you buy: ";
	cin >> inputX;
	cout << "How much did you pay for 1: ";
	cin >> inputZL;
	// start gross rewards
	cout << "-----------------------------\n";
	//cout << "You will get the following \n";


	long zl = (kneesZL / kneesX) * inputX;//gross revenue
	long netzl = zl - (inputX * inputZL);//revenue minus cost of knees

	long tp = (kneesTP / kneesX) * inputX;//trade points
	int tools = tp / 200;// how many old tools can be bought with trade points

	long total = netzl;

	if (tools > 0) { // if you can, adds revenue from tools to total profits
		total = (tools * 391027) + netzl;
	}

	long xp = (kneesXP / kneesX) * inputX;
	cout << "Experience: " << xp << '\n';;

	long rep = (kneesREP / kneesX) * inputX;
	cout << "Reputation: " << rep << '\n';

	if (tp >= 200) { //if enough for a tool, mention it
		cout << "Trade points: " << tp << ", which is enough for " << tools << " old tool(s)" << '\n';
	}
	else {
		cout << "Trade points: " << tp << '\n';
	}

	cout << "Profits: " << netzl << '\n';

	if (tools > 0) { //if enough for a tool, add them to the total profits
		cout << "Profits + old tools revenue: " << total << '\n';
	}
}


void shelled() {
	long shelledZL{ 60000 }, shelledXP{ 70000 };
	double shelledX{ 3 }, shelledTP{ 50 }, shelledREP{ 100 }, shelledTIME{ 8 };
	//quest data

	//input
	long inputX{}, inputZL{};
	cout << "How many shelled paws did you buy: ";
	cin >> inputX;
	cout << "How much did you pay for 1: ";
	cin >> inputZL;
	// start gross rewards
	cout << "-----------------------------\n";
	//cout << "You will get the following \n";


	long zl = (shelledZL / shelledX) * inputX;//gross revenue
	long netzl = zl - (inputX * inputZL);//revenue minus cost of shelled paws

	long tp = (shelledTP / shelledX) * inputX;//trade points
	int tools = tp / 200;// how many old tools can be bought with trade points

	long total = netzl;

	if (tools > 0) { // if you can, adds revenue from tools to total profits
		total = (tools * 391027) + netzl;
	}

	long xp = (shelledXP / shelledX) * inputX;
	cout << "Experience: " << xp << '\n';;

	long rep = (shelledREP / shelledX) * inputX;
	cout << "Reputation: " << rep << '\n';

	if (tp >= 200) { //if enough for a tool, mention it
		cout << "Trade points: " << tp << ", which is enough for " << tools << " old tool(s)" << '\n';
	}
	else {
		cout << "Trade points: " << tp << '\n';
	}

	cout << "Profits: " << netzl << '\n';

	if (tools > 0) { //if enough for a tool, add them to the total profits
		cout << "Profits + old tools revenue: " << total << '\n';
	}
}


void peat() {
	long peatZL{ 0 }, peatXP{ 250000 };
	double peatX{ 8 }, peatTP{ 300 }, peatREP{ 500 }, peatTIME{ 48 };
	//quest data

	//input
	long inputX{}, inputZL{};
	cout << "How many peat legs did you buy: ";
	cin >> inputX;
	cout << "How much did you pay for 1: ";
	cin >> inputZL;
	// start gross rewards
	cout << "-----------------------------\n";
	//cout << "You will get the following \n";


	long zl = (peatZL / peatX) * inputX;//gross revenue
	long netzl = zl - (inputX * inputZL);//revenue minus cost of peat legs

	long tp = (peatTP / peatX) * inputX;//trade points
	int tools = tp / 200;// how many old tools can be bought with trade points

	long total = netzl;

	if (tools > 0) { // if you can, adds revenue from tools to total profits
		total = (tools * 391027) + netzl;
	}

	long xp = (peatXP / peatX) * inputX;
	cout << "Experience: " << xp << '\n';;

	long rep = (peatREP / peatX) * inputX;
	cout << "Reputation: " << rep << '\n';

	if (tp >= 200) { //if enough for a tool, mention it
		cout << "Trade points: " << tp << ", which is enough for " << tools << " old tool(s)" << '\n';
	}
	else {
		cout << "Trade points: " << tp << '\n';
	}

	cout << "Profits: " << netzl << '\n';

	if (tools > 0) { //if enough for a tool, add them to the total profits
		cout << "Profits + old tools revenue: " << total << '\n';
	}
}