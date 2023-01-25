/*************************************************
* Function Title: main
*
* Summary: Prints the full state name from the 
*		abbreviation that the user enters
*
* Inputs: none
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
* 	Make state structure
*	Make an array of state structures
*	Get input from user
*	Loop
*		If input is equal to state abbreviation
*			Find is true
*	Print result
* End
*************************************************/
#include <stdio.h>
#include <string.h>

int main() //Begin
{
	char input[3];
	int find = 0, i = 0, length, pos;
	//Make state structure
	struct state {
		char* state;
		char* abbreviation;
	};
	//Make an array of state structures
	const struct state state_abbrev[] =
	{ {"Alabama",	"AL"},
	{"Alaska",	"AK"},
	{"American samoa",	"AS"},
	{"Arizona",	"AZ"},
	{"Arkansas",	"AR"},
	{"California",	"CA"},
	{"Colorado",	"CO"},
	{"Connecticut",	"CT"},
	{"Delaware",	"DE"},
	{"District of columbia",	"DC"},
	{"Florida",	"FL"},
	{"Georgia",	"GA"},
	{"Guam",	"GU"},
	{"Hawaii",	"HI"},
	{"Idaho",	"ID"},
	{"Illinois",	"IL"},
	{"Indiana",	"IN"},
	{"Iowa",	"IA"},
	{"Kansas",	"KS"},
	{"Kentucky",	"KY"},
	{"Louisiana",	"LA"},
	{"Maine",	"ME"},
	{"Maryland",	"MD"},
	{"Massachusetts",	"MA"},
	{"Michigan",	"MI"},
	{"Minnesota",	"MN"},
	{"Mississippi",	"MS"},
	{"Missouri",	"MO"},
	{"Montana",	"MT"},
	{"Nebraska",	"NE"},
	{"Nevada",	"NV"},
	{"New hampshire",	"NH"},
	{"New jersey",	"NJ"},
	{"New mexico",	"NM"},
	{"New york",	"NY"},
	{"North carolina",	"NC"},
	{"North dakota",	"ND"},
	{"Northern mariana is",	"MP"},
	{"Ohio",	"OH"},
	{"Oklahoma",	"OK"},
	{"Oregon",	"OR"},
	{"Pennsylvania",	"PA"},
	{"Puerto rico",	"PR"},
	{"Rhode island",	"RI"},
	{"South carolina",	"SC"},
	{"South dakota",	"SD"},
	{"Tennessee",	"TN"},
	{"Texas",	"TX"},
	{"Utah",	"UT"},
	{"Vermont",	"VT"},
	{"Virginia",	"VA"},
	{"Virgin islands",	"VI"},
	{"Washington",	"WA"},
	{"West virginia",	"WV"},
	{"Wisconsin",	"WI"},
	{"Wyoming",	"WY"} };

	//Get input from user
	printf("Enter a 2-letter U.S. state abbreviation: ");
	gets(input);
	length = sizeof(state_abbrev) / sizeof(state_abbrev[0]);

	//Loop
	for (i = 0; i < (length - 1); i++)
	{
		//If input is equal to state abbreviation
		if ((strcmp(input, state_abbrev[i].abbreviation)) == 0)
		{
			//Find is true
			find = 1;
			pos = i;
		}
	}

	//Print result
	if (find != 0)
	{
		printf("%s is an abbreviation for %s.", 
			input, state_abbrev[pos].state);
	}
	else 
		printf("%s is not an abbreviation for any of the 50 U.S. states.", 
			input);
		
	return 0; //End
}