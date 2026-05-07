// Function: FUN_01ed5f90
// Address: 01ed5f90
// Size: 682 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ed61f9) */
/* WARNING: Removing unreachable block (ram,0x01ed6209) */

void FUN_01ed5f90(int param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  uint local_34;
  
  lVar4 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RSI + 0x178) + 0x10) + (longlong)param_1 * 8) +
             0x10) + (longlong)(int)param_2 * 8);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_34 = param_2;
  FUN_01dca160();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != lVar4) goto LAB_01ed6005;
  plVar1 = *(longlong **)(unaff_RSI + 0x2a0);
  uVar3 = local_34;
  local_40 = lVar4;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    if (((int)local_34 < 0) || (*(int *)(*(longlong *)(unaff_RSI + 0x2b8) + 0xc) <= (int)local_34))
    {
      local_90 = 0;
    }
    else {
      local_90 = *(longlong *)
                  (*(longlong *)(*(longlong *)(unaff_RSI + 0x2b8) + 0x10) + (ulonglong)local_34 * 8)
      ;
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    local_88 = '\x01';
    FUN_01dcc290();
    local_50 = local_80;
    local_48 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x20))(&local_90,&stack0xffffffffffffff90,&local_50);
    lVar2 = local_40;
    lVar4 = local_40;
    if (local_60 == local_40) {
LAB_01ed6146:
      bVar5 = local_58 == '\0';
      uVar3 = local_34;
joined_r0x01ed614a:
      local_34 = uVar3;
      if ((!bVar5) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar4 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
          goto LAB_01ed6146;
        }
        bVar5 = true;
        uVar3 = local_34;
        goto joined_r0x01ed614a;
      }
      uVar3 = local_34;
      if (local_40 != 0) {
        FUN_00d50b20();
        uVar3 = local_34;
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_00d233f0((longlong)param_1,uVar3);
  }
LAB_01ed6005:
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


