
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ChessClubMember
{
    int membershipID;
    char name[50];
    int rating;
    struct ChessClubMember *next;
};

struct ChessClubMember *head = NULL;

void clubMembership()
{
    head = NULL;
    printf("Chess Club Membership Initialized.\n");
}

void addMemberToClub()
{
    struct ChessClubMember *newMember;
    newMember = malloc(sizeof(struct ChessClubMember));

    printf("Enter Membership ID: ");
    scanf("%d", &newMember->membershipID);
    printf("Enter Name: ");
    scanf("%s", newMember->name);
    printf("Enter Chess Rating: ");
    scanf("%d", &newMember->rating);

    newMember->next = head;
    head = newMember;


}

void displayClubMembership()
{
    printf("\nDIU Chess Club Membership:\n");


    struct ChessClubMember *current = head;

    while (current != NULL)
    {
        printf("Membership ID: %d\n", current->membershipID);
        printf("Name: %s\n", current->name);
        printf("Chess Rating: %d\n", current->rating);
        printf("\n");

        current = current->next;
    }

    if (head == NULL)
    {
        printf("No members in the Chess Club.\n");
    }
}

void searchAndUpdateRating(int membershipID)
{
    struct ChessClubMember *current = head;

    while (current != NULL)
    {


    }

}

int main()
{
    int choice, membershipID;

    while (1)
    {
        printf("\nDIU Chess Club Management System:\n");
        printf("1. Initialize Club Membership\n");
        printf("2. Add Member to Club\n");
        printf("3. Display Club Membership\n");
        printf("4. Search and Update Member Rating\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1 : clubMembership();
            break;
        case 2:
            addMemberToClub();
            break;
        case 3:
            displayClubMembership();
            break;
        case 4:
            printf("Enter Membership ID to search and update rating: ");
            scanf("%d", &membershipID);
            searchAndUpdateRating(membershipID);
            break;
        case 5:
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
