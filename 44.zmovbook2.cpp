#include <iostream>
using namespace std;

const int TOTAL_TICKETS = 100;
int ticketsSold = 0;
int ticketPrice = 200;

void printTicketsAvailable() {
    cout << "Tickets available: " << TOTAL_TICKETS - ticketsSold << endl; 
}

void bookTickets() {
    int ticketsToBook;
    cout << "How many tickets do you want to book? "; 
    cin >> ticketsToBook;
    
    if (ticketsToBook > (TOTAL_TICKETS - ticketsSold)) {
        cout << "Only " << TOTAL_TICKETS - ticketsSold << " tickets available." << endl;
    }
    else {
        ticketsSold += ticketsToBook;
        cout << "Tickets booked successfully. Total tickets sold: " << ticketsSold << endl; 
    }
}

void showProfit() {
    int totalProfit = ticketsSold * ticketPrice;
    cout << "Total profit earned: Rs. " << totalProfit << endl;  
}

int main() {
    
    printTicketsAvailable(); 
    
    while (ticketsSold < TOTAL_TICKETS) {
        
        bookTickets();
        
        printTicketsAvailable();
        
    }
    
    showProfit();
    
    return 0;
}www