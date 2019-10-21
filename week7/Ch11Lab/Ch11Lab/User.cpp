#include "User.h"
#include "Security.h"

int User::Login(string username, string password) {

	if (Security::validate(username, password) == 1 || Security::validate(username, password) == 2)
		return true;
	return false;


}