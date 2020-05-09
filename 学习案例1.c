int main(){
    int a,n,sum = 0,num = 0;
    scanf("%d %d",&a,&n);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= i;j++){
            num += a*pow(10,j-1);
        }
        sum += num;
        num = 0;
        //numҪ���㣬��Ͷ��ڶ���forѭ����ʹ�� 
    }
    printf("s = %d",sum);
    return 0;
}
//git test push 
