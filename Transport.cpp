#include <iostream>
#include <string>
using namespace std;

void AddRoute();
void RemoveRoute();
void ViewList();
void ViewComplaints();
void SearchByCity();
void SearchByTime();
void ShowBusInfo();
void RegComplaint();

struct Node {
	string busNumber;
    string driverName;
    string city;
    string time;
    string phoneNumber;
    Node* next;
};

int main() {
	Node* Bus1 = new Node;
	Node* Bus2 = new Node;
	Node* Bus3 = new Node;
	Node* Bus4 = new Node;
	Node* Bus5 = new Node;
	Node* Bus6 = new Node;
	Node* Bus7 = new Node;
	Node* Bus8 = new Node;
	Node* Bus9 = new Node;
	Node* Bus10 = new Node;
	Node* Bus11 = new Node;
	Node* Bus12 = new Node;
	
	Bus1->busNumber = RIJ-1017;
	Bus1->driverName = Malik Mumtaz;
	Bus1->phoneNumber = 0310-19982789;
	Bus1->city = Islamabad;
	Bus1->time = 12:00pm;
	
	Bus2->busNumber = RIL-11;
	Bus2->driverName = Hashim Ali;
	Bus2->phoneNumber = 0333-78349200;
	Bus2->city = Islamabad;
	Bus2->time = 12:00pm;
	
	Bus3->busNumber = RPT-1109;
	Bus3->driverName = Rana Uzair;
	Bus3->phoneNumber = 0300-1763574;
	Bus3->city = Islamabad;
	Bus3->time = 12:00pm;
	
	Bus4->busNumber = IDT-4983;
	Bus4->driverName = Shahid Khan;
	Bus4->phoneNumber = 0325-9667220;
	Bus4->city = Islamabad;
	Bus4->time = 12:00pm;
	
	Bus5->busNumber = LOR-2649;
	Bus5->driverName = Muhammad Ali ;
	Bus5->phoneNumber = 0341-38439283;
	Bus5->city = Rawalpindi;
	Bus5->time = 12:00pm;
	
	Bus6->busNumber = RIJ-12;
	Bus6->driverName = Malik Sameer;
	Bus6->phoneNumber = 0312-1275403;
	Bus6->city = Rawalpindi;
	Bus6->time = 12:00pm;
	
	Bus7->busNumber = RIJ-2651;
	Bus7->driverName = Shahnawaz;
	Bus7->phoneNumber = 0327-5631889;
	Bus7->city = Rawalpindi;
	Bus7->time = 12:00pm;
	
	Bus8->busNumber = RPT-9936;
	Bus8->driverName = Saif Ali;
	Bus8->phoneNumber = 0314-5763291;
	Bus8->city = Rawalpindi;
	Bus8->time = 12:00pm;
	
	Bus9->busNumber = RIJ-15;
	Bus9->driverName = Imtiaz Khan;
	Bus9->phoneNumber = 0343-6328923;
	Bus9->city = Rawalpindi;
	Bus9->time = 12:00pm;
	
	Bus10->busNumber = RIJ-9937;
	Bus10->driverName = Muhammad Suleman;
	Bus10->phoneNumber = 0303-5672349;
	Bus10->city = Rawalpindi;
	Bus10->time = 12:00pm;
	
	Bus11->busNumber = RPL-3031;
	Bus11->driverName = Zahid Shah;
	Bus11->phoneNumber = 0319-4652232;
	Bus11->city = Wah;
	Bus11->time = 12:00pm;
	
	Bus12->busNumber = RIL-2650;
	Bus12->driverName = Babar Ali;
	Bus12->phoneNumber = 0311-8772390;
	Bus12->city = Wah;
	Bus12->time = 12:00pm;
	
	ShuttleBus1->busNumber = RIL-2650;
	ShuttleBus1->driverName = Babar Ali;
	ShuttleBus1->phoneNumber = 0311-8772390;
	ShuttleBus1->city = Wah;
	ShuttleBus1->time = 12:00pm;
	
	ShuttleBus2->busNumber = RIL-2650;
	ShuttleBus2->driverName = Babar Ali;
	ShuttleBus2->phoneNumber = 0311-8772390;
	ShuttleBus2->city = Wah;
	ShuttleBus2->time = 12:00pm;
	
	ShuttleBus3->busNumber = RIL-2650;
	ShuttleBus3->driverName = Babar Ali;
	ShuttleBus3->phoneNumber = 0311-8772390;
	ShuttleBus3->city = Wah;
	ShuttleBus3->time = 12:00pm;
	
    int ch;
    while (true) {
        system("cls");

        cout << "-----------WELCOME-----------" << endl;
        cout << "1. Staff Login" << endl;
        cout << "2. Student Login" << endl;
        cin >> ch;

        switch (ch) {
            case 1: // Staff
                while (true) {
                    system("cls");

                    int passcode;
                    cout << "Enter 4 digit passcode: ";
                    cin >> passcode;

                    if (passcode != 1234) {
                        cout << "Wrong Password, try again.\n";
                        continue; // Go back to the password input
                    }
					
					A:
					system("cls");
					
                    int opt;
                    cout << "1. Manage Bus Routes" << endl;
                    cout << "2. View List of All Available Routes" << endl;
                    cout << "3. View Complaints" << endl;
                    cout << "4. Logout" << endl;
                    cin >> opt;

                    switch (opt) {
                        case 1:
                        	system("cls");
                        	
                            int op;
                            cout << "1. Add a New Bus Route" << endl;
                            cout << "2. Remove Existing Bus Route" << endl;
                            cin >> op;

                            switch (op) {
                                case 1:
                                    AddRoute(head);
                                	goto A;
                                    break;

                                case 2:
                                    RemoveRoute();
                                    goto A;
                                    break;
                            }
                            break;

                        case 2:
                            ViewList();
                            break;

                        case 3:
                            ViewComplaints();
                            break;

                        case 4:
                            return 0;
                    }
                }
                break;

            case 2: // Student
            	
            	B:
            	system("cls");
            	
                int choice;
                cout << "1. View List of All Available Bus Routes" << endl;
                cout << "2. Find Your Route" << endl;
                cout << "3. Bus Details" << endl;
                cout << "4. Register a Complaint" << endl;
                cout << "5. Back" << endl;
                cin >> choice;

                switch (choice) {
                    case 1:
                        ViewList();
                        break;

                    case 2:
                    	system("cls");
                    	
                        int option;
                        cout << "1. Search by City" << endl;
                        cout << "2. Search by Time (Shuttle Route / Full Return Route)" << endl;
                        cin >> option;

                        switch (option) {
                            case 1:
                                SearchByCity();
                                break;

                            case 2:
                                SearchByTime();
                                break;
                        }
                        break;

                    case 3:
                        ShowBusInfo();
                        break;

                    case 4:
                        RegComplaint();
                        goto B;
                        break;

                    case 5:
                        return 0;
                }
                break;
        }
    }
}

Node* AddRoute(Node* head) {
	system("cls");
	
    string driverName, city, time, phoneNumber;

    cout << "Enter Driver's Name: ";
    cin >> driverName;
    cout << "Enter City: ";
    cin >> city;
    cout << "Enter Time: ";
    cin >> time;
    cout << "Enter Phone Number of Driver: ";
    cin >> phoneNumber;

    BusNode* newBus = new BusNode;
    newBus->driverName = driverName;
    newBus->city = city;
    newBus->time = time;
    newBus->phoneNumber = phoneNumber;
    newBus->next = nullptr;

    if (busRoutes == nullptr) {
        busRoutes = newNode;
    } else {
        BusRouteNode* current = busRoutes;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    cout << "\nBus route added successfully.\n";
    sleep(1.5);
}

void RemoveRoute() {
    string driverName;
    cout << "Enter Driver's Name to remove the route: ";
    cin >> driverName;

    BusRouteNode* current = busRoutes;
    BusRouteNode* prev = nullptr;

    while (current != nullptr && current->driverName != driverName) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Route not found.\n";
    } else {
        if (prev == nullptr) {
            busRoutes = current->next;
        } else {
            prev->next = current->next;
        }
        delete current;
        cout << "Route removed successfully.\n";
    }
}

void ViewList() {
    if (busRoutes == nullptr) {
        cout << "No bus routes available.\n";
    } else {
        BusRouteNode* current = busRoutes;
        while (current != nullptr) {
            cout << "Driver: " << current->driverName << ", City: " << current->city
                 << ", Time: " << current->time << ", Phone: " << current->phoneNumber << "\n";
            current = current->next;
        }
    }
}

void RegComplaint() {
    // Implement code to register a complaint if needed
    cout << "RegComplaint function placeholder\n";
}

void ViewComplaints() {
    // Implement code to view complaints if needed
    cout << "ViewComplaints function placeholder\n";
}

void SearchByCity() {
    // Implement code to search by city if needed
    cout << "SearchByCity function placeholder\n";
}

void SearchByTime() {
    // Implement code to search by time if needed
    cout << "SearchByTime function placeholder\n";
}

void ShowBusInfo() {
    // Implement code to show bus info if needed
    cout << "ShowBusInfo function placeholder\n";
}