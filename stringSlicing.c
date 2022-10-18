#include <stdio.h>
#include <stdlib.h>
 int main(){
    int a,b,i;
    char* str = (char*)malloc(100)  ;//char str[100]의 의미
    scanf("%s",str); //abcdefg
    scanf("%d %d",&a,&b);// a=2, b=4
    //출력부분 작성하시오.
	 //	for(i=a-1;i<=b-1;i++){
			//printf("%c",str[i]);
		//} 정석
	 *(str+b) = '\0';//필요 없는 부분을 제거 하기 위해 배열의 4번쨰에 null 값 삽입
	 printf("%s", str+a-1); //배열은 0부터 시작 하므로 1을 하나 빼줌
    return 0;
}
