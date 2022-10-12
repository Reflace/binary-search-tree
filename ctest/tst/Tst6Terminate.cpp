#include <iostream>
#include "BinTree.hpp"

using namespace std;

int Tst6Terminate(int argc, char *argv[]) {
    
    BinTree<int> tree;
    BinTree<int>* treeptr = &tree;
    
    for(int i = 0; i < 100; i++)
    {	
    	treeptr = treeptr->Insert(treeptr, i);
    }
   
    treeptr->Terminate(treeptr);
    
    if(treeptr->is_empty(treeptr))
    {
    	return false;
    }
    else {
    	return true;
    }
    
   
}
