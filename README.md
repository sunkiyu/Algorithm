# Algorithm

## 1. 정렬 알고리즘
  * [선택 정렬](#선택-정렬)
  * [버블 정렬](#버블-정렬)
  * [삽입 정렬](#삽입-정렬)
  * [퀵 정렬](#퀵-정렬)
  * [병합 정렬](#병합-정렬)
* * *

## **선택 정렬**
![SelectionSort_Avg_case](https://user-images.githubusercontent.com/68372094/148903724-969b28a2-44d9-4f28-a40d-f02bb37042c9.gif)
###### 출처:https://codepumpkin.com/selection-sort-algorithms/

-i(0~N-1)번 인덱스부터 순차적으로 가장 작은 값이라 가정하고 i+1번째 인덱스부터 N-1번째 인덱스까지 
 i번째 인덱스보다 작은 값이 있는지 확인하여 있다면 i번째 인덱스로 교환(오른차순 기준)
 
최악/최선 상관없이 시간복잡도=
![image](https://user-images.githubusercontent.com/68372094/148515161-02e3d76f-87ef-42e0-bdf3-8a24f024b9da.png)
	
![image](https://user-images.githubusercontent.com/68372094/148515178-942082fc-deb6-495f-b92a-a41caeada715.png)

[소스코드](https://github.com/sunkiyu/algorithm/blob/1415051b34f4a976ca340cf1f9423e2705e1c242/SeletionSort)

## **버블 정렬**
![BubbleSort_Avg_case](https://user-images.githubusercontent.com/68372094/148903352-50ecb789-5eac-45b1-93e5-af060eb9a74b.gif)
###### 출처:https://codepumpkin.com/bubble-sort/

-배열을 N-1번 이웃하는 원소끼리 비교 정렬하게 되면 맨 뒤에 가장 큰 값이 오게 된다.
 그 후 N-2,N-3번 이웃하는 원소끼리 비교 정렬 수행. 
 
 최악/최선 상관없이 시간복잡도=![download](https://user-images.githubusercontent.com/68372094/148721648-05bb0900-acbc-4cc9-b421-4c332045fee0.png)
 ![image](https://user-images.githubusercontent.com/68372094/148722140-c8de042a-b1ab-4188-8439-5ba526a21645.png)
 
 [소스코드](https://github.com/sunkiyu/algorithm/blob/6a157a8a854bcd8a4344fa753d8ed75c3438f7de/Bubble%20Sort)
 
 ## **삽입 정렬**
 ![image](https://user-images.githubusercontent.com/68372094/148732495-54a0ab9e-ea5c-4588-80be-4d3b68eefa77.png)
 ###### 출처:https://ko.wikipedia.org/wiki/%EC%82%BD%EC%9E%85_%EC%A0%95%EB%A0%AC#/media/%ED%8C%8C%EC%9D%BC:Insertion_sort_001.PNG
 -배열의 모든 원소를 순회하며 앞에서부터 이미 정렬된 배열 부분과 비교/삽입하여 정렬을 수행한다.
 
 최선 시간복잡도(이미 정렬 된 경우)=![download](https://user-images.githubusercontent.com/68372094/148881222-92a0176b-677b-4979-83af-4329136ee492.png)
 
 최악 시간복잡도=![download](https://user-images.githubusercontent.com/68372094/148721648-05bb0900-acbc-4cc9-b421-4c332045fee0.png)
 
 ![image](https://user-images.githubusercontent.com/68372094/148880534-21a08ae3-c4a0-4a7e-b624-9e95bb8afd70.png)

[소스코드](https://github.com/sunkiyu/algorithm/blob/c1d8548eaf8056174e1896809589e3cddeb9cc08/Insertion%20Sort)

 ## **퀵 정렬**
![quick_sort_partition_animation](https://user-images.githubusercontent.com/68372094/148902851-5ae4e5d8-5399-4d63-9258-bb786a712a0f.gif)

 ###### 출처:https://www.tutorialspoint.com/data_structures_algorithms/quick_sort_algorithm.htm
 -배열을 일정한 기준(Pivot)에 따라 Pivot 보다 더 큰 값과 더 작은 값으로 나누는 작업을 반복 수행하여 정렬한다.
 
 최선 시간복잡도= __O(NlogN)__
 
 최악 시간복잡도= __O(N^2)__
 
 ![image](https://user-images.githubusercontent.com/68372094/148892507-b9b294bb-79eb-4936-9752-bfc5196cbc82.png)
 
 [소스코드](https://github.com/sunkiyu/Algorithm/blob/02b145e5f921cb65d1b4cfa754f69a54435fccb5/Sort/Quick%20Sort)
 
  ## **병합 정렬**
![MergeSort_Avg_case](https://user-images.githubusercontent.com/68372094/148902478-a0efb3cd-f697-43f1-bd97-11ece81c4e14.gif)
  ###### 출처:https://codepumpkin.com/merge-sort-sorting-algorithm/
 
 -배열을 배열의 크기가 1이 될 때까지 두 부분 배열로 나누는 것을 반복한 후, 두 부분 배열을 원래 크기가 될 때까지 합친다.
 최선 시간복잡도= __O(NlogN)__
 
 최악 시간복잡도= __O(N^2)__

 
