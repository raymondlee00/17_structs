struct basketballPlayer
{
    char* playerName;
    int bucketsMade;
};

void printBasketballPlayer(struct basketballPlayer foo);
void changePlayerStats(struct basketballPlayer* goo, char* newPlayerName, int newBucketsMade);
void randomize(struct basketballPlayer hoo);