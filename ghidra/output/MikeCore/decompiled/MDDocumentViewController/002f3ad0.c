// Function: FUN_002f3ad0
// Address: 002f3ad0
// Size: 1040 bytes
// Class: MDDocumentViewController


/* WARNING: Removing unreachable block (ram,0x002f3b58) */
/* WARNING: Removing unreachable block (ram,0x002f3b68) */
/* WARNING: Removing unreachable block (ram,0x002f3ba2) */
/* WARNING: Removing unreachable block (ram,0x002f3bb2) */

ulonglong FUN_002f3ad0(void)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong local_e0;
  char local_d8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  uVar6 = (**(code **)(*local_40 + 0x450))();
  uVar9 = extraout_XMM0_Da;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((char)uVar6 == '\0') {
    uVar7 = FUN_01de0270();
    uVar8 = (ulonglong)uVar7;
    goto LAB_002f3ecc;
  }
  if (*(char *)(unaff_RDI + 0x2e0) != '\0') {
    uVar7 = FUN_01de0270();
    uVar8 = (ulonglong)uVar7;
    goto LAB_002f3ecc;
  }
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_002f5380(uVar9,&local_b0);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    if (*(longlong *)(unaff_RDI + 0x2f0) != 0) {
      if ((*(longlong *)(unaff_RDI + 0x2e8) != 0) &&
         (FUN_01c023b0(), *(longlong *)(unaff_RDI + 0x2e8) != 0)) {
        *(undefined8 *)(unaff_RDI + 0x2e8) = 0;
        FUN_00d50b20();
      }
      local_90 = *unaff_RSI;
      local_88 = '\0';
      FUN_006f4810();
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      local_78 = '\0';
      local_80 = 0;
      FUN_006f3f00();
      FUN_00757c60();
      lVar1 = local_70;
      local_48 = 0;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_48 = '\x01';
      local_50 = lVar1;
      cVar5 = FUN_0007a0d0(0,&local_80,0,2);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if (cVar5 != '\0') goto LAB_002f3ecc;
    }
LAB_002f3e90:
    if ((*(longlong *)(unaff_RDI + 0x2e8) != 0) &&
       (FUN_01c023b0(), *(longlong *)(unaff_RDI + 0x2e8) != 0)) {
      *(undefined8 *)(unaff_RDI + 0x2e8) = 0;
      FUN_00d50b20();
    }
    uVar8 = 0;
    uVar3 = 0;
    if (plVar2 == (longlong *)0x0) goto LAB_002f3ecc;
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x2e8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_01c03aa0();
      FUN_01c023b0();
      if (*(longlong *)(unaff_RDI + 0x2e8) != 0) {
        *(undefined8 *)(unaff_RDI + 0x2e8) = 0;
        FUN_00d50b20();
      }
    }
    local_a0 = *unaff_RSI;
    local_98 = '\0';
    cVar5 = (**(code **)(*plVar2 + 0x390))(0,uVar4);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    if (cVar5 == '\0') goto LAB_002f3e90;
  }
  uVar8 = uVar3;
  FUN_00d50b20();
LAB_002f3ecc:
  return uVar8 & 0xffffffff;
}


