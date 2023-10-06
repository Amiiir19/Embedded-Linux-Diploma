#include "main.hpp"
map<string, string> addressBookMap;
void addressBook::printUsers(map<string, string> &addressBookMap)
{
    for (auto const &pair : addressBookMap)
    {
        cout << pair.first << " : " << pair.second << endl;
    }
}
void addressBook::addUser(void)
{
    // insert new user
    string name;
    string number;
    cout << "please enter the name of the new contact : ";
    cin >> name;
    cout << "please enter the Number of the new contact : ";
    cin >> number;
    addressBookMap[name] = number;
}
void addressBook::deleteUser(void)
{
    string name;
    // delete user
    cout << "please enter the name of the new contact : ";
    cin >> name;
    addressBookMap.erase(name);
}
void addressBook::deleteAllUsers(void)
{
    // delete all users
    addressBookMap.clear();
}
void addressBook::SearchUser(void)
{
    string name;
    string number;
    cout << "please enter the name of the new contact : ";
    cin >> name;
    cout << name << " number's is : " << addressBookMap[name];
}
void addressBook::close(void)
{
}
