int WalkBintreeByStack(Bintree *t, DoFunc df)//yyw
{
	if (t->DummyHead->link[RIGHT] == NULL) {
		fputs("Empty tree\n", stdout);
		return TREE_FAIL;
	}
	//����ջ���ݽṹ����
	Stack stk = *CreateStack(40);  //��ʼ��ջ
	Mynode* ptr = t->DummyHead;
	Mynode* temp[40];
	int tag = 0;
	int level = 0;
	//ʹ��ѭ�������������ڵ�����
	while (ptr)  //ʲôʱ��ֹͣѭ�� �����Ѿ��ò����ڵ����ݻ���ջ
	{
		//��һ��ѭ����ѹջ
		while (ptr)  //������ҪT�б����˽ڵ�ĵ�ַ�ſ���ѹջ
		{
			Pushelement(stk,ptr); //�ѵ�ǰ�ڵ���ջ
			ptr->link[LEFT];  //ת��ǰ�ڵ�����ӽڵ�
			level++;
		}

		//����һ��ѭ������ջ�������
		while (!(stk.top==-1))
		{
			Popelement(stk,&temp[tag++]);  //��ջ���浱ǰջ���ڵ�

			//׼������ڵ������������
			df(ptr, level);
			level--;
		}

		//ת��������ѹջ
		ptr = ptr->link[RIGHT];
		if (stk.top == -1)  //��ջ����û��Ԫ��˵���Ѿ����ȫ�����ݣ���ô��Ҫ����ѭ��
		{
			break;
		}
	}
}
