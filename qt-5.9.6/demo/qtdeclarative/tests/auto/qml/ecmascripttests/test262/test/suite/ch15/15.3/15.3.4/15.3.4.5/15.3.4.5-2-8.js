/// Copyright (c) 2012 Ecma International.  All rights reserved. 
/// Ecma International makes this code available under the terms and conditions set
/// forth on http://hg.ecmascript.org/tests/test262/raw-file/tip/LICENSE (the 
/// "Use Terms").   Any redistribution of this code must retain the above 
/// copyright and this notice and otherwise comply with the Use Terms.
/**
 * 15.3.4.5 step 2 specifies that a TypeError must be thrown if the Target is not callable.
 *
 * @path ch15/15.3/15.3.4/15.3.4.5/15.3.4.5-2-8.js
 * @description Function.prototype.bind allows Target to be a constructor (Array)
 */


function testcase() {
        var bac = Array.bind(null);
        var a = bac(42);
        a.prop = "verifyPropertyExist";
        a[41] = 41;

        return a.prop === "verifyPropertyExist" && a[41] === 41 && a.length === 42;
    }
runTestCase(testcase);
