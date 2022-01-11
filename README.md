# Algorithm

## **선택 정렬**
![Selection-Sort-Animation](https://user-images.githubusercontent.com/68372094/148721259-27a581de-95ab-4050-99bf-1ecdbeea4f99.gif)

###### 출처:https://en.wikipedia.org/wiki/Selection_sort#/media/File:Selection-Sort-Animation.gif

-i(0~N-1)번 인덱스부터 순차적으로 가장 작은 값이라 가정하고 i+1번째 인덱스부터 N-1번째 인덱스까지 
 i번째 인덱스보다 작은 값이 있는지 확인하여 있다면 i번째 인덱스로 교환(오른차순 기준)
 
최악/최선 상관없이 시간복잡도=
![image](https://user-images.githubusercontent.com/68372094/148515161-02e3d76f-87ef-42e0-bdf3-8a24f024b9da.png)
	
![image](https://user-images.githubusercontent.com/68372094/148515178-942082fc-deb6-495f-b92a-a41caeada715.png)

[소스코드](https://github.com/sunkiyu/algorithm/blob/1415051b34f4a976ca340cf1f9423e2705e1c242/SeletionSort)

## **버블 정렬**
![Bubble-sort-example-300px](https://user-images.githubusercontent.com/68372094/148721368-c4c1a84f-94cc-4391-a553-eeb7ae31350a.gif)

###### 출처:https://en.wikipedia.org/wiki/Bubble_sort#/media/File:Bubble-sort-example-300px.gif

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
 ![image](https://user-images.githubusercontent.com/68372094/148881658-b2da6e22-f0bd-4e9c-808b-0afc76bb2831.png)
 ###### 출처:https://en.wikipedia.org/wiki/Quicksort#/media/File:Quicksort-diagram.svg
 -배열을 일정한 기준(Pivot)에 따라 Pivot 보다 더 큰 값과 더 작은 값으로 나누는 작업을 반복 수행하여 정렬한다.
 
 최선 시간복잡도= O(NlogN)
 최악 시간복잡도= O(N^2)
 
