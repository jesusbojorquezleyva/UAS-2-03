enum ParseResult
{
    success,
    error_opening_file,
    error_reading_file,
    error_parsing_file
};

ParseResult readFileContents()
{
    if(!openFile())
        return error_opening_file;
    if(!readFile())
        return error_reading_file;
    if(!parsefile())
        return error_parsing_file;

    return success;
}