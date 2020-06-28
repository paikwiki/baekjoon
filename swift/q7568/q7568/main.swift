//
//  main.swift
//  q7568
//
//  Created by Changhyun Paik on 2020/06/28.
//  Copyright © 2020 paikwiki. All rights reserved.
//
// https://www.acmicpc.net/problem/7568

import Foundation

struct Student {
    var id: Int
    var weight: Int
    var height: Int
    var rank: Int?
}

var students: [Student] = []

let studentCount = Int(readLine()!)!

for studentId in 0..<studentCount {
    let studentInformation = readLine()!
    let student = Student(
        id: studentId,
        weight: Int((studentInformation.split(separator: " "))[0])!,
        height: Int((studentInformation.split(separator: " "))[1])!,
        rank: nil
    )
    students.append(student)
}

for index in 0..<students.count {
    var rank = 1
    for theOtherStudent in students {
        if theOtherStudent.weight > students[index].weight &&
            theOtherStudent.height > students[index].height {
            rank += 1
        }
    }
    students[index].rank = rank
}

let stringizedRanks: [String] = students.map({ student in
    return "\(String(student.rank!))"
})
print(stringizedRanks.joined(separator: " "))
