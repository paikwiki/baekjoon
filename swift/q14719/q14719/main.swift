//
//  main.swift
//  q14719
//
//  Created by Changhyun Baek on 2020/10/26.
//

var height: Int;
var width: Int;
var idx: Int;
var idxHighestBlock: Int;
var idxCurrentHighestBlock: Int;
var total: Int;

var inputData = (readLine()!).split(separator: " ").map { Int($0)! }
var blocks = (readLine()!).split(separator: " ").map { Int($0)! }

(height, width) = (inputData[0], inputData[1])

idxHighestBlock = 0
for i in 1..<width {
    idxHighestBlock = blocks[idxHighestBlock] > blocks[i] ? idxHighestBlock : i
}

total = 0
idxCurrentHighestBlock = 0
idx = idxCurrentHighestBlock
while idx < idxHighestBlock {
    if blocks[idxCurrentHighestBlock] > blocks[idx] {
        total += (blocks[idxCurrentHighestBlock] - blocks[idx])
    } else {
        idxCurrentHighestBlock = idx
    }
    idx += 1
}

idxCurrentHighestBlock = width - 1
idx = idxCurrentHighestBlock
while idx > idxHighestBlock {
    if blocks[idxCurrentHighestBlock] > blocks[idx] {
        total += (blocks[idxCurrentHighestBlock] - blocks[idx])
    } else {
        idxCurrentHighestBlock = idx
    }
    idx -= 1
}

print(total)
