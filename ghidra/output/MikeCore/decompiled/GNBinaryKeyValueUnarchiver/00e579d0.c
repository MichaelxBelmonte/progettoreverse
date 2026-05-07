// Function: FUN_00e579d0
// Address: 00e579d0
// Size: 1004 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "Assertion failed in GNBinaryKeyValueUnarchiver.cpp at line %i: %s."
//   "obj"
//   "result != placeholder"


/* WARNING: Removing unreachable block (ram,0x00e57ad2) */
/* WARNING: Removing unreachable block (ram,0x00e57ade) */
/* WARNING: Removing unreachable block (ram,0x00e57b64) */
/* WARNING: Removing unreachable block (ram,0x00e57b6d) */
/* WARNING: Removing unreachable block (ram,0x00e57c29) */
/* WARNING: Removing unreachable block (ram,0x00e57c32) */

longlong * FUN_00e579d0(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  int local_5c;
  longlong *local_48;
  char local_40;
  
  lVar8 = (longlong)param_2;
  plVar10 = *(longlong **)(*(longlong *)(unaff_RSI[8] + 0x10) + lVar8 * 8);
  if (DAT_028a8c38 == plVar10) {
    lVar7 = (longlong)*(int *)(*(longlong *)(unaff_RSI[0xe] + 0x10) + lVar8 * 4);
    local_5c = param_2;
    if (unaff_RSI[0x16] == 0) {
      bVar3 = false;
LAB_00e57bf2:
      plVar4 = DAT_028a8c48;
      if (*(longlong *)(*(longlong *)(unaff_RSI[0xc] + 0x10) + lVar7 * 8) == 0) {
        plVar9 = (longlong *)0x0;
        if (DAT_028a8c48 != (longlong *)0x0) {
          FUN_00d50b00();
          bVar3 = true;
          plVar9 = plVar4;
        }
      }
      else {
        FUN_00c811e0();
        lVar8 = DAT_027815a8;
        if (local_48 == (longlong *)0x0) {
          if (DAT_027815a8 != 0) {
            FUN_00d50b00();
          }
          local_90 = lVar8;
          local_88 = '\x01';
          FUN_00cc7b40();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          local_48 = (longlong *)0x0;
        }
        else {
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
          bVar3 = true;
        }
        (**(code **)(*local_48 + 0x20))();
        plVar9 = local_48;
      }
    }
    else {
      lVar2 = unaff_RSI[0x12];
      iVar1 = *(int *)(lVar2 + 0x18);
      FUN_00c8e340(lVar7,1);
      *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar1) = (int)unaff_RSI[0x11];
      unaff_RSI[0x15] = *(longlong *)(*(longlong *)(unaff_RSI[0x14] + 0x10) + lVar8 * 8);
      *(int *)(unaff_RSI + 0x11) = param_2;
      lVar8 = *(longlong *)(*(longlong *)(unaff_RSI[0xb] + 0x10) + lVar7 * 8);
      uVar6 = (**(code **)(*unaff_RSI + 0x598))();
      plVar9 = (longlong *)unaff_RSI[0x16];
      FUN_00d50b00();
      local_98 = '\0';
      local_a0 = lVar8;
      (**(code **)(*plVar9 + 0x18))(&local_a0,&stack0xffffffffffffffa8,uVar6);
      if (local_48 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        bVar3 = false;
      }
      else {
        plVar9 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
          bVar3 = true;
        }
        else {
          local_40 = '\0';
          bVar3 = true;
        }
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RSI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar8 = unaff_RSI[0x12];
      iVar1 = *(int *)((longlong)*(int *)(lVar8 + 0x18) + -4 + *(longlong *)(lVar8 + 0x10));
      *(int *)(unaff_RSI + 0x11) = iVar1;
      unaff_RSI[0x15] = *(longlong *)(*(longlong *)(unaff_RSI[0x14] + 0x10) + (longlong)iVar1 * 8);
      if (*(int *)(lVar8 + 0x18) != 0) {
        FUN_00c8e340((longlong)iVar1,0);
      }
      if (plVar9 == (longlong *)0x0) goto LAB_00e57bf2;
    }
    local_78 = '\0';
    local_80 = plVar9;
    FUN_00d233f0();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != plVar9) {
      plVar10 = plVar9;
    }
    bVar5 = bVar3;
    if (plVar10 != DAT_028a8c38) goto LAB_00e57d8c;
  }
  else {
    bVar3 = false;
    plVar9 = (longlong *)0x0;
    bVar5 = false;
    if (plVar10 != DAT_028a8c38) goto LAB_00e57d8c;
  }
  bVar3 = bVar5;
  lVar8 = DAT_027815a8;
  if (DAT_027815a8 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar8;
  local_68 = '\x01';
  FUN_00cc7b40();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_00e57d8c:
  *unaff_RDI = (longlong)plVar10;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((bVar3) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


