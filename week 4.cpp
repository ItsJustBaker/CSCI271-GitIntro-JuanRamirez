

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	string month;
	string day;
	string zodicSign;
	
	int birthMonth;
	int birthDay;
	
	name = " Enter your full name ";
	month = " Enter your Birth Month (1-12) ";
	day = " Enter your Birthday (1-31) ";
	

	cout << name;
	getline(cin, name);
	
	cout << month;
	cin >> birthMonth;

	cout << day;
	cin >> birthDay;

	if ((birthMonth == 3 && birthDay >= 21) || (birthMonth == 4 && birthDay <= 19))
		zodicSign = " Aries ";
	else if ((birthMonth == 4 && birthDay >= 20) || (birthMonth == 5 && birthDay <= 20))
		zodicSign = " Taurus ";
	else if ((birthMonth == 5 && birthDay >= 21) || (birthMonth == 6 && birthDay <= 20))
		zodicSign = " Gemini ";
	else if ((birthMonth == 6 && birthDay >= 21) || (birthMonth == 7 && birthDay <= 22))
		zodicSign = " Cancer ";
	else if ((birthMonth == 7 && birthDay <= 23) || (birthMonth == 8 && birthDay <= 22))
		zodicSign = " Leo ";
	else if ((birthMonth == 8 && birthDay <= 23) || (birthMonth == 9 && birthDay <= 22))
		zodicSign = " Virgo ";
	else if ((birthMonth == 9 && birthDay <= 23) || (birthMonth == 10 && birthDay <= 22))
		zodicSign = " Libra ";
	else if ((birthMonth == 10 && birthDay <= 23) || (birthMonth == 11 && birthDay <= 21))
		zodicSign = " Scorpio ";
	else if ((birthMonth == 11 && birthDay <= 22) || (birthMonth == 12 && birthDay <= 21))
		zodicSign = " Sagittarius ";
	else if ((birthMonth == 12 && birthDay <= 22) || (birthMonth == 1 && birthDay <= 19))
		zodicSign = " Capricorn ";
	else if ((birthMonth == 1 && birthDay <= 20) || (birthMonth == 2 && birthDay <= 18))
		zodicSign = "Aquarius";
	else if ((birthMonth == 2 && birthDay <= 19) || (birthMonth == 3 && birthDay <= 20))
		zodicSign = "Pisces";

	cout << " Hello " << name << endl << " Your zodiac sign is " << zodicSign << endl;
	
}
