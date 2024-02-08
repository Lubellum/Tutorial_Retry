#include "tutorial.h"

void Tutorial02_05()
{
    int x, y, z;

    std::cout << "x‚É‘ã“ü‚·‚é’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
    std::cin >> x;
    std::cout << "y‚É‘ã“ü‚·‚é’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
    std::cin >> y;

    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";

    z = y;
    y = x;
    x = z;

    std::cout << "x‚Æy‚Ì’l‚ð“ü‚ê‘Ö‚¦‚½Œ‹‰Ê‚ªˆÈ‰º‚Å‚·\n";

    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
}