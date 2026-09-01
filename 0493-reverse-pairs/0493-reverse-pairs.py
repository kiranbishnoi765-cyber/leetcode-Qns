class Solution:
    def reversePairs(self, nums: List[int]) -> int:
        def merge_sort(arr):
            n = len(arr)
            if n <= 1:
                return list(arr), 0

            mid = n // 2
            left_sorted, left_count = merge_sort(arr[:mid])
            right_sorted, right_count = merge_sort(arr[mid:])

            # is level ka cross-count — dono halves ke beech ke pairs
            cross_count = count_pairs(left_sorted, right_sorted)

            # ab dono sorted halves ko merge karo
            merged = merge(left_sorted, right_sorted)

            return merged, left_count + right_count + cross_count

        def count_pairs(left, right):
            cnt = 0
            j = 0
            for val in left:
                while j < len(right) and val > 2 * right[j]:
                    j += 1
                cnt += j   # j tak sab valid pairs hain, kyunki right bhi sorted hai
            return cnt

        def merge(left, right):
            merged = []
            i = j = 0
            while i < len(left) and j < len(right):
                if left[i] <= right[j]:
                    merged.append(left[i]); i += 1
                else:
                    merged.append(right[j]); j += 1
            merged.extend(left[i:])
            merged.extend(right[j:])
            return merged

        _, total = merge_sort(nums)
        return total