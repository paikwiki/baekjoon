//
//  main.swift
//  q2292
//
//  Created by Changhyun Baek on 2020/10/26.
//

var inputValue = Int(readLine()!)!

var d = Array(repeating: 0, count: 1000000)
var count: Int

d[0] = 0
d[1] = 7
count = 1
if inputValue == 1 {
    print(1)
} else {
    while d[count] < inputValue {
        count += 1
        d[count] = d[count - 1] + 6 * count
    }
    print(count + 1)
}
