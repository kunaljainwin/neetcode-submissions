func hasDuplicate(nums []int) bool {
    //create a hashmap
    //iterate on array
    ////keep checking if current value is already present in hashmap or not.
    set:=make(map[int]struct{})

    for _,val := range(nums){
        if _,ok:=set[val];ok {
            return ok
        }
        set[val]=struct{}{}
    }
    return false
}
