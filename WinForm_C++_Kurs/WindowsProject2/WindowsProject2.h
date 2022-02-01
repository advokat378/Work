#pragma once

#include "resource.h"
#include "stdafx.h"
#include "Header.h"
//#include "WindowsProject2.cpp"
#define NF 30
#define NI 20
#define NL 8
#define N 5
#define NLINE (NF*5+NI+NL+1)
#define MAX 3*NLINE
struct StudBeg {
	TCHAR fam[NF]; 	//фамилия 
	TCHAR imia[NI];	
	TCHAR otch[NF]; 
	TCHAR aress[NF];
	TCHAR work[NF];
	TCHAR priviv[NF];
	UINT day;
	UINT mesyaz;
	UINT year;

};
struct StudEnd {
	TCHAR fam[NF]; 	// фамилия 
	TCHAR imia[NI];
	TCHAR otch[NF];
	TCHAR aress[NF];
	TCHAR work[NF];
	TCHAR priviv[NF];
	TCHAR day[N];
	TCHAR mesyaz[N];
	TCHAR year[N];
	TCHAR del;
};
struct StructEnd {
	StudEnd studEnd;
	TCHAR str[MAX];
};
extern StudBeg studBeg;