#include <string>
#include <iostream>
#include <array>
#define NUM_OF_OPTIONS 4
namespace ariel{
    std::string snowman(const int conf);
}

/*|================|
 *|   Hat sprites  |
 *|================|
 */
const std::array< std::string, NUM_OF_OPTIONS> H = {
        "\n _===_",
        "  ___\n .....",
        "   _\n  /_\\",
        "  ___\n (_*_)"
};

/*|================|
 *|  Nose sprites  |
 *|================|
 */
const std::array< std::string, NUM_OF_OPTIONS> N = {",", ".", "_", " "};

/*|================|
 *|  Eyes sprites  |
 *|================|
 */
const std::array< std::string, NUM_OF_OPTIONS> E = {".", "o", "O", "-"};

/*|=================|
 *|Left Hand sprites|
 *|=================|
 */
const std::array< std::string, NUM_OF_OPTIONS> X = {"<", "\\", "/", " "};

/*|==================|
 *|Right Hand sprites|
 *|==================|
 */
const std::array< std::string, NUM_OF_OPTIONS> Y = {">", "/", "\\", " "};

/*|================|
 *| Torso sprites  |
 *|================|
 */
const std::array< std::string, NUM_OF_OPTIONS> T = {" : ", "] [", "> <", "   "};

/*|================|
 *|  base sprites  |
 *|================|
 */
const std::array< std::string, NUM_OF_OPTIONS> B = {" : ", "\" \"" , "___", "   "};
