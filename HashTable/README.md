# HashTable

* 해시 테이블은 (Key, Value)로 데이터를 저장하는 자료구조.   

![image](https://user-images.githubusercontent.com/68372094/165245669-48cd462c-5a63-49d8-af87-18384662f6e3.png)   
* 해시맵과 해시테이블의 차이는 해시테이블은 동기화를 지원하지만 해시맵은 동기화를 지원하지 않는다.   
* HashTable 자료구조는 Insert,Delete,Find O(1) 시간복잡도   
* 해시 함수는 Input 값을 Output으로 바꾸는 함수이다. Input이 다르지만 같은 Output이 나올수 있는데 이런것을 해시 충돌이라 한다.   
* 해시 충돌은 분리 연결법, 개방 주소법으로 해결하고 있다.
 
