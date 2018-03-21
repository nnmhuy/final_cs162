//
//  student.cpp
//  final_cs162
//
//  Created by Nguyen Ngoc Minh Huy on 3/20/18.
//  Copyright © 2018 Nguyen Ngoc Minh Huy. All rights reserved.
//

#include "student_menu.h"

void studentMenu(){
    clear_screen();
    cout << "STUDENT MENU \n"
    << "1. Check-in \n"
    << "2. View check-in result \n"
    << "3. View score of a course \n"
    << "4. View schedules \n"
    << "0. Back to main menu \n"
    << "\n"
    << "Please input route number: ";
    int route = get_route();
    switch (route) {
        case 1:
            checkIn();
            break;
        case 2:
            viewCheckInResult();
            break;
        case 3:
            viewScoreOfACourse();
            break;
        case 4:
            viewSchedules();
            break;
        case 0:
//            main_menu();
            break;
        default:
            break;
    }
}

void checkIn(){
    clear_screen();
    cout << "CHECK-IN \n";
}

void viewCheckInResult(){
    clear_screen();
    cout << "VIEW CHECK-IN RESULT \n";
}

void viewScoreOfACourse(){
    clear_screen();
    cout << "VIEW SCORE OF A COURSE \n";
}

void viewSchedules(){
    clear_screen();
    cout << "VIEW SCHEDULES \n";
}
