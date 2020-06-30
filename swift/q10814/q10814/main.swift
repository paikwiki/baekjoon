//
//  main.swift
//  q10814
//
//  Created by Changhyun Paik on 2020/06/30.
//  Copyright © 2020 paikwiki. All rights reserved.
//
// https://www.acmicpc.net/problem/10814

let inputCount = Int(readLine()!)!
var members = Array<(Int, String)?>.init(repeating: nil, count: inputCount)

for index in 0..<inputCount {
    let inputMember = readLine()!
    let temp = inputMember.split(separator: " ", maxSplits: 2, omittingEmptySubsequences: true)
    members[index] = (Int(temp[0])!, String(temp[1]))
}

members.sort(by: { $0!.0 < $1!.0 })
members.forEach({
    print("\($0!.0) \($0!.1)")
})
