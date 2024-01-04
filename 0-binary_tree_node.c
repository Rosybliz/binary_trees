#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
    binary_tree_t *new=malloc(sizeof(struct_binary_tree_t));
    if(new != NULL){
        new->parent=parent;
        new->n=value;
        new->left=NULL;
        new->right=NULL;
        return(new);
    }
    else{
        return(NULL);
    }
}
