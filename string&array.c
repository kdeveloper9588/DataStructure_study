// 예제1
#include <stdio.h>
int main(){
 char alpha[6] = { 'H', 'E', 'L', 'L', 'O', '!'} ;
  char c;
  int i;
  printf("찾고 싶은 문자 : ");
	scanf("%c",&c);
	for(i=0;alpha[i]!='\0';i++)//아이번쨰의 자리가 공백이 아닐 때 까지 
		//문자열을 받을 탐색할 때는 이렇게 쓴다고 외우는 것이 좋다.
	{
		if(alpha[i]==c) printf("%d번째",i+1);
	}
 //여기에 작성
//
	
	return 0;
}
	
