# 알고리즘에 따른 실행 시간

**Big O** : 실행 시간의 상한 (O는 on the order of의 의미)

- O(n^2) - bubble sort, selection sort
- O(n log n) - merge sort
- O(n) - linear search
- O(log n) - binary search
- O(1)



**Big Ω** : 실행 시간의 하한

- Ω(n^2) - bubble sort, selection sort
- Ω(n log n) - merge sort
- Ω(n) - bubble sort (adv)
- Ω(log n)
- Ω(1) - linear search, binary search



**Big Θ** : 실생 시간의 상한과 하한이 같은 경우

- Θ(n^2) - selection sort
- Θ(n log n) - merge sort



# sort algorithm

bubble sort : 두 개의 인접한 값을 비교하면서 올바른 순서로 위치를 교환하는 정렬 방식

```markup
Repeat n–1 times

    For i from 0 to n–2

        If i'th and i+1'th elements out of order

            Swap them
```

bubble sort (adv)

```markup
Repeat until no swaps

    For i from 0 to n–2

        If i'th and i+1'th elements out of order

            Swap them
```



selection sort : 배열 안의 자료 중 가장 작은 수를 찾아 첫 번째 위치인 수와 교환하는 정렬 방식

```markup
For i from 0 to n–1

    Find smallest item between i'th item and last item

    Swap smallest item with i'th item
```



merge sort : 원소가 하나있을 때까지 계속 반으로 나눈후 다시 순서에 따라 합치는 정렬 방식

```markup
If only one item
    Return
Else
    Sort left half of items
    Sort right half of items
    Merge sorted halves by order
```