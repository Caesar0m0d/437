#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
int n,vv;
int nx[1003];
}h;
	int cal(int n,h ** li);
	int cre(int u,int v,h ** li,int * vi);
	int main(){
int n,m,vi[1000],u,v,l;
h * li[1002]={};
scanf("%d %d",&n,&m);

		for(l=0;l<n;l++){
if(l==n-1){scanf("%d",&vi[l]);break;}
scanf("%d ",&vi[l]);
				}
		for(l=0;l<m;l++){
scanf("%d %d",&u,&v);
cre(u,v,li,vi);
				}
cal(n,li);

return 0;
		  }
	int cre(int u,int v,h ** li,int * vi){
h * temp;
h * temp2;
		if(li[u-1] == 0){
h * new = (h *)malloc(sizeof(h));new->n=u;li[u-1]=new;
				}
		if(li[v-1] == 0){
h * new2 = (h *)malloc(sizeof(h));new2->n=v;li[v-1]=new2;
				}
temp=li[u-1];temp2=li[v-1];temp->nx[v-1]=1;temp2->nx[u-1]=1;temp->vv=vi[u-1];temp2->vv=vi[v-1];
return 0;
	 	 }
	 int cal(int n,h ** li){
h * temp;
int tp=100000,tp2=0,l,l2,turn,fin,n1;//tp -> past, tp2 -> present
n1 = n;
		while(n1!=1){
		for(l=0;l<n;l++){
if(li[l]==0)break;
temp = li[l];
		for(l2=0;l2<n;l2++){
if((temp->nx[l2])==1)tp2+=(li[l2]->vv);
				   }
if(tp>tp2){tp=tp2;turn=l;}
				}
	//complete the minimum value 
fin+=tp;temp=li[turn];
		for(l2=0;l2<n;l2++){
if((temp->nx[l2])==1){li[l2]->nx[turn]=0;temp->nx[l2]=0;}	
				   }
li[turn]=0;
n1--;
			     }
printf("%d\n",fin);
return 0;
			 	}
/*
typedef struct Node{
int n,vv;
int nx[1003];
}h;
*/
