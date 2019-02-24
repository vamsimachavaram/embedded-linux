void add_data(SLL **ptr)
{
  SLL *temp =(SLL *) malloc(sizeof(SLL));
  SLL *temp1=(SLL *) malloc(sizeof(SLL));
  printf("Emter Employ Details.......\n" );
printf("Please Enter Employ_ID :\n");
scanf("%d",&temp->id );
printf("Please Enter Employ_Name :\n");
scanf("%s",&temp->Employ_name);
printf("Please Enter Employ_Mobile number without +91 :\n");
scanf("%ld",&temp->mobile_number );
  if(*ptr==NULL)
  {
    temp->next=*ptr;
    *ptr=temp;
  }
  else
  {
    temp1=*ptr;
    while(temp1)
    {
      temp1=temp->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
  }
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
void add_middle(SLL **ptr)
{
  SLL *temp =(SLL *) malloc(sizeof(SLL));
  SLL *temp1=*ptr;
  printf("Emter Employ Details.......\n" );
printf("Please Enter Employ_ID :\n");
scanf("%d",&temp->id );
printf("Please Enter Employ_Name :\n");
scanf("%s",&temp->Employ_name);
printf("Please Enter Employ_Mobile number without +91 :\n");
scanf("%ld",&temp->mobile_number );

  if((*ptr==NULL)||(*ptr)->id >temp->id)
  {
    printf("jnbskfknf\n" );
    temp->next=*ptr;
    *ptr=temp;
  }
  else
  {

    while (temp1) {
      if(temp1->next==NULL)
      {
        temp->next=temp1->next;
        temp1->next=temp;
        break;
      }
      if ((temp1->next->id)>temp->id)
       {
          temp->next=temp1->next;
          temp1->next=temp;
          break;
        }
      temp1=temp1->next;
    }
  }
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
void print_info(SLL *ptr)
{
    if(ptr!=NULL)
  {
    printf(" %d %s %ld\n",ptr->id, ptr->Employ_name, ptr->mobile_number);
  }
  ptr=ptr->next;
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
void Delete_node(SLL **ptr,int number)
{
  SLL *temp=*ptr;
  while (temp) {
    if((*ptr)->id==number)
    {
        if((*ptr)==header)
        {
            headptr=(*ptr)->next;
            delete(*ptr);
        return ;
        }
        else
        {
            temp1->next=temp->next;
            free(temp);
            return;
        }
    }
    temp1=temp;
    temp=temp->next;
  }
}
//delete all nodes$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
void delete_all_nodes(SLL **ptr)
{
  SLL *temp;
  temp=*ptr;
  while (*ptr) {
    *ptr=temp->next;
    free(temp);
    temp=*ptr->next;
  }
}
//Reverse of a list $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
