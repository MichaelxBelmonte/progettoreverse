// Function: FUN_01a80070
// Address: 01a80070
// Size: 722 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a800d7) */

void FUN_01a80070(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_ESI == 0) {
    uVar5 = FUN_01a7c080();
  }
  else {
    local_68 = *(longlong *)(unaff_RDI + 0x38);
    uVar5 = param_1;
    if (local_68 != 0) {
      local_70 = 0;
      local_78 = 0;
      local_60._0_4_ = -1;
      local_60._4_4_ = 0;
      local_58 = 0;
      while( true ) {
        lVar3 = (longlong)(int)local_60;
        local_60._0_4_ = (int)local_60 + 1;
        if (*(int *)(local_68 + 0xc) <= (int)local_60) break;
        local_78 = *(undefined8 *)(*(longlong *)(local_68 + 0x10) + 8 + lVar3 * 8);
        FUN_01a7fa50();
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            local_60._4_4_ = -local_60._4_4_;
          }
          else {
            local_60._0_4_ = (int)local_60 - local_60._4_4_;
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            local_60._4_4_ = 0;
          }
        }
      }
      uVar5 = FUN_01a80d20();
      lVar3 = *(longlong *)(unaff_RDI + 0x38);
      goto joined_r0x01a80156;
    }
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x38);
joined_r0x01a80156:
  if (lVar3 != 0) {
    local_70 = 0;
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar3;
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar4 = 0;
      do {
        uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + lVar4 * 8);
        local_a8 = 0;
        local_b0 = uVar1;
        local_78 = uVar1;
        FUN_01a7f860(uVar5,&local_b0);
        lVar2 = local_40;
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        local_80 = lVar2;
        FUN_01a58dc0();
        local_50 = local_40;
        local_48 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_48 = '\x01';
        uVar5 = FUN_01e437f0(param_1);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        uVar5 = FUN_01a87460(uVar5,param_2);
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar5 = FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              uVar5 = FUN_00d50b20();
            }
            goto LAB_01a80300;
          }
        }
        else if (local_40 != 0) {
LAB_01a80300:
          local_a0 = lVar2;
          local_98 = 0;
          local_88 = 0;
          local_90 = uVar1;
          FUN_01a7fb40(uVar5,&local_90);
          uVar5 = FUN_00d50b20();
        }
        if (local_80 != 0) {
          uVar5 = FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar4);
      } while ((int)lVar4 < *(int *)(lVar3 + 0xc));
    }
    FUN_01a80d20();
  }
  return;
}


