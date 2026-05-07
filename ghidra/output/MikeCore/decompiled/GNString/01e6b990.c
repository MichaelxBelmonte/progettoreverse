// Function: FUN_01e6b990
// Address: 01e6b990
// Size: 892 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e6bcea) */
/* WARNING: Removing unreachable block (ram,0x01e6bcf3) */

ulonglong FUN_01e6b990(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  undefined8 local_40;
  undefined1 local_38;
  
  FUN_01cae990();
  lVar1 = DAT_027f4218;
  if (DAT_027f4218 != 0) {
    FUN_00d50b00();
  }
  uVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar2 == '\0') {
    FUN_01cae990();
    lVar1 = DAT_027f4220;
    if (DAT_027f4220 != 0) {
      FUN_00d50b00();
    }
    uVar2 = (**(code **)(*local_40 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      FUN_01cae990();
      lVar1 = DAT_027f4228;
      if (DAT_027f4228 != 0) {
        FUN_00d50b00();
      }
      uVar2 = (**(code **)(*local_40 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar2 == '\0') {
        FUN_01cae990();
        lVar1 = DAT_027f4230;
        if (DAT_027f4230 != 0) {
          FUN_00d50b00();
        }
        uVar2 = (**(code **)(*local_40 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar2 == '\0') {
          FUN_01cae990();
          lVar1 = DAT_027f4238;
          if (DAT_027f4238 != 0) {
            FUN_00d50b00();
          }
          uVar2 = (**(code **)(*local_40 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar2 == '\0') {
            uVar4 = FUN_01e47f50();
            uVar5 = (ulonglong)uVar4;
          }
          else {
            uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
            if (param_2 != '\0') {
              FUN_01e6c250();
            }
          }
        }
        else {
          uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
          if (param_2 != '\0') {
            lVar1 = *(longlong *)(unaff_RDI + 0x150);
            FUN_01caeae0();
            iVar3 = FUN_01d654a0();
            lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_01e6c090();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        if (param_2 != '\0') {
          FUN_01e6bf70();
        }
      }
    }
    else {
      uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
      if (param_2 != '\0') {
        FUN_01e6bf70();
      }
    }
  }
  else {
    uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    if (param_2 != '\0') {
      FUN_01e6bf70();
    }
  }
  return uVar5;
}


