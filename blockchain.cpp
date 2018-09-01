#include<iostream>
using namespace std;

struct list{
	
	   string date;//input will be in the form dd/mm/yyyy/hour/minutes/seconds;
	    string data[4];//for all the 4 purpose;
	     int nodeNumber;
	    string nodeId;
	    string referenceNodeId;
	    string childReferenceNodeId;
	    string genesisReferenceNodeId;
	      string HashValue;  
	
	struct list * leftsubtree = childReferenceNodeId ;
	struct list * rightsibling;
};


struct list * creategenesis(list a)
{
	
		struct list * p= (struct node*)malloc(sizeof(struct list));
		p->date = a.date;
		p->data = a.date;
		p->nodeNumber = a.nodeNumber;
		p->nodeId = a.nodeId;
		p->referenceNodeId = null;
	   p->childReferenceNodeId = null;
	   p->genesisReferenceNodeId = p;// storing address direct as string
	   p->HashValue = a.HashValue;
	
	
	
	return p;
	
}
string encryptDecrypt(struct list a, char key = 'K') {
	string output ;
     for (int i = 0;i< 4;i++)
     {
	 
    string output = output + a.data[i];
}
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;
    
    return output;
}   // simple encryption decryption k is default key.

// tree structure is implemented using left subtree right sibling format

 struct list * createsetofchild(struct list * node,struct list * genesis,int n){
 	
 	struct list * p= (struct node*)malloc(sizeof(struct list[n]));
 	 int value = node->data[1];  //this is for value
 	 int s = 0;
 	for(int i = 0; i< n; i++)
 	{
 		cout<<"enter the value for child ";
 		cin>>p[i]->data[1];
 		s = s+p[i]->data[1];
 		
 		if(s> value)
 		{
 			cout<<"error";
		 }
 		// checking condition 
 	
	 
	 if(i = 0)
	 {
	 	node->leftsubtree = p;
	 		p[i]->referenceNodeId = node;
	 	    p[i]->genesisReferenceNodeId = genesis;
		
	 	
	 }
	 else{
	 	p[i]->rightsibling = 	p[i+1];
	 	
	 		p->referenceNodeId = node;
	 	    p->genesisReferenceNodeId = genesis;
	 }
	 	
 		
	 }
 	
 return p;	
 } //n signfies the number of nodes to be created
 
 //for only one node just put n equals 1
 // editing the value of child root;
 struct list * editvalue(struct list * node, int childnumber, int newvalue)//child  number on sibling level
 {
 	struct list * p = node->referencechild;
 	if(childnumber == 0)
 	{
 		node->referencechild->data[2] = newvalue;
	 }
 	
  else{
  	 
  	for(int i = 1;i< n;i++)
  	 p =  p->rightsibling;
  	 
  	 p->data[1] = new value;
  	
  }	
 	 int value = node->data[1];  //this is for value
 	 int s = 0;
 		for(int i = 0; i< n; i++)// again applying checking condition
 	{
 		s = s+p[i]->data[1];
 		
 		if(s> value)
 		{
 			cout<<"error";
		 }
 	return node;
 }
 
 int longestchain(struct list * node){
 	// longest chain as i have implemented this data structure using left subtree right sibling format the longest chain can be found out using recursion
 	
 	if(node->leftsubtree==NULL);
 	{ 
 	return 0
	 }
	 if(node->rightsibling==NULL);
	 return 0;
	 
	 else 
	 return((longestchain(node->leftsubtree)>longestchain(node->rightsibling))?longestchain(node->leftsubtree):longestchain(node->rightsibling) + 1);
 	
 	
 //Dynamic programming will not be  much helpful in this as this is an n arry tree	
 	
 	
 }
 
 struct list * mergetwonodes(struct list * node1, struct list * node2)
 {
 	int n1 = longestchain(node1);
 	int n2 = longestchain(node2);
 	
 	
 	if(n1>n2)
 	{    
 	node1->data= node1->data+node2->data;
 	node2->leftsubtree = node2->referenceNodeId;//adjusting the tree
 		
		 free(node2);
 		
 		
	 }else
	 {
	 	node2->data= node2->data+node1->data;
 	node1->leftsubtree = node1->referenceNodeId;
 		
		 free(node1);
	 	
	 	
	 }
 	
 	
 	
 }
int main()
{
	
	
	
cout <<" all the functions have been employed can be used accordingly";
	return 0;
}
