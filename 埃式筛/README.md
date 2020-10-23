# 埃式筛  
https://pic1.zhimg.com/80/v2-224a9aeda1e9bf60898f8a3f3cbb182f_720w.png

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
