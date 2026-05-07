// Function: FUN_019ec4c0
// Address: 019ec4c0
// Size: 507 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x019ec524) */
/* WARNING: Removing unreachable block (ram,0x019ec52d) */
/* WARNING: Removing unreachable block (ram,0x019ec5cb) */
/* WARNING: Removing unreachable block (ram,0x019ec5d8) */
/* WARNING: Removing unreachable block (ram,0x019ec61e) */
/* WARNING: Removing unreachable block (ram,0x019ec627) */

ulonglong FUN_019ec4c0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_027e14b0;
  if (((char)unaff_RDI[0x88] == '\0') && ((longlong *)unaff_RDI[0x87] != (longlong *)0x0)) {
    *(undefined1 *)(unaff_RDI + 0x88) = 1;
    uVar3 = (**(code **)(*(longlong *)unaff_RDI[0x87] + 0x3b8))(param_1,param_2);
    uVar4 = (ulonglong)uVar3;
    *(undefined1 *)(unaff_RDI + 0x88) = 0;
  }
  else {
    if (DAT_027e14b0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cae990();
    uVar2 = FUN_00d90870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      uVar3 = FUN_01e47f50(param_1,param_2);
      uVar4 = (ulonglong)uVar3;
    }
    else {
      uVar4 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
      if (param_2 != '\0') {
        FUN_01cae990();
        uVar2 = FUN_00d8c7a0();
        FUN_00d8f140(param_1,uVar2);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        (**(code **)(&UNK_00001610 + *unaff_RDI))();
        uVar4 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}


