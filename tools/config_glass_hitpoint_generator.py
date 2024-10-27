#!/usr/bin/env python3

from argparse import ArgumentParser, Namespace


def main(args: Namespace):
    hitpoits_cfg = 'class HitPoints {\n'

    for i in range(1, args.num_windows + 1):
        hitpoits_cfg += f'    SET_GLASS_HITPOINT_ARMOR({i});\n'

    hitpoits_cfg += '};'

    print()
    print(hitpoits_cfg)
    print()


if __name__ == '__main__':
    parser = ArgumentParser()
    parser.add_argument(
        '-n', '--num-windows',
        dest='num_windows',
        type=int,
        required=True,
        help='The number of windows (glass hitpoint classes) to generate.'
    )

    args = parser.parse_args()

    main(args)

# python config_glass_hitpoint_generator.py -n 62
