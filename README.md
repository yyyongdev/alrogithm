# alrogithm

### [깊이 우선 탐색 (DFS)](dfs.cpp)   
깊이 우선 탐색으로 그래프를 순회하는 방법입니다  
노드를 순회할 때 아직 발견하지않은 인접 노드가 없을때까지 타고 들어갑니다   
주로 재귀함수나 스택을 활용하여 구현하는데, 자료구조 스택을 활용하여 DFS를 구현했습니다     
[DFS 그림으로 이해하기](https://docs.google.com/presentation/d/e/2PACX-1vSPcMM1nv3jqT1XgqAdZXc77mdX5Mf3tS5VwyG16Am_qiMbddoI2M5ZcowJkvqHTGnssqIUFTHt-GEK/embed?start=false&loop=false&delayms=3000)   

### [너비 우선 탐색 (BFS)](bfs.cpp)   
너비 우선 탐색으로 그래프를 순회하는 방법입니다  
노드를 순회할 때 모든 인접 노드들을 먼저 순회하고나서 다음 인접노드를 탐색합니다.    
자료구조 큐를 활용하여 BFS를 구현했습니다      
[BFS 그림으로 이해하기](https://docs.google.com/presentation/d/e/2PACX-1vQcJjpJ5Oj_gk-ycnS-MDk1-ofF4beCOgxHlgclyfBdlueaj8KoNdPmdO-1zow1b-Hf1-V9jLYbL8hT/embed?start=false&loop=false&delayms=3000)   

### [거품 정렬 (Bubble Sort)](bubble-sort.cpp)   
두 인접한 원소를 검사하여 정렬하는 방법으로 시간복잡도 O(n²)의 비효율적인 정렬 알고리즘입니다  
정렬속도가 느리지만 코드가 단순하고 쉬워서 정렬 알고리즘을 처음 접하는 사람이 공부하기 좋습니다  
[Bubble Sort 그림으로 이해하기](https://docs.google.com/presentation/d/e/2PACX-1vTuuuffF5TkuPamEejpFhm7z_9J_GxjRu29K2eD5qAOQkCOoxojw0dmKt0enpYUWiHUeADQnZW9WLsm/embed?start=false&loop=false&delayms=3000)   

### [선택 정렬 (Selection Sort)](selection-sort.cpp)   
주어진 배열에서 최솟값을 찾아 맨앞의 원소와 교체하는 방법으로 시간복잡도 O(n²)의 비효율적인 정렬 알고리즘입니다  
같은 시간복잡도를 가진 거품정렬과 비교 했을때 선택정렬이 실제로 두 원소를 교환하는 횟수가 더 적기때문에 조금 더 빠릅니다  
[Selection Sort 그림으로 이해하기](https://docs.google.com/presentation/d/e/2PACX-1vRPvWkPjx5LRIjhtwX9iWW7dtRZibhpbRnsKeTxUn1eOXyv6a9EKNp9gIIdGyc_ikbALGF87VOljE0x/embed?start=false&loop=false&delayms=3000)   

### [삽입 정렬 (Insertion Sort)](insertion-sort.cpp)   
이미 정렬된 배열에 자신의 위치를 찾아 들어가는 방법으로 시간복잡도 O(n²)의 비효율적인 정렬 알고리즘입니다  
같은 시간복잡도를 가진 거품정렬, 선택정렬과 비교했을때 숫자비교횟수가 적어서 조금 더 빠르다고 볼 수도 있지만  
정렬된 배열 속으로 자신의 위치를 찾아들어가며 순차적으로 값을 교환하기 때문에 복사 비용이 클경우 더 느릴 수 있습니다  
[Insertion Sort 그림으로 이해하기](https://docs.google.com/presentation/d/e/2PACX-1vQSE5tGmlOk46et7CHrl5wt3fQa-kAwUC1W4cElnJ3CWTXyIA-Ly2ZPhlI5C5wMxF2qgWL46sARLqop/embed?start=false&loop=false&delayms=3000)   

### [퀵 정렬 (Quick Sort)](quick-sort.cpp)   
배열의 임의 원소보다 작은 값 배열과 큰 값 배열로 나누고, 나뉜 두 배열에 대해서 재귀적으로 반복하는 방법으로 평균 시간복잡도 O(n log n), 최악 시간복잡도 O(n²)의 정렬 알고리즘 입니다  
분할정복 알고리즘으로 같은 시간복잡도 O(n log n)를 가진 병합 정렬, 힙 정렬과 비교했을때 평균적으로 더 빠른 정렬속도를 기대할 수 있습니다  
[Quick Sort 그림으로 이해하기](https://docs.google.com/presentation/d/e/2PACX-1vT3C52uDh5TIJBNjxXSRSmGiBVoUu39IFfXF3LofFKGhWR2a6YF5Tdp2jnj1WEIgQ3wOnicX1unUH2A/embed?start=false&loop=false&delayms=3000)   

### [병합 정렬 (Merge Sort)](merge-sort.cpp)   
배열 길이가 1이하가 될때까지 계속 반씩 나누고, 나뉜배열을 다시 병합하며 정렬하는 방법으로 시간복잡도 O(n log n)의 정렬 알고리즘 입니다  
천재 폰 노이만이 개발한 분할정복 알고리즘으로 최악의 경우에도 시간복잡도 O(n log n)을 보장합니다  
[Merge Sort 그림으로 이해하기](https://docs.google.com/presentation/d/e/2PACX-1vTIwXODl7MUEMeUDbQn8Mc3aP9lQ4DwWGi1CXUxm3ssrGPfS92t40kkbReT2Mao9KehShaKW-lZkoJ8/embed?start=false&loop=false&delayms=3000)   

### [힙 정렬 (Heap Sort)](heap-sort.cpp)   
최대힙 또는 최소힙을 만들며 정렬하는 방법으로 시간복잡도 O(n log n)의 정렬 알고리즘 입니다  
완전 이진 트리로 구성 되어야하며 최악의 경우에도 시간복잡도 O(n log n)을 보장합니다  
[Heap Sort 그림으로 이해하기](https://docs.google.com/presentation/d/e/2PACX-1vQQMmF20_L1Wt5am-yWlQVk8UrXMaFcnAs8ehxaXqjECSErkhnG0kd0kSd5HBiF7x49BS7pSmpX7kJ1/embed?start=false&loop=false&delayms=3000)   

### [계수 정렬 (Counting Sort)](counting-sort.cpp)   
배열 내 모든 값의 중복 횟수를 세서 정렬하는 방법으로 조건부 시간복잡도 O(n)의 정렬 알고리즘 입니다  
0부터 배열 내 가장 큰 값까지 배열 공간을 만든 후 요소 값에 해당하는 인덱스를 증가시키기 때문에 가장 큰 값이 정렬 속도에 크게 영향을 줍니다   
조건에 따라 모든 정렬 알고리즘 중 가장 빠를 수도, 가장 느릴 수도 있습니다  
[Counting Sort 그림으로 이해하기](https://docs.google.com/presentation/d/e/2PACX-1vQTajyMsMIC3gtOOFrYYYYTC4lG4NaKWo5vlueTWRDjooM5ZyGOGK4clDzGGovPtTXfGq0tM-fe7VzT/embed?start=false&loop=false&delayms=3000)   