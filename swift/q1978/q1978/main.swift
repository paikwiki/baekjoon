//
//  main.swift
//  q1978
//
//  Created by Changhyun Paik on 2020/06/30.
//  Copyright © 2020 paikwiki. All rights reserved.
//
// https://www.acmicpc.net/problem/1978

let inputCount = Int(readLine()!)!
let inputString = readLine()!

let numbers = (inputString.split(separator: " ")).map({ Int($0)! })
let maxNumber = numbers.max()!
var intNumbers = Array<Int>.init(repeating: 0, count: maxNumber + 1)
var primeNumbers = Array<Int>()

for index in 2...maxNumber {
    if intNumbers[index] != 1 {
        intNumbers[index] = 1
        primeNumbers.append(index)
    }
    var innerIndex = 2
    while (index * innerIndex) <= maxNumber {
        intNumbers[index * innerIndex] = 1
        innerIndex += 1
    }
}

let resultNumbers = numbers.filter({ primeNumbers.contains($0) })
print(resultNumbers.count)
