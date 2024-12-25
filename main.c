#include <stdio.h>
#include "voting.h"
int main()
{
    char candidates[3][50];
    int choice;

    printf("Enter the names of 3 candidates:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Candidate %d: ", i + 1);
        fgets(candidates[i], sizeof(candidates[i]), stdin);
    }

    while (1)
    {
        display_candidates(candidates);
        printf("\nEnter your vote (1-3) or 0 to stop: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
        cast_vote(choice);
    }

    display_results(candidates);
    return 0;
}