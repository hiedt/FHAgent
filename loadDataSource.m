function table=loadDataSource(textfile)
    importOptions = detectImportOptions(textfile, "Delimiter", ",");
    table = readtable(textfile, importOptions);
end