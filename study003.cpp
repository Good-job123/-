
//初始条件：顺序线性表存在1<= i <=length;
//操作结果：用e返回表中第i个元素的值

int getElem(LinkList L, int i, ElemType *e)
{
  LinkList p;
  p = L->next;
  int j = 1;
  while (p != NULL && j < i)
  {
    p = p->next;
    j++;
  }
  if (p == NULL || j > i)
    return false;
  *e = p->data;

  return true;
}
