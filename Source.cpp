/*this program will take in user input from the console and eventually be exported to a
sql database
Marcus Cantu 3/21/2017
*/

#include <iostream>
#include <string>

using namespace std;


//creating account method
int createAccount()
{
	//initilizing variables
	string userName, passWord;

	//username
	cout << "Enter username: ";
	cin >> userName; 

	//password
	cout << "Enter password: "; 
	cin >> passWord;  

	return 0;  

}

int main()
{
	//initilizing variables
	string userName, passWord;
	char accountAnswer;

	//Prompting if user has created account
	cout << "Do you have an account? Y or N ";
		cin >> accountAnswer;

	//if account the user has entered N for previous question console prints you must create account
	if (accountAnswer == 'N' || accountAnswer=='n')
	{
		cout << "You must create an account. "; 

	}

	//if answer is yes the create account method is called 
	if (accountAnswer == 'Y' || accountAnswer == 'y')
		createAccount(); 

}
