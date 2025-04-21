class Solution:
    def can_divide(self, substring, str1): 
        if len(str1) % len(substring): 
            return False
        
        res = substring * (len(str1) // len(substring))
        return res == str1

    def gcdOfStrings(self, str1: str, str2: str) -> str:
        
        gcd = ''

        curr_string = ''

        for char in str1: 
            curr_string += char
            if self.can_divide(curr_string, str1) and self.can_divide(curr_string, str2): 
                gcd = curr_string
        
        return gcd

