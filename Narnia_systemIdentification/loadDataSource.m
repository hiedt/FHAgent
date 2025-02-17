function table=loadDataSource(textfile)
    importOptions = detectImportOptions(textfile,...
        "Delimiter", ",",...
        "MissingRule","omitrow");
    table = readtable(textfile, importOptions);
end