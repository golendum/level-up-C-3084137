#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PSIZE 20
#define RECENTS 15

void print_arr(int arr[], int size)
{
	printf("Recent songs:\n[");
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i != size - 1)
		{
			printf(", ");
		}
	}
	printf("]\n");
}

void recent_songs_shifter(int *recent_songs, int new_song_index)
{
	for (int i = RECENTS - 1; i > 0; i--)
	{
		recent_songs[i] = recent_songs[i - 1];
	}
	recent_songs[0] = new_song_index;
}

int main()
{
	char *playlist[PSIZE] = {
			"Like a Rolling Stone", "Satisfaction", "Imagine",
			"What's Going On", "Respect", "Good Vibrations",
			"Johnny B. Goode", "Hey Jude", "What'd I Say",
			"Smells Like Teen Spirit", "My Generation",
			"Yesterday", "Blowin' in the Wind", "Purple Haze",
			"London Calling", "I Want to Hold Your Hand",
			"Maybellene", "Hound Dog", "Let It Be",
			"A Change Is Gonna Come"};
	int frequency[PSIZE];
	int recent[RECENTS];
	int x, r, count;

	/* initialize */
	srand((unsigned)time(NULL));
	for (x = 0; x < PSIZE; x++)
		frequency[x] = 0;
	for (int y = 0; y < RECENTS; y++)
		recent[y] = PSIZE;

	/* run through the playlist randomly */
	puts("Playlist:");
	count = 0;
	int exists_in_recents = 1;
	int i;
	while (count < 100)
	{
		int exists_in_recents = 1;
		while (exists_in_recents)
		{
			r = rand() % PSIZE; // generate random value
			// printf("The r value is %d\n", r);
			/* does r appear in recent[]? */
			for (i = 0; i < RECENTS; i++)
			{
				// printf("recent[i] = %d\n", recent[i]);
				if (recent[i] == r)
				{
					// printf("In this if statement.\n");
					exists_in_recents = 1;
					break;
				}
				if (i == RECENTS - 1)
				{
					exists_in_recents = 0;
				}
			}
		}
		recent_songs_shifter(recent, r);

		printf("%3d: Now Playing '%s'\n",
					 count + 1,
					 playlist[r]);
		frequency[r]++;
		count++;
	}

	puts("Song frequency:");
	for (x = 0; x < PSIZE; x++)
		printf("%s: %d\n", playlist[x], frequency[x]);

	return (0);
}
