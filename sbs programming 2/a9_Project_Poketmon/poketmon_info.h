#pragma once

typedef enum  ElementalType
{
	물,
	풀,
	불,
	번개
}ElementalType;

typedef enum Place
{
	바다,
	숲,
	용암,
	하늘,
}Place;

typedef enum Gender
{
	남성,
	여성,
	불명,
}Gender;

typedef struct Stat
{
	float height;
	float weight;
}Stat;

typedef struct Poketmon
{
	char name[20];
	ElementalType elementalType;
	Place place;
	Stat stat;
	Gender gender;
}Poketmon;