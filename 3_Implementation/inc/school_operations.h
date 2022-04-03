/**
 * @file school_operations.h
 * @author Dhivya Shree S (dhivyasenthil2481@gmail.com)
 * @brief Header file for School Billing System
 * @version 0.1
 * @date 2022-03-26
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _SCHOOL_OPERATIONS_H_
#define _SCHOOL_OPERATIONS_H_

/**
 * @brief Shows the option to choose students or teachers
 * @return generate options to choose add or modify the students and teachers record
 */
void start();

/**
 * @brief Shows options to add the students or teachers record
 * @return generate message "Student or teachers record successfully addedd"
 */
void adding_records();


/**
 * @brief Shows options to search the students or teachers record
 * @return generate Student or teachers searched record 
 */
void searching_records();

/**
 * @brief Shows options to update the students or teachers record
 * @return generate Student or teachers updated record 
 */
void update_records();

/**
 * @brief Shows options to delete the students or teachers record
 * @return generate message "Student or teachers record successfully deleted"
 */
void deleting_records();

/**
 * @brief Shows options to calculate the teachers salary
 * @return Shows teachers salary
 */
void salary();

/**
 * @brief Shows options to calculate the students fee
 * @return Shows students fee
 */
void fee();

/**
 * @brief Exit the program
 * @return exit the program
 */
void exits();

/**
 * @brief Checks the date
 * @return enter into the program
 */
int checking_date();

/**
 * @brief Checks the class of the student
 * @return enter into the program
 */
int check_class();


#endif /* #define _SCHOOL_OPERATIONS_H_ */