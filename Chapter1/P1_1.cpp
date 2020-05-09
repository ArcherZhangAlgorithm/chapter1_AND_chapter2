#define LOCAL
#include<stdio.h>
#define INF 100000000
#include <time.h>
#include<string.h>
int main()
{
	FILE *fin, *fout;
	//fin = fopen("data.in", "rb");
	//fout = fopen("data.out", "wb");
	int c, q = 1;

	while ((c=getchar())!=EOF) {
		if (c == '"') { printf("%s", q ? "``" : "''"); q = !q; }
		else printf("%c", c);

	}



	//while (fscanf(fin,"%d %d %d", &a,&b,&c)  && !((a==0 )&& (b==0)&&(c==0))) {
	
	

	
	//printf("%d", lists[i]);
	//fprintf(fout, "%d", lists[i]);
	//fprintf(fout, "\n Time used: %.2lf", (double)clock() / CLOCKS_PER_SEC);

	//fclose(fout);
	//fclose(fin);

	
	
	//fprintf(fout,"%d %d %.3f \n ",min,max, (double)s/n);
	//fclose(fin);
	//fclose(fout);
	

	return 0;
	}
//}