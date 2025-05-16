// 模板1:
	while (l < r)
    {
        int mid = l + r >> 1;	//(l+r)/2
        if (check(mid))  r = mid;    // check()判断mid是否满足性质
        else l = mid + 1;
    }
//模板2:
	while (l < r)
    {
        int mid = l + r + 1 >> 1;	//(l+r+1)/2
        if (check(mid))  l = mid;
        else r = mid - 1;
    }
// 第一个模板是尽量往左找目标，第二个模板是尽量往右找目标。

// 只要是往左找答案，就用第一个模板，mid不用加一，r=mid，l加一；
// 只要是往右找答案，就用第二个模板，mid要加一，l=mid，r要减一；

// 二分套这两个模板，肯定没错！（只要判断条件写对）亲测有效！！！
// 当然，二分可能在实数中进行，那自然少不了浮点二分。
// 模板3：（浮点二分）
	while(r-l>1e-5) //需要一个精度保证
	{
		double mid = (l+r)/2;
		if(check(mid)) l=mid; //或r=mid;
		else r=mid; //或l=mid;
	}
// 浮点二分就相对简单多了，因为浮点除法不会取整，所以mid，l，r，都不用加1或减1.