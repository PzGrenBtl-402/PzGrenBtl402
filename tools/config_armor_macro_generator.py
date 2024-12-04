#!/usr/bin/env python3

from argparse import ArgumentParser, Namespace
from pathlib import Path


def get_generated_comment_lines(additional_comment: str = None):
    """
    Returns the a SQF comment stating that the file is generated and should not be changed.
    An additional comment can be passed which is displayed above the warning.

    Args:
        additional_comment (str, optional): An additional comment displayed above the warning. Defaults to None.

    Returns:
        list[str]: SQF comment as list of lines.
    """
    lines: list[str] = []

    generate_message = 'This file is generated and should not be edited!'
    dashes = '-' * len(generate_message)

    lines.append(f'// {dashes}\n')
    if additional_comment:
        lines.append(f'// {additional_comment}\n')
    lines.append(f'// {generate_message}\n')
    lines.append(f'// {dashes}\n\n')

    return lines


def main(args: Namespace):
    macro_lines: list[str] = []
    macro_lines.extend(get_generated_comment_lines())

    macro_lines.extend([
       '// Original armor for houses 2000\n',
        f'#define HOUSE_ARMOR {args.armor}\n',
        '#define SET_ARMOR(BASE,CLS) class CLS: BASE { armor = HOUSE_ARMOR; }\n',
        '// Original 0.001 -> 2 / 2000\n',
        '#define SET_GLASS_HITPOINT_ARMOR(id) class Glass_##id##_hitpoint { armor = 2 / HOUSE_ARMOR; }\n\n\n',
    ])

    for i in range(1, args.num_windows + 1):
        macro_lines.extend([
            f'#define SET_ARMOR_WITH_WINDOWS_{i:02d}(BASE,CLS) \\\n',
            'class CLS: BASE { \\\n',
            '    armor = HOUSE_ARMOR; \\\n',
            '    class HitPoints { \\\n',
        ])
        macro_lines.extend(f'        SET_GLASS_HITPOINT_ARMOR({j}); \\\n' for j in range(1, i + 1)),
        macro_lines.extend([
            '    }; \\\n',
            '}\n\n',
        ])

    with open(args.output_file, 'w') as f:
        f.writelines(macro_lines)


if __name__ == '__main__':
    parser = ArgumentParser()
    parser.add_argument(
        '-n', '--num-windows',
        dest='num_windows',
        type=int,
        required=True,
        help='The maximum number of windows (glass hitpoint classes) to consider.'
    )

    parser.add_argument(
        '-a', '--armor',
        dest='armor',
        type=int,
        default=100000,
        help='The new armor value of buildings.'
    )

    parser.add_argument(
        '-o', '--output',
        dest='output_file',
        type=Path,
        required=True,
        help='The output file where the generated macros are written to.'
    )

    args = parser.parse_args()

    main(args)

# python config_armor_macro_generator.py -n 99 -o ../addons/Main/script_armor_macros.hpp
