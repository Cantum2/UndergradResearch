/*this program will take in user input from the console and eventually be exported to a
sql database
Marcus Cantu 3/23/2017
*/

#include <iostream>
#include <string>

using namespace std;

//initilizing global variables 
 string userName, passWord;
 int creditCard; 


int createAccount()
{
	//username
	cout << "Enter username: ";
	cin >> userName; 

	//password
	cout << "Enter password: "; 
	cin >> passWord;  

	//credit card
	cout << "Enter your card info: ";
	cin >> creditCard; 

	return 0;  
}

static int passwordEncrypt()
{
	string toEncrypt = passWord;
	char keyToEncrypt = 's'; 

	//encrypting the password
	for (int temp = 0; temp < toEncrypt.size(); temp++)
		toEncrypt[temp] ^= keyToEncrypt;
	cout << "Your password encrypted is: " << toEncrypt;
	return 0;
}

int main()
{
	//initilizing variables
	char createAnswer;


	do
	{
		string userName, passWord;
		char accountAnswer, encryptAnswer;

		//Prompting if user has created account
		cout << "Do you have an account? Y or N ";
		cin >> accountAnswer;

		//if account the user has entered N for previous question console prints you must create account
		if (accountAnswer == 'N' || accountAnswer == 'n')
		{
			cout << "You must create an account. ";
			createAccount();
		}

		//if answer is yes the create account method is called 
		if (accountAnswer == 'Y' || accountAnswer == 'y')
			createAccount();

		//Prompting for password encryption
		cout << "Would you like to see what your password looks like encrypted? Y or N";
		cin >> encryptAnswer;

		if (encryptAnswer == 'Y' || encryptAnswer == 'y')
			passwordEncrypt();

		cout << "Would you like to create another account? Y or N";
		cin >>createAnswer;

		
	} while (createAnswer == 'Y' || createAnswer == 'y');
}

