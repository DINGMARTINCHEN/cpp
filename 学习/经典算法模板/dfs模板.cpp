vector<int> a; // 记录每次排列 
int vis[N]; //标记是否被访问 

void DFS(int u, int k,vector<int>& nums){
    if(cur == k)
	{ 
		//  条件满足时的相关操作 
        return ; 
    }
    for(int i = 0; i < k; i++)
	{ //遍历 n个数，并从中选择k个数 
        if(book[nums[i]] == 0)
		{ //若没有被访问
            a.push_back(nums[i]); //选定本输，并加入数组 
            vis[nums[i]] = 1; //标记已被访问 
            DFS(u+1,n,nums); //递归，u+1 
            vis[nums[i]] = 0; //释放，标记为没被访问，方便下次引用 
            a.pop_back(); //弹出刚刚标记为未访问的数
        }
    }
}

