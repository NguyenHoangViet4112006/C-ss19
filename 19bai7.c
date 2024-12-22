#include<stdio.h>
struct Sinhvien{
	int id;
	char name[50];
	int age;
	char phoneNumber [50];
	
};
void xoa(int id, struct Sinhvien sv[], int *current){
	int found =0;
	for(int i=0; i<*current; i++){
		if(sv[i].id==id){
			found=1;
			for(int j=i; j<*current-1; j++){
				sv[j]=sv[j+1];
			}
			(*current)--;
			break;
		}
	}
	if(!found){
		printf("ID sinh vien khong ton tai");
	}
}
void show(struct Sinhvien sv[], int dodai){
	for(int i =0; i<dodai; i++){
		printf("%d %s %d %s\n", sv[i].id, sv[i].name, sv[i].age, sv[i]. phoneNumber);
	}
}
int main(){
	int length=5;
	struct Sinhvien sv1[5]={
	{1, "Sinh vien 1", 18,"12345"},{2,"Sinh vien 2", 19,"54321"},{3, "Sinh vien 3", 18,"123456"},{4,"Sinh vien 4", 19,"654321"},{5,"Sinh vien 5", 19,"543219"}
	};
	printf("Danh sach sinh vien la: \n");
	show(sv1, length);
	xoa(5,sv1,&length);
	printf("Danh sach sinh vien sau khi xoa: \n");
	show(sv1, length);
	return 0;
}
