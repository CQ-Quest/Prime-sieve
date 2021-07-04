# Prime-sieve  
素数筛法思想：把从1开始的、某一范围内的正整数从小到大顺序排列，   
1不是素数，首先把它筛掉。剩下的数中选择最小的数是素数，然后去掉它的倍数。    
  
  
# 埃式筛  
埃拉托斯特尼筛法（太长了~）  
简称：埃氏筛，时间复杂度O(nloglogn)  
Key code:  

	const int maxn = 100007;  
	bool cheak[maxn];//素数为false   
	int prime[maxn];//存第i个素数的值   
	int cnt;//素数个数   
	void Prime()  
	{  
		for(int i = 2; i <= maxn; i++)  
		{  
			if(!cheak[i])  
			{  
				prime[++cnt] = i;  
				for(int j = i*i; j <= maxn; j += i)  
				cheak[j] = true;  
			}  
		}  
	}  



# 欧式筛
欧几里得筛法~即   欧式筛，复杂度O(n)   
Key code:  

	void Prime()  
	{  
		for(int i = 2; i <= MAXN; i++)  
		{  
			if(!cheak[i])  
		        prime[++cnt] = i;  
			for(int j=1;j<=cnt&&i*prime[j]<=MAXN;j++)  
			{  
				cheak[i*prime[j]] =true;  
				if(i%prime[j] == 0)  
				break;  
			}  
			}  
		}  
	}  


