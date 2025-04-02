#include <iostream>
#include <string>
using namespace std;
#define MAX_Seats 10

class BookBus{
    private:
        string from_city,to_city;
        int no_of_tickets;
        static int available_seats;

    public: 
        BookBus(string from, string to, int seats)try:from_city(from),to_city(to),no_of_tickets(seats){
            if(seats > available_seats){
                throw(available_seats);
            }
            available_seats-= seats;
            }
            catch(int as){
                cout<<"Exception: Only"<<available_seats<<"are available!"<<endl;
                no_of_tickets = 0; // Reset tickets to avoid incorrect booking
            }
        
            void showBooking() {
                if (no_of_tickets > 0) {
                    cout << "Congrats...! You have successfully booked Tickets for the following details:" << endl;
                    cout << "From- " << from_city << endl;
                    cout << "To- " << to_city << endl;
                    cout << "No. of Seats Booked- " << no_of_tickets << endl;
                } else {
                    cout << "Booking failed due to insufficient seats." << endl;
                }
            }
};
// Define static member outside the class
int BookBus::available_seats = MAX_Seats;
int main() {
    BookBus b1("Kolhapur","Pune", 10);
    b1.showBooking();
    BookBus b2("Kolhapur","Satara", 10);
    b2.showBooking();
    BookBus b3("Kolhapur","Pune", 15);
    b3.showBooking();

    return 0;
}
