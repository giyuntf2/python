#include <stdio.h>

int main() {

    int arr[10]; //성적입력용 배열
    int i,j; //카운팅 변수
    
    int no_student = sizeof(arr) / sizeof(int); // 학생 수

    for (i = 0; i < no_student; i++) { // 성적입력 루틴
        printf("%d 번째 학생의 성적은? (0~100점) ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < no_student; i++) { // 막대그래프 발생 루틴
        printf("학생 %d의 성적 : ", i);
        for (j = 0; j < arr[i]; j++) {            
            printf("=");
        }
        printf("%d\n", arr[i]);
    }
}