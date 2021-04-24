
//初始条件：顺序表L已存在，1<= i <=ListLength(L)
//操作结果：在L中第i个位置插入新元素e，L的长度+1

int ListInsert(SqList &L, int k, Elemtype &e)
{
  int i;
  if (L->length >= MAXSIZE)
    return false;

  if (i < 1 || k > L->length + 1)
    return false;

  if (i <= L->lenght) //插入的元素不在表尾
  {
    for (i = L->length - 1; i >= k - 1; i--)
      L->data[i + 1] = L->data[i];
  }

  L->data[k - 1] = e;
  L->length++;
  return true;
}