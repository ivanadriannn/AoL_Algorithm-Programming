#include<stdio.h>
#include<string.h>

struct housingData{
	char location1[50];
	char location2[50];
	int price;
	int rooms;
	int bathrooms;
	int carParks;
	char type[50];
	int area;
	char furnish[50];
}data[3950];

int merge(struct housingData list[], int left, int right){
	int mid;
	int leftC;
	int leftLen;
	int rightC;
	int rightLen;
	int mainC;
	int index = 0;
	int i = left;
	
	struct housingData arr[right - left + 1];
	
	mid = (right + left) / 2;
	mainC = 0;
	leftC = left;
	rightC = mid + 1;
	leftLen = mid;	
	rightLen = right;														

	while(leftC <= leftLen && rightC <= rightLen){
		if(strcmp(list[leftC].location1, list[rightC].location1) < 0){
			arr[mainC++] = list[leftC++];
		}
		else{
			arr[mainC++] = list[rightC++];
		}
	}

	while(rightC <= rightLen){
		arr[mainC++] = list[rightC++];
	}
		
	while(leftC <= leftLen){
		arr[mainC++] = list[leftC++];
	}
		
	while(i <= right){
		list[i++] = arr[index++];
	}
}

int sort(struct housingData list[], int left, int right){
	if(left == right){
		return 0;
	}
	int mid = (right + left) / 2;
	sort(list, left, mid);
	sort(list, mid + 1, right);	
	merge(list, left, right);
	return 0;
}

void alphabetize(int index){
	int sum[3950];
	int i, j;
	
	sort(data, 0, index - 1);
	
	for(i = 0; i < index; i++){
        for(j = 0; j < index; j++) {
            if(strcmp(data[i].location1, data[j].location1) == 0){
            	sum[i] += 1;
            }
        }
    }

    for(i = 0; i < index; i++){
      	if(sum[i] > 0){
        	int search = 1;
        	
        	for(j = 0; j < i; j++){
            	if(strcmp(data[i].location1, data[j].location1) == 0){
                	search = 0;
                	break;
            	}
        	}
        	
            if(search == 1){
        		printf("%s\n", data[i].location1);	
			}
		}
    }
}
	
int main(){
	int index = 0;
	char ignoreHeader[255];
	
	FILE *csv = fopen("file.csv", "r");
	fscanf(csv, "%[^\n]\n", ignoreHeader);
	
	while(!feof(csv)){
    	fscanf(csv, "%[^,], %[^,], %d, %d, %d, %d, %[^,], %d, %[^\n]\n", data[index].location1, data[index].location2, &data[index].price, &data[index].rooms, &data[index].bathrooms, &data[index].carParks, data[index].type, &data[index].area, data[index].furnish);
		index++;
	}
	
	puts("============SOAL 3=============");
	puts("IVAN ADRIAN - 2602076323 - LB01");
	puts("===============================\n");
	
	alphabetize(index);
	
    fclose(csv);
    
    return 0;
	
}
