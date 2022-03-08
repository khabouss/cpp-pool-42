#include <fstream>
#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{

   // std::cout << "Standard constructor for ShrubberyCreationForm called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("")
{

    //std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", 145, 137), _target(src.getTarget())
{

    std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl;
    *this = src;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

    //std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    std::cout << "Can't copy anything" << std::endl;
    rhs.getTarget();

    std::cout << "Assignement operator for ShrubberyCreationForm called" << std::endl;
    return *this;
}

const std::string &ShrubberyCreationForm::getTarget(void) const
{
    return this->_target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    std::ofstream myfile;
    std::string fileName = this->_target + "_shrubbery";

    this->checkExecutability(executor);
    myfile.open(fileName.c_str(), std::ios::out);
    myfile << "              _{\\ _{\\{\\/}/}/}__" << std::endl;
    myfile << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
    myfile << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
    myfile << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
    myfile << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
    myfile << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
    myfile << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
    myfile << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
    myfile << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
    myfile << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
    myfile << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\(_)" << std::endl;
    myfile << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
    myfile << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
    myfile << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
    myfile << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
    myfile << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
    myfile << "             {/{\\{\\{\\/}/}{\\{\\}/}" << std::endl;
    myfile << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
    myfile << "              (_)  \\.-'.-/" << std::endl;
    myfile << "          __...--- |'-.-'| --...__" << std::endl;
    myfile << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl;
    myfile << " -\"    ' .  . '    |.'-._| '  . .  '   " << std::endl;
    myfile << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
    myfile << "          ' ..     |'-_.-|" << std::endl;
    myfile << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
    myfile << "              .'   |'- .-|   '." << std::endl;
    myfile << "  ..-'   ' .  '.   `-._.-A   .'  '  - ." << std::endl;
    myfile << "   .-' '        '-._______.-'     '  ." << std::endl;
    myfile << "        .      ~," << std::endl;
    myfile << "    .       .   |\\   .    ' '-." << std::endl;
    myfile << "    ___________/  \\____________" << std::endl;
    myfile << "   /  Why is it, when you want \\" << std::endl;
    myfile << "  |  something, it is so damn   |" << std::endl;
    myfile << "  |    much work to get it?     |" << std::endl;
    myfile << "   \\___________________________/" << std::endl;
    myfile << "          " << std::endl;
    myfile.close();
    std::cout << "Created the shrug in " << this->_target << "_shrubbery"
              << std::endl;
}
