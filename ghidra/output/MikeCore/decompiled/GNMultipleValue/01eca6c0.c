// Function: FUN_01eca6c0
// Address: 01eca6c0
// Size: 735 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01eca79d) */
/* WARNING: Removing unreachable block (ram,0x01eca7aa) */
/* WARNING: Removing unreachable block (ram,0x01eca819) */
/* WARNING: Removing unreachable block (ram,0x01eca822) */
/* WARNING: Removing unreachable block (ram,0x01eca7c7) */
/* WARNING: Removing unreachable block (ram,0x01eca7d0) */
/* WARNING: Removing unreachable block (ram,0x01eca955) */
/* WARNING: Removing unreachable block (ram,0x01eca962) */

ulonglong FUN_01eca6c0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar6;
  longlong *local_40;
  char local_38;
  undefined7 uVar7;
  
  FUN_01cae990();
  lVar1 = DAT_027fe668;
  if (DAT_027fe668 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01ec81d0();
    uVar6 = (ulonglong)uVar4;
    goto LAB_01eca98d;
  }
  (**(code **)(*unaff_RDI + 0x520))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01eca7d5;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01eca7d5:
    FUN_01ccad60();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_01eca935;
      FUN_00d50b00();
LAB_01eca827:
      lVar1 = DAT_027e7c20;
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      FUN_01ccaae0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
      uVar6 = CONCAT71(uVar7,local_40 != (longlong *)0x0);
      if (local_40 != (longlong *)0x0) {
        if (param_2 != '\0') {
          iVar5 = FUN_01d70da0();
          lVar1 = *(longlong *)(local_40[2] + (longlong)iVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          lVar2 = DAT_027e7c20;
          if (DAT_027e7c20 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*unaff_RDI + 0x4d0))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          uVar6 = CONCAT71(uVar7,1);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    else {
      if (local_40 != (longlong *)0x0) goto LAB_01eca827;
LAB_01eca935:
      uVar6 = 0;
    }
    FUN_00d50b20();
    goto LAB_01eca98d;
  }
  uVar6 = 0;
LAB_01eca98d:
  return uVar6 & 0xffffffff;
}


