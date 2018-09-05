#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[102];
		scanf("%s",a);
		getchar();
		int k=strlen(a);
		int plen=0;
		int alen=0;
		int tlen=0;
		int p_pos=0;
		int t_pos=0;
		int flag=2;
		//judge the existence of P A T
		for(int i=0;i<=k-1;i++){
			switch(a[i]){
				case 'P':plen++;p_pos=i;break;
				case 'A':alen++;break;
				case 'T':tlen++;t_pos=i;break;
				default:flag=0;break;
			}
			if(flag==0) break;
		}
		int num1=p_pos;
		int num2=t_pos-p_pos-1;
		int num3=k-1-t_pos;

		if(plen==1&&tlen==1&&alen>0){
			if(num1==0&&num3==0&&num2>=1){flag=1;}
			else if(num1*num2==num3){
				flag=1;
			}
			else{
				flag=0;
			}
		}
		else{
			flag=0;
		}

		if(flag==0){
			printf("NO\n");
		}
		else if(flag==1){
			printf("YES\n");
		}
	}
	return 0;
}