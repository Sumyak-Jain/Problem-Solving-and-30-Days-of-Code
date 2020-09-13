#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int len;
	scanf("%d",&len);
	int arr[len];
	int i;
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	int j,k;
	for(j=0;j<len;j=j+2){
		if(arr[j+1]==0){
			if(arr[j] != arr[j+1]){
				if(arr[j]!=arr[j-1] && arr[j]!=0){
				int p1=(arr[j]-arr[j-1]);
				if(p1<0){
					p1=-(p1);
				}
			printf("%d %d",j,p1);
			}
			
				else if(arr[j+1]!=arr[j-1] && arr[j+1]!=0){
					int c1=(arr[j+1]-arr[j-1]);
				if(c1 < 0){
					c1=-(c1);
				}
				
			printf("%d %d",j+1,c1);
		}
		break;
			}
		}
			printf("%d %d",arr[j], arr[j+1]);
				printf("\n");
			if(arr[j] != arr[j+1]){
				if(arr[j]!=arr[j-1] && arr[j]!=0){
				int p=(arr[j]-arr[j-1]);
				if(p<0){
					p=-(p);
				}
			printf("%d %d",j,p);
			}
			
				else if(arr[j+1]!=arr[j-1] && arr[j+1]!=0){
					int c=(arr[j+1]-arr[j-1]);
				if(c < 0){
					c=-(c);
				}
				
			printf("%d %d",j+1,c);
		}
		break;
			}
			
		
		
			
	}
	return 0;
}
