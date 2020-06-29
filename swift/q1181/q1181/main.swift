//
//  main.swift
//  q1181
//
//  Created by Changhyun Baek on 2020/06/29.
//  Copyright © 2020 paikwiki. All rights reserved.
//

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

let inputCount = getInputCount()
var inputStrings = Array(Set(getMultipleInputStrings(stringCount: inputCount)))

inputStrings.sort()
inputStrings.sort(by: {$0.count < $1.count})
inputStrings.forEach({ string in
    print(string)
})
