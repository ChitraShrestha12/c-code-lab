#include <stdio.h>

int main()
{
    typedef struct Pokemon
    {
        char name[20];
        int hp;
        int attack;
        int speed;
        char tier[6];
    } Pokemon;
    Pokemon pokemon_list[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the Pokemon name: ");
        scanf("%19s", pokemon_list[i].name);

        printf("Enter the HP: ");
        scanf("%d", &pokemon_list[i].hp);

        printf("Enter the Attack: ");
        scanf("%d", &pokemon_list[i].attack);

        printf("Enter the Speed: ");
        scanf("%d", &pokemon_list[i].speed);

        printf("Enter the Tier: ");
        scanf("%5s", pokemon_list[i].tier);
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        printf("%s :\n", pokemon_list[i].name);
        printf("HP : %d\n", pokemon_list[i].hp);
        printf("Attack : %d\n", pokemon_list[i].attack);
        printf("Speed : %d\n", pokemon_list[i].speed);
        printf("Tier : %s\n", pokemon_list[i].tier);
        printf("\n");
    }
    return 0;
}