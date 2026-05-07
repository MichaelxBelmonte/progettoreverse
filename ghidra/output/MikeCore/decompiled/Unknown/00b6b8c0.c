// Function: FUN_00b6b8c0
// Address: 00b6b8c0
// Size: 607 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b6b977) */
/* WARNING: Removing unreachable block (ram,0x00b6b980) */

void FUN_00b6b8c0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  uint local_58;
  longlong local_40;
  char local_38;
  
  iVar1 = *(int *)((longlong)unaff_RDI + 0x174);
  uVar4 = FUN_01d3b590();
  FUN_01d3abf0();
  uVar7 = FUN_01e466c0();
  iVar5 = FUN_01d3a5a0();
  if (((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) &&
     (local_58 = FUN_00b6a810(uVar7), local_58 != 0xffffffff)) {
    lVar2 = *(longlong *)(unaff_RDI[0x27] + 0x10);
    if (0 < *(int *)(lVar2 + (ulonglong)(local_58 & 0xff) * 4)) {
      FUN_00b6a120(lVar2,0);
      return;
    }
    FUN_00b6a120(lVar2,1);
    uVar6 = local_58;
LAB_00b6b9b0:
    uVar7 = (**(code **)(*unaff_RDI + 0x658))();
    lVar2 = *unaff_RSI;
    if (lVar2 == local_40) {
      if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
        if (local_38 == '\0') {
          uVar7 = FUN_00d50b00();
          goto LAB_00b6ba4c;
        }
        goto LAB_00b6ba03;
      }
LAB_00b6ba0d:
      lVar2 = *unaff_RSI;
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_38 != '\0') {
        *unaff_RSI = local_40;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          uVar7 = FUN_00d50b20();
        }
LAB_00b6ba03:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        local_38 = '\0';
        goto LAB_00b6ba0d;
      }
      if (local_40 != 0) {
        uVar7 = FUN_00d50b00();
      }
      *unaff_RSI = local_40;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        uVar7 = FUN_00d50b20();
      }
LAB_00b6ba4c:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      lVar2 = *unaff_RSI;
    }
    if (lVar2 != 0) {
      iVar5 = FUN_01d3a5a0();
      uVar7 = extraout_XMM0_Da;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
      if (iVar5 == 6) goto LAB_00b6baf3;
      FUN_01d3abf0();
      FUN_01e466c0();
      local_58 = FUN_00b6a810();
      if (local_58 != uVar6) {
        uVar7 = extraout_XMM0_Da_00;
        if (uVar6 != 0xffffffff) {
          uVar7 = FUN_00b6a120(extraout_XMM0_Da_00,0);
        }
        uVar6 = 0xffffffff;
        if (local_58 != 0xffffffff) {
          FUN_00b6a120(uVar7,1);
          uVar6 = local_58;
        }
      }
      goto LAB_00b6b9b0;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
LAB_00b6baf3:
    if (((local_58 != 0xffffffff) && ((uVar4 & 4) == 0)) && (iVar1 == 2)) {
      FUN_00b6a120(uVar7,0);
    }
  }
  else {
    FUN_01e459c0();
  }
  return;
}


