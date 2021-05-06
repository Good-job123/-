#include <iostream>

using namespace std;

struct LNode
{
  int data;
  struct LNode *next;
};

void Difference(LNode *A, LNode *B)
{
  LNode *p, *q, *pre, *r;
  p = A->next;
  q = B->next;
  while (p != NULL && q != NULL)
  {
    if (p->data < q->data)
    {
      pre = p;
      p = p->next;
    }
    else if (q->data < p->data)
    {
      q = q->next;
    }
    else
    {
      pre->next = p->next;
      r = p;
      p = p->next;
      free(r);
    }
  }
}
