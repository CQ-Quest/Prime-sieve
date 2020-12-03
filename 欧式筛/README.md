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
