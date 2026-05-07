// Function: FUN_019e0e60
// Address: 019e0e60
// Size: 1120 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x019e123e) */
/* WARNING: Removing unreachable block (ram,0x019e124a) */
/* WARNING: Removing unreachable block (ram,0x019e109e) */
/* WARNING: Removing unreachable block (ram,0x019e10aa) */
/* WARNING: Removing unreachable block (ram,0x019e126e) */
/* WARNING: Removing unreachable block (ram,0x019e1277) */

ulonglong FUN_019e0e60(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  longlong *unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_019e12ab;
  (**(code **)(*unaff_RDI + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  lVar5 = local_48;
  if (iVar1 == 0) {
    (**(code **)(*unaff_RDI + 0x9b0))();
    if (local_48 == 0) {
      bVar6 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x9b0))();
      bVar6 = *(int *)(local_58 + 0xc) != 0;
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      (**(code **)(*unaff_RDI + 0x9b0))();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01266b80();
      if (local_48 == 0) {
        lVar5 = 0;
        bVar6 = false;
      }
      else if (local_40[0] == '\0') {
        FUN_00d50b00();
        bVar6 = true;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar6 = true;
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0xda8))();
      goto LAB_019e10af;
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0xe20))();
    FUN_00d23340();
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      bVar6 = false;
      lVar5 = 0;
    }
    else {
      bVar6 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_019e10af:
    if (lVar5 != 0) {
      (**(code **)((longlong)&dylib_command_00001150.dylib.current_version + *unaff_RDI))();
      if (local_48 == lVar5) {
        bVar2 = bVar6;
        if ((bVar6) || (local_48 == 0)) {
LAB_019e1144:
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019e1158;
        }
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          goto LAB_019e1144;
        }
        bVar2 = true;
      }
      else {
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          lVar5 = local_48;
          if (bVar6) {
            FUN_00d50b20();
          }
          goto LAB_019e1144;
        }
        bVar2 = true;
        lVar5 = local_48;
        if (bVar6) {
          FUN_00d50b20();
        }
LAB_019e1158:
        if (lVar5 == 0) goto LAB_019e12a8;
      }
      FUN_01caec40();
      lVar5 = DAT_027e1458;
      if (DAT_027e1458 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
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
      if (bVar2) {
        FUN_00d50b20();
      }
      goto LAB_019e12ab;
    }
  }
LAB_019e12a8:
  uVar4 = 0;
LAB_019e12ab:
  return uVar4 & 0xffffffff;
}


