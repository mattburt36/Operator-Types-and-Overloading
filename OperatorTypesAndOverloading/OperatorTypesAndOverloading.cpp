#include <string> 
#include <algorithm>
#include <iostream> 
int main()
{
	using namespace std; 

	string sampleStr("Hello String! Wake up to a beautiful day!");
	cout << "The original sample string is: " << "\n"; 
	cout << sampleStr << "\n" << "\n";

	//Delete characters given position and count 
	cout << "Trunctuating the second sentence: " << "\n";
	sampleStr.erase(13, 28);
	cout << sampleStr << "\n" << "\n"; 

	//Find character 'S' using find() algorithm 
	string::iterator iCharS = find(sampleStr.begin(),
		sampleStr.end(), 'S');

	//If character found, 'erase' to deletes a character 
	cout << "Erasing character 'S' from the sample string:" << "\n"; 
	if (iCharS != sampleStr.end())
		sampleStr.erase(iCharS);

	cout << sampleStr << "\n" << "\n"; 

	//Erase a range of characters using an overloaded version of erase()
	cout << "Erasing a range between begin() and end(): " << "\n";
	sampleStr.erase(sampleStr.begin(), sampleStr.end());

	//Verify the length after the erase() operation above 
	if (sampleStr.length() == 0)
		cout << "The string is empty" << "\n"; 

	return 0;
}