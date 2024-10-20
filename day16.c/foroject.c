#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define NAME_LENGTH 50
#define PHONE_LENGTH 15
#define EMAIL_LENGTH 50

// Define a structure to store contact information
struct Contact {
    char name[NAME_LENGTH];
    char phone[PHONE_LENGTH];
    char email[EMAIL_LENGTH];
};

// Global array to store contacts
struct Contact addressBook[MAX_CONTACTS];
int totalContacts = 0;

// Function to add a new contact
void addContact() {
    if (totalContacts >= MAX_CONTACTS) {
        printf("Address book is full!\n");
        return;
    }

    struct Contact newContact;

    printf("Enter Name: ");
    scanf(" %[^\n]%*c", newContact.name);

    printf("Enter Phone: ");
    scanf(" %[^\n]%*c", newContact.phone);

    printf("Enter Email: ");
    scanf(" %[^\n]%*c", newContact.email);

    addressBook[totalContacts] = newContact;
    totalContacts++;

    printf("Contact added successfully!\n");
}

// Function to display all contacts
void displayContacts() {
    if (totalContacts == 0) {
        printf("No contacts to display!\n");
        return;
    }

    for (int i = 0; i < totalContacts; i++) {
        printf("Contact %d:\n", i + 1);
        printf("  Name:  %s\n", addressBook[i].name);
        printf("  Phone: %s\n", addressBook[i].phone);
        printf("  Email: %s\n", addressBook[i].email);
        printf("--------------------------\n");
    }
}

// Function to delete a contact by name
void deleteContact() {
    char name[NAME_LENGTH];
    printf("Enter the name of the contact to delete: ");
    scanf(" %[^\n]%*c", name);

    for (int i = 0; i < totalContacts; i++) {
        if (strcmp(addressBook[i].name, name) == 0) {
            // Shift remaining contacts left
            for (int j = i; j < totalContacts - 1; j++) {
                addressBook[j] = addressBook[j + 1];
            }
            totalContacts--;
            printf("Contact deleted successfully!\n");
            return;
        }
    }

    printf("Contact not found!\n");
}

// Main menu function
void menu() {
    int choice;
    do {
        printf("\nAddress Book Menu:\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                deleteContact();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);
}

int main() {
    menu();
    return 0;
}
