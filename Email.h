#pragma once
#include <iostream>
class Email
{
private:
	std::string emailAdress;
	int atCount;
	int dotCount;
public:
	class EmailExceeptions
	{
	public:
		std::string multipleAtSigns = "Error. The entered Email address contains too many @'s. \nEnter corrected Email address: ";
		std::string invalidStart = "Error. The entered Email address begins with '@'. \n Enter corrected Email address: ";
		std::string noTDL = "Error. The entered Email address is missing, at least, one '.' to signify the TDL. \nEnter corrected Email address: ";
	};
	void setEmail(std::string em);
	std::string getEmail();
	int checkAddress(std::string em);
	void collectEmail();
};

