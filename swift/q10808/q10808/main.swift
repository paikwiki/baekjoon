//
//  main.swift
//  q10808
//
//  Created by Changhyun Paik on 2020/06/28.
//  Copyright © 2020 paikwiki. All rights reserved.
//
// https://www.acmicpc.net/problem/10808

import Foundation

let inputValue = readLine()

var alphabetCounts: [Int] = Array(repeating: 0, count: 26)

if let targetString = inputValue {
    targetString.forEach({ oneCharacter in
        alphabetCounts[Int(oneCharacter.asciiValue!) - 97] += 1
    })
}

let StringizedAlphabetCounts : [String] = alphabetCounts.map({ alphabetCount in
    return "\(String(alphabetCount))"
})

print(StringizedAlphabetCounts.joined(separator: " "))
