#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
/*/ Fishing Game Start /*/
int where = 0;
int start = 0;
int castpond = 0;
int randnum = 0;
int caughtfish = 0;
int castlake =0;
// RAND_MAX = 2,147,483,647//

	printf("For this experience, 0 will be yes and 1 will be no.\nReady to start fishing?\n");
	scanf("%d", &start);
	
	if (start == 0) {
		printf("Where would you like to go?\nThe Pond (type 0)\nThe Lake (type 1)\n");
		scanf("%d", &where);
		if (where == 0) {
			printf("Welcome to the Pond\n");
			printf("Would you like to cast your rod?\n");
			scanf("%d", &castpond);
			while (castpond != 1) {
				if (castpond == 0) {
					srand(time(NULL));
					randnum = (rand() % 10) + 1;
					if (5 <= randnum) {
						printf("Congrats! You caught a fish!\n");
						caughtfish = (caughtfish + 1);
					}
					if (1 < randnum && randnum < 5) {
						printf("Not even a nibble\n");
						
					}
					if (randnum <= 1) {
						printf("Are you even trying?\n");
						
					}
					
				}
			printf("Would you like to cast your rod?\n");
			scanf("%d", &castpond);

			}
			printf("You caught %d fish\n", caughtfish);
}
		if (where == 1) {
			printf("Welcome to the Lake\n");
			printf("Would you like to cast your rod?\n");
			scanf("%d", &castlake);
			while (castlake != 1) {
				if (castlake == 0) {
					srand(time(NULL));
					randnum = (rand() % 10) + 1;
					if (5 <= randnum) {
						printf("Congrats! You caught a fish!\n");
						caughtfish = (caughtfish + 1);
					}
					if (1 < randnum && randnum < 5) {
						printf("Not even a nibble\n");
						
					}
					if (randnum <= 1) {
						printf("Are you even trying?\n");
						
					}
					
				}
			printf("Would you like to cast your rod?\n");
			scanf("%d", &castlake);

			}
			printf("You caught %d fish\n", caughtfish);
		}
		else {
		}	
	}


	return 0;


}