vector<int> a; // ��¼ÿ������ 
int vis[N]; //����Ƿ񱻷��� 

void DFS(int u, int k,vector<int>& nums){
    if(cur == k)
	{ 
		//  ��������ʱ����ز��� 
        return ; 
    }
    for(int i = 0; i < k; i++)
	{ //���� n������������ѡ��k���� 
        if(book[nums[i]] == 0)
		{ //��û�б�����
            a.push_back(nums[i]); //ѡ�����䣬���������� 
            vis[nums[i]] = 1; //����ѱ����� 
            DFS(u+1,n,nums); //�ݹ飬u+1 
            vis[nums[i]] = 0; //�ͷţ����Ϊû�����ʣ������´����� 
            a.pop_back(); //�����ոձ��Ϊδ���ʵ���
        }
    }
}

