#include <stdlib.h>
#include <stdio.h>
#include "headers.h"

int main()
{
    struct basketballPlayer che;
    che.playerName = "Jimbo Buckets";
    che.bucketsMade = 34;
    printBasketballPlayer(che);
    changePlayerStats(&che, "jimbo", 36);
    printBasketballPlayer(che);
    char *names[] = {"Ahri", "Akali", "Alistar", "Amumu", "Anivia", "Annie", "Ashe", "Blitzcrank", "Brand", "Caitlyn", "Cassiopeia", "Cho'gath", "Corki", "Dr. Mundo", "Evelynn", "Ezreal", "Fiddlesticks", "Fiora", "Fizz", "Galio", "Gangplank", "Garen", "Gragas", "Graves", "Hecarim", "Heimerdinger", "Irelia", "Janna", "Jarvan IV", "Jax", "Karma", "Karthus", "Kassadin", "Katarina", "Kayle", "Kennen", "Kog'Maw", "LeBlanc", "Lee Sin", "Leona", "Lulu", "Lux", "Malphite", "Malzahar", "Maokai", "Master Yi", "Miss Fortune", "Mordekaiser", "Morgana", "Nasus", "Nautilus", "Nidalee", "Nocturne", "Nunu", "Olaf", "Orianna", "Pantheon", "Poppy", "Rammus", "Renekton", "Riven", "Rumble", "Ryze", "Sejuani", "Shaco", "Shen", "Shyvana", "Singed", "Sion", "Sivir", "Skarner", "Sona", "Soraka", "Swain", "Talon", "Taric", "Teemo", "Tristana", "Trundle", "Tryndamere", "Twisted Fate", "Twitch", "Udyr", "Urgot", "Varus", "Vayne", "Veigar", "Viktor", "Vladimir", "Volibear", "Warwick", "Wukong", "Xerath", "Xin Zhao", "Yorick", "Ziggs", "Zilean"};
    int randNum = rand() % 97;
    changePlayerStats(&che, *(names + randNum), randNum);
    printBasketballPlayer(che);
    return 0;
}

void printBasketballPlayer(struct basketballPlayer foo)
{
    printf("player name: %s\tbuckets made: %d\n", foo.playerName, foo.bucketsMade);
}

void changePlayerStats(struct basketballPlayer *goo, char *newPlayerName, int newBucketsMade)
{
    goo->playerName = newPlayerName;
    goo->bucketsMade = newBucketsMade;
}

void randomize(struct basketballPlayer hoo)
{
    char *names[] = {"che", "mike", "mike", "ray", "lee", "ercc", "kaz", "matt"};
    int randNum = rand() % 8;
    changePlayerStats(&hoo, *(names + randNum), randNum);
}