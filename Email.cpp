#include "Email.h"

void Email::setEmail(std::string em)
{
	emailAdress = em;
}

std::string Email::getEmail()
{
	return emailAdress;
}

int Email::checkAddress(std::string em)
{
	atCount = 0;
	dotCount = 0; 

	if (em[0] == '@')
		return 2;

	for (int i = 0; i < em.size(); i++)
	{
		if (em[i] == '@')
			atCount++;
		if (em[i] == '.')
			dotCount++;
	}
	if (atCount > 1)
		return 1;

	if (dotCount < 1)
		return 3;

	return 0;
}

void Email::collectEmail()
{
	std::string address;
	int errorCheck;
	bool valid = false;
	std::cout << "Enter Email address: ";
	while (!valid)
	{
		try
		{
			std::cin >> address;
			setEmail(address);
			checkAddress(address);
			errorCheck = checkAddress(address);
			if ((errorCheck >= 1) && (errorCheck <= 3))
			{
				throw EmailExceeptions();
				valid = false;
			}
			else
			{
				std::cout << "\nemail address accepted.";
				valid = true;
			}
		}
		catch (Email::EmailExceeptions e)
		{
			if (errorCheck == 1)
			{
				std::cout << e.multipleAtSigns;
				std::cin.clear();
				std::cin.ignore(100, '\n');
			}
			else if (errorCheck == 2)
			{ 
				std::cout << e.invalidStart;
				std::cin.clear();
				std::cin.ignore(100, '\n');
			}
			else
			{
				std::cout << e.noTDL;
				std::cin.clear();
				std::cin.ignore(100, '\n');
			}
		}
	}
}