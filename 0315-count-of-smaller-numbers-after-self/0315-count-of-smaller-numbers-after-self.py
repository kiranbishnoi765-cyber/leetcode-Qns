class Solution:
    def countSmaller(self, nums: List[int]) -> List[int]:
        n = len(nums)
        counts = [0] * n          # yahi hamara final answer store karega, index-wise
        indices = list(range(n))  # [0,1,2,...,n-1] — hum values nahi, INDICES sort karenge

        def merge_sort(idx_list):
            m = len(idx_list)
            if m <= 1:
                return idx_list   # ek hi index hai, already "sorted"

            mid = m // 2
            left = merge_sort(idx_list[:mid])
            right = merge_sort(idx_list[mid:])

            return merge(left, right)

        def merge(left, right):
            merged = []
            i = j = 0
            right_smaller_count = 0   # kitne right-wale elements ab tak chhote mil chuke hain

            while i < len(left) and j < len(right):
                # nums[left[i]] aur nums[right[j]] compare kar rahe hain — VALUES se,
                # but move INDEX ho raha hai
                if nums[left[i]] <= nums[right[j]]:
                    # left ka element bada/equal hai utne right elements se
                    # jitne already "cross" ho chuke hain (right_smaller_count)
                    counts[left[i]] += right_smaller_count
                    merged.append(left[i])
                    i += 1
                else:
                    # right ka element chhota hai — isliye future left elements ke liye
                    # yeh ek aur "chhota right element" ban gaya
                    right_smaller_count += 1
                    merged.append(right[j])
                    j += 1

            # jo left mein bacha hai, usme sab right elements chhote the (poora right consume ho chuka)
            while i < len(left):
                counts[left[i]] += right_smaller_count
                merged.append(left[i])
                i += 1

            # jo right mein bacha hai, usse koi comparison nahi chahiye, seedha append
            while j < len(right):
                merged.append(right[j])
                j += 1

            return merged

        merge_sort(indices)
        return counts