#include <stdio.h>
#include <stdlib.h>

int main() {
  int people;
  printf("Welcome,\nThis Museum costs $3.95 per person.\nWant an additional "
         "audio tour? This will cost $4.50 extra.\n\n");
  printf("Please enter the amount of attendees:\n");
  scanf("%d", &people);
  if (people >= 20) {
    printf("We have a limit of 20 people.\n");
  } else {
    int audio;
    printf("Do you want a audio tour?\n1: yes\n2: no\n");
    scanf("%d", &audio);
    if (audio == 1) {
      double total = people * (3.95 + 4.50);
      printf("The tour takes a 60 minutes.\n");
      printf("Total price is $%.2lf", total);
    } else if (audio == 2) {
      double totaltwo = people * 3.95;
      printf("No audio,\n");
      printf("Total price is $%.2lf", totaltwo);
    } else {
      printf("You didn't enter 1 or 2.");
    }
  }

  return 0;
}
