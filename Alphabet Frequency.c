#include <stdio.h>
#include <string.h>
int main() {
	char s[1000001];
	int a[100] = {0,};//배열 0으로 초기화
	int t =0;
	scanf("%s", s);
	for(int i=0;s[i]!='\0';i++){// 배열을 확인해 null 값이 없을 떄까지
		//printf("%c", s[i]);
		t=s[i]-0; // t=65
		a[t] =a[t]+1; // 정수 배열에 숫자 1을 넣음
	}
	for(int i=65 ;i<=90;i++){// 'A'는 아스키코드로 65임 A to Z
		if(a[i]>0)
		printf("%c : %d\n", i, a[i]);// 아스키 코드로 문자를 출력하고 a배열의 i번 째 정수를 출력함
	}
	
	return 0;
}