//
// Created by Annie on 31.1.2024 г..
//

#ifndef QUESTIONSONCPP_HOMEWORK_ANSWERS_H
#define QUESTIONSONCPP_HOMEWORK_ANSWERS_H

#endif //QUESTIONSONCPP_HOMEWORK_ANSWERS_H

/*1. Syntax explanation:
int* ptr = &var;
Деклариран е указател към променлива, която е цяло число и сочи към друга променлива "var".
Declared pointer "p" to integer variable and points to variable "var".
Пример от реалния живот: Всеки един софтуер е изграден на базата на много структури данни.
Real life example: Еvery software uses a lot of pointers.
https://www.sololearn.com/en/Discuss/72446/int-p-var-what-is-this*/

/*2. Concept clarification:
-while loop - цикъл, който първо проверява условието, а след това изпълнява действието.
Loop which first check the condition and then execute the loop body.
-do-while loop - цикъл, който накрая на всяка операция проверя условието.
Loop which check the loop condition after executing loop body.
Пример от реалния живот: Ако влизаме в даден сайт с име и парола, чрез while loop може да се направи така, че
ако сме въвели грешна парола на екрана да се изписва "Incorrect password", докато не я въведем правилно.
При do-while обаче, трябва първо да бъде изпълнено някакво действие, например ако гледаме телевизия, пускаме даден тв канал,
гледаме го, но когато ни доскучае, сменяме канала. Или чистим пода (do), докато (while) не се махне мръсното.
Real life example: We can use while loop for log in site. The program should return "Incorrect password", untill
you don't enter  the correct password.
For do-while we have first execute loop body, so in example if we watch a TV, we watch a channel and when it starts to be
boring, we change it. Or we clean (do), untill (while) it is no durty anymore.*/

/*3.Code analysis:
int 5;
for (int i=1; i<=n; i++){
    if (i < 0){
        cout << "-" << endl
    } else {
        cout << "+" << endl;
    }
}
В този пример фор цикълът обхваща елементите от 1 до 5 и минава през всеки един от тях, а чрез if-а се извежда на екрана + или -.
Цикълът се върти 4 пъти, защото първоначалната стойност е 1, а последната 5, като всеки път увеличава бройката с едно. В началото е 1,
после, заради i++ става 2 и тн., докато не достигне посления елемент, който е 5, защото такова е условието - i<=n.
In this example the for loop goes arround 5 elements - from 1 to 5. It itterates 4 times, because first value is 1, and the last value
is 5, so it counts by 1 every time. First it is 1, then bacause of i++ become 2 and etc., untill it comes to last element - 5,
because that is the condition - i<=n.
Пример от реалния живот: При онлайн пазаруване, фор цикъл може да се използва, за да се сметне крайната сума на продуктите в кошницата.
Real life example: For loop can be used for online shopping to count total value of products in the basket.*/

/*
4. Function usage:
Можем да се предпазим от дубликация на кода ако преизползваме функция (едно и също име на функции, но различни аргументи)
или с презаписване на функция (едни и същи функции, използвани в различни класове).
We can prevent code dublication with function overloading (same name of functions, but different arguments) or
function overriding (same function for different classes).
Example for simple function which calculates square of a number:
int calculateSquare(int number){
    return number*number;
};
Пример от реалния живот: Преизползване на функции може да бъде използвано в банкомат, където при всяко
едно теглене на пари, от всеки един човек, има една и съща такса. Презаписване на функция може да се нарече, ако
колата ми има нужда от нова броня и нови калници, купя ги, сменя ги и така тя продължава да върви по един и същи начин и да хаби
едно и също гориво, но пък има нов външен вид.
Real life example: Function overloading can be used in ATM, where for every withdraw, for everyone, there is the same tax.
Function overriding can be if i have a car and it needs new armour and fenders, and if i buy them and put them to the car, it will
drive like before and it will use fuel like before, but it will has a new appearance.*/

/*
5. Memory managment:
Управлението на паметта е необходимо, за да се гарантира, че няма загуба на памет.
Паметта, която C++ програмата използва, е разделена на различни части.
Стек: В стека се съхраняват всички променливи, които са декларирани във функцията и друга информация, свързана с функцията.
Heap: Heap е неизползвана памет и частта, от която паметта се разпределя динамично, когато програмата се изпълнява.
Memory management is required to ensure that there is no wastage of memory.
The memory that a C++ program uses is divided into different parts.
Stack: In stack, all the variables that are declared inside the function and other information related to the function are stored.
Heap: Heap is unused memory and the part from where the memory is allocated dynamically when the program runs.
https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-memory-management#what_is_c_memory_management*/

/*6. Object-Oriented Programming:
Капсулирането в C++ се дефинира като опаковане на данни и информация в една единица.
То се постига чрез използване на спецификатори за достъп като private, protected и public даден клас.
Encapsulation in C++ is defined as the wrapping up of data and information in a single unit.
Encapsulation in C++ is achieved by using access specifiers like private , protected , and public within a class.
Пример от реалния живот: Клавиатурата ако е един клас, вътре в себе си тя извършва много действия. Например
чрез натискане на определни клавиши се случат определи неща (публично), но ние не знаем как точно се случва това (частно).
Real life example: If keyboard is a class, there are many actions inside it. For example
pressing certain keys causes certain things to happen (public), but we don't know exactly how that happens (private).
https://www.geeksforgeeks.org/encapsulation-in-cpp/*/

/*
7. Error handling:
При изпълнение на програма в С++ често възникват грешки, и ако това се случи, програмата спира и в конзолата се изписва съобщение
къде и каква е грешката.
When we run a program in C++ often there are errors, so if this happen, C++ will stop and generate an error message in the
terminal which means what and where is the error.
Еxample of try-catch block:
try {
int n = 10;
if (n >= 15) {
cout << "Okay.";
} else {
throw (n);
}
}
catch (int myNum) {
cout << "Not okay.";
cout << "Number is: " << myNum;
}
https://www.w3schools.com/cpp/cpp_exceptions.asp*/

/*
8. STL Containers:
std::vector в C++ е шаблон на класа, който съдържа векторния контейнер и неговите функции-членове.
Той е дефиниран в заглавния файл <vector>. Векторите се използват, защото чрез тях е по-бързо и ефективно изпълнението на
код, както и към тях автоматично се добавят новосъздадени обекти. Също така допринасят за съхранението на памет, за да се предотврати
загубата на данни.
std::vector in C++ is the class template that contains the vector container and its member functions.
It is defined inside the <vector> header file. Vectors are used because with them it is faster and more efficient to execute
code, as well as new created objects are automatically added to them. Also they contribute to memory storage to prevent
data loss.
Пример от реалния живот: По-бързо, лесно, ефективно и сигурно ще бъде, ако в онлайн книжарница всички книги, заедно с техните автори са
декларирани във вектор, от колкото, като отделни обекти към клас.
Real life example: It will be faster, easier, more efficient and more secure if all the books and their authors in online book store,
are declared in a vector, than individual objects to a class.
https://www.geeksforgeeks.org/vector-in-cpp-stl/*/

/*
9. Pointers and References:
Указатели: Указателят е променлива, която съдържа адреса на паметта на друга променлива.
Референции: Референтната променлива е псевдоним, т.е. друго име за вече съществуваща променлива.
Pointers: A pointer is a variable that holds the memory address of another variable.
References: A reference variable is an alias, that is, another name for an already existing variable.
Референции се използват във функционални параметри и връщани типове.
Указатели се използват ако е необходима аритметика на указател или подаване на NULL указател.
Use references in function parameters and return types.
Use pointers if pointer arithmetic or passing a NULL pointer is needed.
Референциите са за предпочитане и е хубаво референции да се използват, където може, а указатели, където трябва.
References are preferred and it is good to use references where is possible and pointers where is appropriate.
Пример от реалния живот: В меню на ресторант можем да направим референция на "Пилешки късчета", която да съдържа адреса на
"Основни ястия", като по този начин не можем да променим "локацията" на тази референция. Ако използваме указател обаче може да
направим указател към "Пилешки късчета", който съдържа адреса на "Основни ястия", но след време можем да променим адреса към
"Ястия от пилешко месо" и също така, можем да пратим указателят към функция, която да принтира съставките на ястието.
Real life example: In a restaurant menu, we can make a reference to "Chicken nuggets" that contains the address of
"Main Dishes", so in this way we cannot change the "location" of this reference. If we use a pointer, we can
make a pointer to "Chicken nuggets" which contains the address of "Main Dishes", but we can change the address to
"Chicken dishes" and also, we can pass the pointer to a function that will print the ingredients of the dish.
https://www.geeksforgeeks.org/pointers-vs-references-cpp/
https://medium.com/@rogerfavelron/lets-understand-references-and-pointers-in-c-e1330b6b4145*/

/*
10. Advanced features:
Шаблоните са много необходими за програмирането, защото една функция, може да бъде използвана за различни типове данни,
вместо да се пише един и същи код за всеки тип данни.
Templates in programming are necessery, because one function can be used for different data types,
rather thas writing the same code for every data type.
Пример за шаблонна функция : сортиране(), принтиране().
Example of template function : sort(), print().
Пример от реалния живот: Ако трябва да принтираме информация на потребител, която включва и име от тип string, и години от тип int,
можем просто да използваме print() функцията, вместо да разписваме един и същи код и за двата типа данни.
Real life example: If we have to print information about user, which includes name of type string and age of type int, we can just
use print() function rather than write the same code for the both of data types.*/
