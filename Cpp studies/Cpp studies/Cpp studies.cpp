#include <iostream>
#include "add.h"

int main()
{
	std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';

	short s;
	int i;
	long l;
	long long ll;

	signed short ss;
	signed int si;
	signed long sl;
	signed long long sll;

	/*	8 bit signed	-128 to 127
		16 bit signed	-32,768 to 32,767
		32 bit signed	-2,147,483,648 to 2,147,483,647
		64 bit signed	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807


		1 byte unsigned	0 to 255
		2 byte unsigned	0 to 65,535
		4 byte unsigned	0 to 4,294,967,295
		8 byte unsigned	0 to 18,446,744,073,709,551,615

		Pārsvarā nevajag lietot unsigned tipus. Jāpieturās pie signotajiem. Un ja ir unsignoti, tad nejaukt kopā kodā ar signotajiem.
	*/


	return 0;
}