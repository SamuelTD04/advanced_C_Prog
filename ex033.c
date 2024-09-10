#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int x;
	int y;
}POINT;
int main() {
	POINT *pointsArray;
	int totalPoints;
	int i;
	printf("Enter the number of points: ");
	scanf("%d",&totalPoints);
	pointsArray = (POINT *)malloc(totalPoints*sizeof(POINT));
	for(i=0;i<totalPoints;i++) {
		printf("Type the first two x and y coordinates: ");
		scanf("%d %d",&pointsArray[i].x,&pointsArray[i].y);
	}
	for(i=0;i<totalPoints;i++) {
		printf("#%d point: (%d,%d)\n",i+1,pointsArray[i].x,pointsArray[i].y);
	}
	return 0;
}
