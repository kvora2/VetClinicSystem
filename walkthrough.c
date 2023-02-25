#include <stdio.h>
	 
	#define INITIAL_HEALTH 100
	#define NAME_LENGTH 10
	 
	struct Hero 
	{
	    char name[NAME_LENGTH + 1];
	    int health;
	    int strength;
	    int shield;
	};
	 
	struct Hero attack(struct Hero* h1, struct Hero* h2) 
	{
	    struct Hero result;
	 
	    while (h1->health > 0 && h2->health > 0) 
	    {
	        printf("%d\n%d\n", h1->health, h2->health);
	        h1->health -= h2->strength - h1->shield;
	        h2->health -= h1->strength - h2->shield;
	        printf("%d\n%d\n", h1->health, h2->health);
	    }
	 
	    if (h1->health < h2->health)
	    {
	        result = *h1;
	    }
	    else
	    {
	        result = *h2;
	    }
	 
	    return result;
	}
	 
	int main(void)
	{
	    struct Hero hero1 = { {'N', 'i', 'n', 'j', 'a', '\0'} , INITIAL_HEALTH, 150, 20 };
	    struct Hero hero2 = { "Enigma", INITIAL_HEALTH, 75, 50 };
	 
	    struct Hero winner = attack(&hero1, &hero2);
	 
	    puts("Game Over");
	    printf("The winner is %s", winner.name);
	 
	    return 0;
	}