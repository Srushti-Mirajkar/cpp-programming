#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Patient {
public:
    string name;
    int age;
    string disease;

    Patient(string n, int a, string d) : name(n), age(a), disease(d) {}

    void display() {
        cout << "Patient Name: " << name << "\nAge: " << age << "\nDisease: " << disease << "\n";
    }
};

class Doctor {
public:
    string name;
    string specialization;

    Doctor(string n, string s) : name(n), specialization(s) {}

    void display() {
        cout << "Doctor Name: " << name << "\nSpecialization: " << specialization << "\n";
    }
};

class Appointment {
public:
    string patientName;
    string doctorName;
    string date;

    Appointment(string p, string d, string dt) : patientName(p), doctorName(d), date(dt) {}

    void display() {
        cout << "Appointment Details:\nPatient: " << patientName << "\nDoctor: " << doctorName << "\nDate: " << date << "\n";
    }
};

class Hospital {
private:
    vector<Patient> patients;
    vector<Doctor> doctors;
    vector<Appointment> appointments;

public:
    void addPatient(string name, int age, string disease) {
        patients.push_back(Patient(name, age, disease));
    }

    void addDoctor(string name, string specialization) {
        doctors.push_back(Doctor(name, specialization));
    }

    void addAppointment(string patientName, string doctorName, string date) {
        appointments.push_back(Appointment(patientName, doctorName, date));
    }

    void displayPatients() {
        cout << "\nPatients List:\n";
        for (auto &p : patients)
            p.display();
    }

    void displayDoctors() {
        cout << "\nDoctors List:\n";
        for (auto &d : doctors)
            d.display();
    }

    void displayAppointments() {
        cout << "\nAppointments List:\n";
        for (auto &a : appointments)
            a.display();
    }
};

int main() {
    Hospital hospital;

    hospital.addPatient("John Doe", 30, "Flu");
    hospital.addPatient("Jane Smith", 25, "Cold");
    
    hospital.addDoctor("Dr. Brown", "Cardiologist");
    hospital.addDoctor("Dr. Green", "Pediatrician");
    
    hospital.addAppointment("John Doe", "Dr. Brown", "2025-04-01");
    hospital.addAppointment("Jane Smith", "Dr. Green", "2025-04-02");
    
    hospital.displayPatients();
    hospital.displayDoctors();
    hospital.displayAppointments();

    return 0;
}
