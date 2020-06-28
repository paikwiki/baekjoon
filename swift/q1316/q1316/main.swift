//
//  main.swift
//  q1316
//
//  Created by Changhyun Baek on 2020/06/28.
//  Copyright © 2020 paikwiki. All rights reserved.
//
// https://www.acmicpc.net/problem/1316

import Foundation

// getInputCount: 정수 하나를 문자열로 입력받아 정수로 변환하여 반환하는 함수
private func getInputCount() -> Int {
    let inputString = readLine()
    return Int(inputString!)!
}

// getMultipleInputStrings: 입력받을 문자열의 수(Int)를 인자로 받아, 그 수만큼 입력을 받은 후 문자열 배열로 반환하는 함수
private func getMultipleInputStrings(stringCount: Int) -> [String] {
    var result = Array<String>.init(repeating: "", count: stringCount)
    for index in 0..<stringCount {
        result[index] = (readLine())!
    }
    return result
}

var alphabetCounts = Array<Int>.init(repeating: 0, count: 26)
let inputCount = getInputCount()
let inputStrings = getMultipleInputStrings(stringCount: inputCount)
var groupWordCount = inputStrings.count

inputStrings.forEach({ inputString in
    let characterArray = Array(inputString)
    for index in 0..<characterArray.count {
        let currentAlphabetIndex = Int(characterArray[index].asciiValue!) - 97;
        if alphabetCounts[currentAlphabetIndex] == 0 {
            alphabetCounts[currentAlphabetIndex] += 1
        } else if characterArray[index - 1] != characterArray[index] {
            groupWordCount -= 1
            break
        }
    }
    alphabetCounts = Array<Int>.init(repeating: 0, count: 26)
})

print(groupWordCount)
