clink.onfilterinput(function(text)
    if text:match("^%s*$") then
        return "%CMDER_ROOT%\\vendor\\clink\\doblank.exe %errorlevel%"
    end
    return text
end)