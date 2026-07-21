class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        output = []
        sorted_strs = {}
        
        for str in strs:
            str_key = "".join(sorted(str))
           
            if str_key in sorted_strs:
                output[sorted_strs.get(str_key)].append(str)
            else:
                sorted_strs[str_key] = len(sorted_strs)
                output.append([str])
        return output

            

