#include <stdio.h>
void mystrcpy(char* str2, char* str1) {//매개 변수로 포인터를 받음
	int i = 0 ;
	while(*(str1+i)!='\0') {         //str1[i] !='\0'
	    *(str2+i) = *(str1+i); //str2[i] = str1[i] ;
			i++;		
   }   
  	*(str2+i)='\0';    //마지막 문자에 '\0' 입력 참고로 i++에서 증가한 샅애로 옴
}

void mystrcpy2(int* str3, int* str1) {//매개 변수로 포인터를 받음
int i = 0 ;
	while(*(str1+i)) { //str1[i] !='\0'
	    *str3 = *str1;                ; //str2[i] = str1[i] ;
			*str1++; //*str3++ = *str1++ 과 같다
			*str3++;
   }   
    *(str3)='\0'; //마지막 문자에 '\0' 입력
}

int main() {
	char str1[257],	str2[257], str3[257];
	fgets(str1,257,stdin);
	mystrcpy(str2, str1);
	puts(str2);
	mystrcpy2(str3, str1);
	puts(str3);
	return 0;
}
