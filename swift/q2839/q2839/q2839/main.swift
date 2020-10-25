//
//  main.swift
//  q2839
//
//  Created by Changhyun Baek on 2020/10/25.
//

var inputValue = Int(readLine()!)!
var packs = [3, 5]

var d = Array(repeating: 5001, count: inputValue + 1)

d[0] = 0
packs.forEach { pack in
    if pack <= inputValue {
        for idx in pack...inputValue {
            if d[idx - pack] != 5001 {
                d[idx] = min(d[idx], d[idx - pack] + 1)
            }
        }
    }
}

if d[inputValue] == 5001 {
    print(-1)
} else {
    print(d[inputValue])
}
