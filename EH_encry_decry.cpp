#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileEncryptor {
private:
    string filename;
    int encryptionKey;

public:
    FileEncryptor(string fname, int key) {
        filename = fname;
        encryptionKey = key;
    }

    void encryptAndWrite(string message) {
        ofstream outFile(filename.c_str()); // for older compilers
        if (!outFile) {
            cout << "Error opening file for writing." << endl;
            return;
        }

        // Encrypt using Caesar Cipher
        for (int i = 0; i < message.length(); i++) {
            char encryptedChar = message[i] + encryptionKey;
            outFile << encryptedChar;
        }

        outFile.close();
        cout << "Message successfully encrypted and stored in " << filename << endl;
    }

    string readAndDecrypt() {
        ifstream inFile(filename.c_str());
        if (!inFile) {
            cout << "Error opening file for reading." << endl;
            return "";
        }

        string decryptedMessage = "";
        char c;
        while (inFile.get(c)) {
            decryptedMessage += (c - encryptionKey);
        }

        inFile.close();
        return decryptedMessage;
    }

    void displayFileContents() {
        cout << "Reading and decrypting file..." << endl;
        string message = readAndDecrypt();
        cout << "Decrypted Message: " << message << endl;
    }
};

int main() {
    FileEncryptor fe("data.txt", 3); // Shift by 3 (Caesar Cipher)

    string message;
    cout << "Enter a message to encrypt: ";
    getline(cin, message);

    fe.encryptAndWrite(message);
    fe.displayFileContents();

    return 0;
}

