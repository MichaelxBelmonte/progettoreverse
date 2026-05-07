// Function: FUN_019e21f0
// Address: 019e21f0
// Size: 667 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x019e23ff) */
/* WARNING: Removing unreachable block (ram,0x019e2408) */
/* WARNING: Removing unreachable block (ram,0x019e242c) */
/* WARNING: Removing unreachable block (ram,0x019e2435) */

ulonglong FUN_019e21f0(undefined8 param_1,int param_2)

{
  char *pcVar1;
  longlong *unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar2;
  longlong lVar3;
  longlong local_98;
  char local_90;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_019e2464;
  (**(code **)(*unaff_RDI + 0xe20))();
  lVar3 = local_48;
  if (*(int *)(local_58 + 0xc) == 0) {
    lVar3 = 0;
  }
  else {
    (**(code **)(*unaff_RDI + 0xe20))();
    FUN_00d23340();
    pcVar1 = local_38;
    if (local_40[0] != '\0') {
      pcVar1 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar1 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_48 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    (**(code **)("/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation" +
                *unaff_RDI + 8))();
    if (local_48 == lVar3) {
LAB_019e232c:
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar3 = local_48;
        goto LAB_019e232c;
      }
      FUN_00d50b20();
      lVar3 = local_48;
    }
    if (lVar3 != 0) {
      FUN_01caec40();
      lVar3 = DAT_027e1458;
      if (DAT_027e1458 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        (**(code **)(*unaff_RDI + 0xda0))();
      }
      (**(code **)(*unaff_RDI + 0xda8))();
      (**(code **)("/usr/lib/libobjc.A.dylib" + *unaff_RDI + 8))();
      FUN_019e1580();
      FUN_00d50b20();
      goto LAB_019e2464;
    }
  }
  uVar2 = 0;
LAB_019e2464:
  return uVar2 & 0xffffffff;
}


