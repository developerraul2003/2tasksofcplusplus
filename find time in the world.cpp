#include <iostream>
#include <ctime>
using namespace std;
int main() {
  time_t now = time(nullptr);

  cout << "UTC time is: " <<asctime(gmtime(&now)) << endl;

  // Set the time zone to Tokyo, Japan
   putenv("TZ=Asia/Tokyo");
 cout << "Tokyo time is: " << asctime(localtime(&now)) << endl;

  // Set the time zone to New York, USA
  putenv("TZ=America/New_York");
  cout << "New York time is: " << asctime(localtime(&now)) << endl;

  // Set the time zone to London, UK
  putenv("TZ=Europe/London");
  cout << "London time is: " <<asctime(localtime(&now)) << endl;

  return 0;
}