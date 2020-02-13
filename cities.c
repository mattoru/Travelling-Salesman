#include <stdio.h>
#include <limits.h>

int n = 5;

int dist[5][5] = {
	{0,5,30,100,10},
	{5,0,5,20,100},
	{30,5,0,50,100},
	{100,20,50,0,10},
	{10,100,100,10,0},
};

const int viz = (1<<5) - 1;

int tsp(int mask, int pos) {
	if (mask == viz) {
		return dist[pos][0];
	}

	int ans = INT_MAX;

	for (int city = 0; city <n; city++) {

		if ((mask &(1<<city)) == 0) {
			printf("pos", )
			int newAns = dist[pos][city] + tsp(mask|(1<<city),city);

			if (ans > newAns) {
				ans = newAns;
			}
		}
	}

	return ans;
}
int main() {
   // printf() displays the string inside quotation
   printf("%d", tsp(1,0));
   return 0;
}