// Program to create ticket booking system

#include <iostream>
#include <vector>
using namespace std;

struct Ticket
{
    int ticketNo;
    string name;
    string destination;
    bool booked;
};

void bookTicket(vector<Ticket> &tickets)
{
    Ticket t;

    cout << "Enter Ticket Number: ";
    cin >> t.ticketNo;

    cin.ignore();

    cout << "Enter Passenger Name: ";
    getline(cin, t.name);

    cout << "Enter Destination: ";
    getline(cin, t.destination);

    t.booked = true;

    tickets.push_back(t);

    cout << "Ticket Booked Successfully.\n";
}

void displayTickets(vector<Ticket> &tickets)
{
    if (tickets.empty())
    {
        cout << "No Tickets Booked.\n";
        return;
    }

    for (int i = 0; i < tickets.size(); i++)
    {
        cout << "\nTicket " << i + 1 << endl;
        cout << "Ticket Number : " << tickets[i].ticketNo << endl;
        cout << "Passenger Name: " << tickets[i].name << endl;
        cout << "Destination   : " << tickets[i].destination << endl;
        cout << "Status        : " << (tickets[i].booked ? "Booked" : "Cancelled") << endl;
    }
}

void searchTicket(vector<Ticket> &tickets)
{
    int ticketNo;

    cout << "Enter Ticket Number: ";
    cin >> ticketNo;

    for (int i = 0; i < tickets.size(); i++)
    {
        if (tickets[i].ticketNo == ticketNo)
        {
            cout << "Ticket Found\n";
            cout << "Passenger Name: " << tickets[i].name << endl;
            cout << "Destination   : " << tickets[i].destination << endl;
            cout << "Status        : " << (tickets[i].booked ? "Booked" : "Cancelled") << endl;
            return;
        }
    }

    cout << "Ticket Not Found.\n";
}

void cancelTicket(vector<Ticket> &tickets)
{
    int ticketNo;

    cout << "Enter Ticket Number: ";
    cin >> ticketNo;

    for (int i = 0; i < tickets.size(); i++)
    {
        if (tickets[i].ticketNo == ticketNo)
        {
            if (!tickets[i].booked)
            {
                cout << "Ticket Already Cancelled.\n";
            }
            else
            {
                tickets[i].booked = false;
                cout << "Ticket Cancelled Successfully.\n";
            }

            return;
        }
    }

    cout << "Ticket Not Found.\n";
}

int main()
{
    vector<Ticket> tickets;
    int choice;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bookTicket(tickets);
            break;

        case 2:
            displayTickets(tickets);
            break;

        case 3:
            searchTicket(tickets);
            break;

        case 4:
            cancelTicket(tickets);
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 5);

    return 0;
}