#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// Get the user's name
	string user_name = get_string("What is your name? ");

	// Get user's address
	string user_address = get_string("Where do you live? ");

	// Check if file exist

	// If the file doesn't exist; create it
	FILE* file_pointer;

	// Write data into file, if it doesn't exist create it
	file_pointer = fopen("user_informations.txt", "w+");

	if(file_pointer == NULL)
	{
		printf("Error: file doesn't exist and can't be created!\n");
		return 1;
	}

	// If file exists write the data into it

	return 0;
}