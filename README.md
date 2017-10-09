# test_01

### 0.0.1

Написать функцию разворота списка
```
struct Node {
  int data;
  Node * next;
};

Node * reverse( Node * head ) {
}
```
### 0.0.2
Дана неубывающая посследовательность чисел, нужно найти 2 числа этой последовательности, сумма которых равна определенному числу. Указать категорию итераторов.
```
template <typename Iterator, typename T>
auto find_two_elements_with_sum( Iterator first, Iterator last, T c )
-> std::pair<bool, std::pair<Iterator, Iterator>>
```
### 0.0.3
Реализовать функцию слияния двух отсортированных массивов. Указать категорию итераторов.
```
template <typename Iterator1, typename Iterator2>
auto merge( Iterator1 first1, Iterator1 last1, Iterator1 first2, Iterator1 last2, Iterator2 output ) -> Iterator2
```
### 0.0.4
Реализовать функцию сортировки массива, **использующую** дополнительную память. Указать категорию итераторов.
```
template <typename Iterator1, typename Iterator2>
void merge_sort( Iterator1 first, Iterator1 last, Iterator2 memory )
```
### 0.0.5
Реализовать функцию сортировки массива, **не использующую** дополнительную память. Указать категорию итераторов.
```
template <typename Iterator>
void merge_sort( Iterator first, Iterator last )
```
