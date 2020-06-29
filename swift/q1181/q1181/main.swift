//
//  main.swift
//  q1181
//
//  Created by Changhyun Baek on 2020/06/29.
//  Copyright © 2020 paikwiki. All rights reserved.
//

let inputCount = Int(readLine()!)!
var inputSet = Set<String>()

for _ in 0..<inputCount {
    inputSet.insert(readLine()!)
}

var inputStrings = Array(inputSet)

inputStrings.sort()
inputStrings.sort(by: {$0.count < $1.count})
inputStrings.forEach({ print($0) })
