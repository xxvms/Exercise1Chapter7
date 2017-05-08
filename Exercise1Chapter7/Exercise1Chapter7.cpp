// Exercise1Chapter7.cpp : Defines the entry point for the console application.
// reverse string.
#include <iostream>
#include <cstring> // for strlen() 

void reversit(char* napoleon_);

int main()
{
	char napoleon[] = "1234567890qwertyuiopasdfg"; //Able was I ere I saw Elba

	std::cout << napoleon << std::endl;

	

	reversit(napoleon);

	system("pause");
    return 0;
}


void reversit(char* napoleon_)
{
	char rev[26];
	strcpy(rev, napoleon_);

	//std::cout << "25 " << rev[25] << std::endl;
	//std::cout << "24 " << rev[24] << std::endl;

	for (int i = 0, j = 24 ; i < strlen(napoleon_); i++, j--)
	{
		napoleon_[i] = rev[j];
	}
	std::cout << napoleon_ << std::endl;
}
