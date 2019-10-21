
#include "Administrator.h"
#include "Security.h"
//#ifndef ADMINISTRATOR_H
//#define ADMINISTRATOR_H
//#ifndef SECURITY_H
//#define SECURITY_H

	int Administrator::Login(string username, string password) {

		if (Security::validate(username, password) == 1)
			return true;
		return false;


	}



//#endif // !SECURITY_H
//
//#endif // !ADMINISTRATOR_H






