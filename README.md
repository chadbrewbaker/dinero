Dinero is a CPU cache simulator developed by the univerity of Wisconson.

Due to pointer shenanigans in in OS X 10.12 "Sierra", Intel's Pintools are no longer working and I was searching for an alternative toolchain to model the cache performance.


Using the C standard library we can print the address of a pointer in hexadecimal.
~~~c
int main(){
int a;
printf("%p", &a); /*Print the addres of "a"*/
printf("%p, main); /*Print the address of the main function*/
return 0;
}
~~~

