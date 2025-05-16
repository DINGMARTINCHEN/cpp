	while (l < r)//最大值的最小
    {
        int mid = l + r >> 1;	//(l+r)/2
        if (check(mid))  r = mid;    // check()判断mid是否满足性质
        else l = mid + 1;
    }


	while (l < r)//最小值的最大
    {
        int mid = l + r + 1 >> 1;	//(l+r+1)/2
        if (check(mid))  l = mid;
        else r = mid - 1;
    }
