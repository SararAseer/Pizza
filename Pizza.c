#include <stdio.h>
#include <stdlib.h>

struct Custom{char* type; int toppings;};

struct Custom example(){
  int top= rand()%20;
  char ty [3][20]={{"Meat"},{"Cheese"},{"Veggie"}};
  struct Custom pizza;
  int i=rand()%3;
  int b=0;
  char h[20]="";
  while(ty[i][b]){
    h[b]=ty[i][b];
    b++;
  }
  pizza.type=&h;
  pizza.toppings=top;
  return pizza;

}

void items(struct Custom x){
  char t[20]="";
  int i=0;
  while(*(x.type+i)){
    t[i]=*(x.type+i);
    i++;
  }
  printf("Type of pizza: %s \n", &t);
  printf("Number of toppings on pizza: %i \n",x.toppings);

}

int modTo(struct Custom * x,int b){
  x->toppings=b;
  return b;
}

char* modTy(struct Custom* a,char* b){
  a->type=b;
  return b;
}

int main(){
  srand(time(0));   
  printf("Created Foo(a pizza) with 0 toppings and Type Veggie: \n");
  struct Custom foo;
  foo.toppings=0;
  foo.type="Veggie";
  items(foo);
  printf("Edited Foo(a pizza) to have 2 toppings and Type Meat: \n");
  modTo(&foo,2);
  modTy(&foo,"Meat");
  items(foo);
  printf("Example Function has 3 options for type(Meat,Veggie,Cheese) and a max of 20 toppings:  \n");
  items(example());
  items(example());
  items(example());

  return 0;
  

}
