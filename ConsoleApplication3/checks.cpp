#include "checks.h"
#include <iostream>


//Checks::Checks()
//{
//	// CONSTRUCTOR
//	// TODO: Construct(?)
//}

std::string Checks::getPdbPath(std::string ref)
{
	std::string token;
	size_t pos, pos1;

	while ((pos = ref.find(".pdb")) != std::string::npos) {
		while ((pos1 = ref.find(":\\")) != std::string::npos) {
			token = ref.substr(pos1, pos);
			return token;
		}
	}
	return "nada";
}