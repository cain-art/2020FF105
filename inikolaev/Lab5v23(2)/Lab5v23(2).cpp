#include<conio.h>
#include<iostream>

int const   BUILD_NUM_STEP = 2;

bool successfully_completed_block
(
    int first_num_in_block,
    int block_sum,
    int & last_num_in_block
)
{
    bool bool_res;
    int     sum = 0;

    for (
        int
        cur_num = first_num_in_block;
        sum <= block_sum;
        cur_num += BUILD_NUM_STEP
        )
    {
        sum += cur_num;
        bool_res = sum == block_sum;

        std::cout << "#"
            << cur_num
            << '\t'
            << "sum = "
            << sum
            << std::endl;

        if (bool_res)
        {
            std::cout << std::endl;
            last_num_in_block = cur_num;
            break;
        }
    }

    return bool_res;
}

bool  successfully_from_3_block_sums_get_Peter_and_school_building_numbers
(
    int block_sum_1,
    int block_sum_2,
    int block_sum_3,
    int & Peter_building_number,
    int & school_building_number
)
{
    bool bool_res = false;

    int     sum_1 = 0;
    int     sum_2 = 0;
    int     sum_3 = 0;

    for (
        Peter_building_number = 1;
        Peter_building_number < block_sum_1;
        ++Peter_building_number
        )
    {
        int last_num_in_first_block = 0;
        int last_num_in_second_block = 0;

        std::cout << std::endl
            << std::endl
            << std::endl
            << std::endl
            << "Очередной заход Петра:"
            << std::endl;

        bool_res = successfully_completed_block
        (
            Peter_building_number,
            block_sum_1,
            last_num_in_first_block
        )

            && successfully_completed_block
            (
                last_num_in_first_block + BUILD_NUM_STEP,
                block_sum_2,
                last_num_in_second_block
            )

            && successfully_completed_block
            (
                last_num_in_second_block + BUILD_NUM_STEP,
                block_sum_3,
                school_building_number
            );

        if (bool_res)
        {
            break;
        }
    }

    return bool_res;
}

int  main()
{
    std::locale::global(std::locale(""));

    int     block_sum_1 = 99;
    int     block_sum_2 = 117;
    int     block_sum_3 = 235;

    int Peter_building_number = 0;
    int school_building_number = 0;

    if (
        successfully_from_3_block_sums_get_Peter_and_school_building_numbers
        (
            block_sum_1,
            block_sum_2,
            block_sum_3,
            Peter_building_number,
            school_building_number
        )
        )
    {
        std::cout << "Петр живет в доме под номером\t\t"
            << Peter_building_number
            << std::endl
            << "Школа находится в доме с номером\t"
            << school_building_number
            << std::endl;
    }
    else
    {
        std::cout << "Решение не найдено."
            << std::endl;
    }

    _getch();
}

