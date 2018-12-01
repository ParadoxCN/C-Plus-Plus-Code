int WalkBintreeByStack(Bintree *t, DoFunc df)//yyw
{
	if (t->DummyHead->link[RIGHT] == NULL) {
		fputs("Empty tree\n", stdout);
		return TREE_FAIL;
	}
	//申明栈数据结构对象
	Stack stk = *CreateStack(40);  //初始化栈
	Mynode* ptr = t->DummyHead;
	Mynode* temp[40];
	int tag = 0;
	int level = 0;
	//使用循环中序遍历输出节点数据
	while (ptr)  //什么时候停止循环 假如已经拿不到节点数据或者栈
	{
		//用一个循环来压栈
		while (ptr)  //我们需要T中保存了节点的地址才可以压栈
		{
			Pushelement(stk,ptr); //把当前节点入栈
			ptr->link[LEFT];  //转向当前节点的左孩子节点
			level++;
		}

		//在用一个循环来出栈输出数据
		while (!(stk.top==-1))
		{
			Popelement(stk,&temp[tag++]);  //出栈保存当前栈顶节点

			//准备输出节点里的数据内容
			df(ptr, level);
			level--;
		}

		//转到右子树压栈
		ptr = ptr->link[RIGHT];
		if (stk.top == -1)  //当栈当中没有元素说明已经输出全部数据，那么就要跳出循环
		{
			break;
		}
	}
}
