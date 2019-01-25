/
	> File Name: 2add_two_numbers.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月25日 星期五 16时06分30秒
 ************************************************************************/

#include<iostream>
using namespace std;
/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     ListNode *next;
 *      *     ListNode(int x) : val(x), next(NULL) {}
 *       * };
 *        */
 class Solution {
     public:
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                 ListNode *head,*h,*heads;
                 head=new ListNode(0);
                 heads=head;
                 ListNode *p,*q;
                 int a,b=0;
                 for(p=l1,q=l2;p!=NULL && q!=NULL;p=p->next,q=q->next)
         {
                         
                         h=head;
                         a=p->val+q->val+b;
                         if(a>9)
                         {a=a-10;b=1;}
                         else b=0;
                         h->val=a;
                         head->next=new ListNode(0);
                         head=head->next;
                         
                     
         }
                 if(p==NULL&&b==0)
         {
                         h->next=q;
                     
         }
                 else if(q==NULL &&b==0)
         {
                         h->next=p;
                     
         }
                 else if(p==NULL&&b==1)
         {
                         for(;b==1&&q!=NULL;q=q->next)
             {
                                 a=1+q->val;
                                 if(a>9)
                                 {a=a-10;b-1;}
                                 else b=0;
                                 head->val=a;
                                 h=head;
                                 head->next=new ListNode(0);
                                 head=head->next;
                             
             }
                             if(b==1)
             {
                                     head->val=1;
                                         head->next=q;
                                 
             } 
                         else h->next=q;
                                 
         }
                 else{
                                 for(;b==1&&p!=NULL;p=p->next)
                     {
                                         a=1+p->val;
                                         if(a>9)
                                         {a=a-10;b-1;}
                                         else b=0;
                                         head->val=a;
                                         h=head;
                                         head->next=new ListNode(0);
                                         head=head->next;
                                     
                     }
                                     if(b==1)
                     {
                                             head->val=1;
                                                 head->next=p;
                                         
                     } 
                                 else h->next=p;
                                         
                 }
                         return heads;
                             
     }

 };
 *   }
