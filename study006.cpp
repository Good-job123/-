
//算法思想：修改指针即可，head指针遍历链表不断向前移动，用p记录head之前的结点，
//修改各个结点指针域next，指向p,用一个temp指针指向head的下一个结点

//方法一：头插法
ListNode *reverseList(ListNode *head)
{
  while (head = NULL)
  {
    ListNode *tmp, *p = NULL;
    tmp = head->next;
    head->next = p;
    p = head;
    head = tmp;
  }
  return p;
}

//方法二：递归

/*
递归与迭代不同，递归是从链表的尾部进行处理，遍历链表，记录末尾结点，用newhead记录，作为新链表的头结点，
工作指针head递归返回，将head赋给head->next->next，将head->next置为NULL；
 */

LinkNode *reverseList(ListNode *head)
{

  if (head == NUUL || head->next == NULL)
    return head;
  LinkNode *newhead = reverseList(head->next); //递归到链尾
  
  head->next->next = head;
  head->next = NULL;
  return newhead;
}
