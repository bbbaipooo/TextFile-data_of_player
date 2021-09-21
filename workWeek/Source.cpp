#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main()
{
	int i;
	struct player {
		char name[50];
		int level;
		int score;
	};
	player p[5], * ptr;
	//เตรียมข้อมูล
	for (i = 0; i < 5; i++) {
		strcpy(p[i].name, "Anonymous");
		p[i].level = i;
		p[i].score = i * 100;
	}
	for (i = 0; i < 5; i++) {
		printf("name : %s\t", p[i].name);
		printf("level : %d\t", p[i].level);
		printf("score : %d\n", p[i].score);
	}
	//เปิดไฟล์
	FILE* fp;
	fp = fopen("data_of_player.txt", "w");
	//เขียนtext file
	for (i = 0; i < 5; i++)
	{
		fprintf(fp, "name : %s\t", p[i].name);
		fprintf(fp, "level : %d\t", p[i].level);
		fprintf(fp, "score : %d\n", p[i].score);
	}
	//ปิดไฟล์
	fclose(fp);
	return 0;
}