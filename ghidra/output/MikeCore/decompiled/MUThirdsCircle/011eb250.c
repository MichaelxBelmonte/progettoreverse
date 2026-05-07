// Function: FUN_011eb250
// Address: 011eb250
// Size: 724 bytes
// Class: MUThirdsCircle


void FUN_011eb250(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
  local_38 = param_2;
  local_34 = param_1;
  if (unaff_ESI == 0) {
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar6 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_68 = 1;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_70 = lVar5;
        FUN_011eb620(local_34,local_38,&local_50);
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
  }
  else {
    lVar5 = **(longlong **)(*(longlong *)(unaff_RDI + 0x280) + 0x10);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_e0 = 0;
    local_d8 = 0;
    FUN_011eb620(local_34,local_38,&local_e0);
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) +
             (longlong)(int)(uVar1 - 1) * 8);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_c8 = 1;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_d0 = lVar5;
    FUN_011eb620(local_34,local_38,&local_b0);
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (2 < (int)uVar1) {
      local_40 = (ulonglong)(uVar1 - 1) - 1;
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10);
        lVar2 = *(longlong *)(lVar4 + 8 + lVar5 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
          lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10);
        }
        local_98 = 1;
        lVar3 = *(longlong *)(lVar4 + lVar5 * 8);
        local_a0 = lVar2;
        if (lVar3 != 0) {
          FUN_00d50b00();
          lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10);
        }
        local_88 = 1;
        lVar4 = *(longlong *)(lVar4 + 0x10 + lVar5 * 8);
        local_90 = lVar3;
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        local_78 = 1;
        local_80 = lVar4;
        FUN_011eb620(local_34,local_38,&local_80);
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (local_40 != lVar5);
    }
  }
  return;
}


