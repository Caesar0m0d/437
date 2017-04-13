#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
int n,vv;
int nx[1003];
}h;

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
/*
typedef struct Node{
int n,vv;
int nx[1003];
}h;
*/
