	while (l < r)//���ֵ����С
    {
        int mid = l + r >> 1;	//(l+r)/2
        if (check(mid))  r = mid;    // check()�ж�mid�Ƿ���������
        else l = mid + 1;
    }


	while (l < r)//��Сֵ�����
    {
        int mid = l + r + 1 >> 1;	//(l+r+1)/2
        if (check(mid))  l = mid;
        else r = mid - 1;
    }
