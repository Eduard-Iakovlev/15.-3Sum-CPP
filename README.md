# 15. 3Sum

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets. 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0. 

Constraints:

3 <= nums.length <= 3000
-105 <= nums[i] <= 105

# 15. 3Sum

Учитывая целочисленный массив nums, верните все тройки [nums[i], nums[j], nums[k]] такие, что i != j, i != k, и j != k, и nums[i] + nums[j] + nums[k] == 0.

Обратите внимание, что набор решений не должен содержать повторяющихся триплетов. 

Пример 1:

Ввод: nums = [-1,0,1,2,-1,-4]
Вывод: [[-1,-1,2],[-1,0,1]]
Объяснение: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
 Отдельные тройки — это [-1,0,1] и [-1,-1,2].
 Обратите внимание, что порядок вывода и порядок троек не имеют значения.
Пример 2:

Ввод: nums = [0,1,1]
Вывод: []
Объяснение: Единственный возможный триплет не в сумме дает 0.
Пример 3:

Ввод: nums = [0,0,0]
Вывод: [[0,0,0]]
Объяснение: Единственный возможный триплет в сумме дает 0. 

Ограничения:

3 <= nums.length <= 3000
-105 <= nums[i] <= 105
