//
//  user.h
//  cop3503_termproject
//
//  Created by Madeline Farina on 3/23/18.
//  Copyright © 2018 Madeline Farina. All rights reserved.
//
#ifndef user_h
#define user_h
#include <string>
using namespace std;
class Account; // forward declaration

class User {

private:
    string name;
    string username;
    string password;
    Account * account;

public:
    User(string username, string password);
    void setName(string x);
    Account * getAccount();
    string getUsername();
    string getPassword();
    string getName();

};

#endif /* user_h */
