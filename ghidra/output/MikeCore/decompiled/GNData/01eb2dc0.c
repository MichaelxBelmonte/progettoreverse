// Function: FUN_01eb2dc0
// Address: 01eb2dc0
// Size: 659 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x01eb302a) */
/* WARNING: Removing unreachable block (ram,0x01eb3033) */
/* WARNING: Removing unreachable block (ram,0x01eb2ea3) */
/* WARNING: Removing unreachable block (ram,0x01eb2eb0) */
/* WARNING: Removing unreachable block (ram,0x01eb2eef) */
/* WARNING: Removing unreachable block (ram,0x01eb2ef8) */

ulonglong FUN_01eb2dc0(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar2 = DAT_027fe320;
  if (DAT_027fe320 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01d123e0();
    uVar5 = (ulonglong)uVar4;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    if (param_2 != '\0') {
      iVar1 = (int)unaff_RDI[0x39];
      if (iVar1 == 0) {
        (**(code **)(*unaff_RDI + 0xab0))();
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        (**(code **)(*unaff_RDI + 0xa18))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          (**(code **)(*unaff_RDI + 0xa18))();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01caeb20();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_40 + 0x3b8))();
          FUN_00d50b20();
        }
      }
      else {
        if (iVar1 == 2) {
          FUN_01caea00();
          FUN_01caea40();
        }
        else {
          if (iVar1 != 1) goto LAB_01eb3041;
          FUN_01caea40();
        }
        (**(code **)(*unaff_RDI + 0x918))();
        FUN_01d11e80();
      }
    }
  }
LAB_01eb3041:
  return uVar5 & 0xffffffff;
}


