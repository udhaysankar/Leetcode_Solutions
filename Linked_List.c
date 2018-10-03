/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *address;
};
int main()
{
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    first=(struct *node)malloc(sizeof(struct node));
    second=(struct *node)malloc(sizeof(struct node));
    third=(struct *node)malloc(sizeof(struct node));
    return 0;
}