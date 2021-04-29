
//初始条件：顺序表已存在，1<= i <=length;
//操作结果：顺序表在第i处插入新元素e
int InsertList(LinkList *L, int i, ElemType e)
{
  int j = 1;
  LinkList p, s;
  p = *L;

  while (p && j < i)
  {
    p = p->next;
    j++;
  }
  if (!p || j > i)
    return false;

  s = (LinkList *)malloc(sizeof(LNode));
  s->data = e;
  s->next = p->next;
  p->next = s;
  return true;
}