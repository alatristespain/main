auto text = "Lorem ipsum dolor sit amet";

std::istringstream iss(text);
std::vector<std::string> words(
   std::istream_iterator<std::string>{iss},
   std::istream_iterator<std::string>());
auto count = words.size();


// or

size_t count = 0;
std::vector<std::string> words;
std::string token;
std::istringstream tokenStream(text);
while (std::getline(tokenStream, token, ' '))
{
   ++count;
}
