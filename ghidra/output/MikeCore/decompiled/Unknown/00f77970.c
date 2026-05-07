// Function: FUN_00f77970
// Address: 00f77970
// Size: 3077 bytes
// Class: Unknown
// String references:
//   "<NULL>"


/* WARNING: Removing unreachable block (ram,0x00f78547) */

ulonglong FUN_00f77970(longlong *param_1,longlong *param_2,undefined4 *param_3,char *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong local_res8;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_50 = 0;
  local_40 = local_res8 + 8;
  local_38 = 0;
  local_48 = param_2;
  if (*param_4 == '\0') {
    if (unaff_RSI != 0) goto LAB_00f7854b;
  }
  else if ((unaff_RSI != 0) || (*param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00f77a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)((longlong)&switchD_00f77a18::switchdataD_00f78594 +
                      (longlong)(int)switchD_00f77a18::switchdataD_00f78594))
                      (0,0,&switchD_00f77a18::switchdataD_00f78594,param_4 + 1,param_4);
    return uVar2;
  }
  *param_3 = 0;
LAB_00f7854b:
  iVar1 = FUN_00f789b0(param_2,&local_50,0);
  if (iVar1 != 0) {
    *param_1 = local_50 + -1;
  }
  return (ulonglong)(iVar1 != 0);
}


