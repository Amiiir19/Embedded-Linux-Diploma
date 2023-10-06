#include <iostream>
#include <map>
using namespace std;

class addressBook
{

public:
    void printUsers(map<string, string> &addressBookMap);
    void addUser(void);
    void deleteUser( void);
    void deleteAllUsers(void);
    void SearchUser(void);
    void close(void);
};
