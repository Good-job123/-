//双链表的插入操作
s->prior = p;
s->next = p->next;
p->next->prior = s;
p->next = s;

//双链表的删除操作
p->prior->next = p->next;
p->next->prior = p->prior;
free(p);