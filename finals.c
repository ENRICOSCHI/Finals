#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

// constraints
#define MAXN 100

// input data
int N, P,i;
int S[MAXN][3];

int main() {
	// freopen("input1.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    assert(2 == scanf("%d %d", &N, &P));
    for ( i = 0; i < N; i++) {
        assert(3 == scanf("%d %d %d", &S[i][0], &S[i][1], &S[i][2]));
    }
	int PointForWin;
    int DavScore = S[0][0] + S[0][1] + S[0][2]; // Davide's current total score
	int max_score=0;
    for ( i = 1; i < N; i++) {
        int total = S[i][0] + S[i][1] + S[i][2] + (100*P); // current total score of team i
        if(max_score<total){
        	max_score = total;}
    }
    if(max_score< DavScore){
    	 PointForWin=0;
	}else
    	 PointForWin= (max_score - DavScore)+1;

    // Davide needs to score strictly more points than the highest current score
    printf("%d\n", PointForWin);

    return 0;
}






