@echo off
for /l %%x in (1, 1, 100) do (
    gen > input.in
    a < input.in > output.out 
    b < input.in > output2.out
    fc output.out output2.out > diagnostics || exit /b
    echo %%x
)
echo all tests passed