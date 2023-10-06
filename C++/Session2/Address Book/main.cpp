#include "main.hpp"
#include <cstring>

string order;
extern map<string, string> addressBookMap;
int main()
{
     addressBook adb;
     while (1)
     {
          cout << "Welcome to your favourite address book! \n";
          cout << "What do you want to do ? \n";
          cout << "\t | List          "
               << "| List all users\n";
          cout << "\t | Add           "
               << "| Add an user\n";
          cout << "\t | Delete        "
               << "| Deletes an user\n";
          cout << "\t | Delete all    "
               << "| Delete all users\n";
          cout << "\t | Search        "
               << "| Search for a user\n";
          cout << "\t | Close         "
               << "| Close\n";
          cin >> order;
          if (order.compare("List") == 0)
          {
               adb.printUsers(addressBookMap);
          }

          else if (order.compare("Add") == 0)
          {
               adb.addUser();
          }
          else if (order.compare("Delete") == 0)
          {
               adb.deleteUser();
          }
          else if (order.compare("Delete all") == 0)
          {
               adb.deleteAllUsers();
          }
          else if (order.compare("Search") == 0)
          {
               adb.SearchUser();
          }

          else if (order.compare("Close") == 0)
          {
               break;
          }
          else
          {
               cout << "Wrong entry" << endl;
          }
     }
}