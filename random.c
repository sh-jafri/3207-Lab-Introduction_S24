char randchar() {
	int a = rand();
	a= a%25;
	char CharArr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	return CharArr[a];
}