
//初始条件：顺序表L已存在，1<= i <=ListLength(L)
//操作结果：删除L的第k数据元素，并用e返回值，L长度减1

int ListDelet(SqList &L, int k, ElemType &e)
{
  int i;
  if (L->length ==0)
    return false;
  if (k < 1 || k > L->length)
    return false;

  e = L->data[k - 1];
  if (k < L->length)
    for (i = k; i < L->length; i++)
      L->data[k - 1] = L->data[k];

  L->length--;
  return ture;

  return
}
