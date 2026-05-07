// Function: FUN_00973ba1
// Address: 00973ba1
// Size: 1241 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00973ba1(void)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
                    /* WARNING: Could not recover jumptable at 0x00973c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((longlong)&switchD_00973c36::switchdataD_0097407c +
                      (longlong)(int)switchD_00973c36::switchdataD_0097407c))
                      ((code *)((longlong)&switchD_00973c36::switchdataD_0097407c +
                               (longlong)(int)switchD_00973c36::switchdataD_0097407c));
    return uVar1;
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != *(longlong *)PTR____stack_chk_guard_024a9898)
  {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 99;
}


