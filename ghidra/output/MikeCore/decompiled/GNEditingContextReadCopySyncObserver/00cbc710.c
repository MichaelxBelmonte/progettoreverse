// Function: FUN_00cbc710
// Address: 00cbc710
// Size: 1247 bytes
// Class: GNEditingContextReadCopySyncObserver


void FUN_00cbc710(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *unaff_RSI;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_88;
  char local_80 [8];
  longlong local_78;
  undefined8 local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  lVar4 = local_88;
  FUN_00d4efa0();
  local_48[0] = local_80[0];
  pcVar6 = local_48;
  if (local_80[0] != '\0') {
    pcVar6 = local_80;
  }
  *pcVar6 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c81c40();
  local_40[0] = local_80[0];
  pcVar6 = local_40;
  if (local_80[0] != '\0') {
    pcVar6 = local_80;
  }
  *pcVar6 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_78 = lVar4;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar8 = -local_70._4_4_;
        }
        else {
          iVar8 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar8);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar8 = 0;
        }
        local_70 = CONCAT44(iVar8,(int)local_70);
      }
      lVar7 = (longlong)(int)local_70;
      iVar8 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar8);
      if (*(int *)(local_78 + 0xc) <= iVar8) break;
      local_88 = *(longlong *)(*(longlong *)(local_78 + 0x10) + 8 + lVar7 * 8);
      lVar7 = *(longlong *)(local_88 + 0x60);
      if (((lVar7 == 0) || ((*(byte *)(lVar7 + 0x18) & 0x10) == 0)) &&
         (*(char *)(lVar7 + 0x19) != '\0')) {
        if (*(char *)(lVar7 + 0x19) == '@') {
          plVar1 = (longlong *)*unaff_RSI;
          (**(code **)(*(longlong *)*param_2 + 0x210))();
          lVar7 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*plVar1 + 0x200))(0,local_88,1);
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar1 = (longlong *)*unaff_RSI;
          (**(code **)(*(longlong *)*param_2 + 0x218))();
          (**(code **)(*plVar1 + 0x208))(1,local_88);
        }
      }
    }
    FUN_00cc1480();
  }
  FUN_00c820a0();
  pcVar6 = local_80;
  if (local_80[0] == '\0') {
    pcVar6 = local_38;
  }
  local_38[0] = local_80[0];
  *pcVar6 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = lVar4;
  if (local_88 != 0) {
    local_60 = lVar4;
    local_80[0] = '\0';
    local_78 = local_88;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_88 + 0x10) + lVar7 * 8);
        lVar3 = *(longlong *)(lVar2 + 0x70);
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x18) & 0x10) == 0)) {
          cVar5 = FUN_00d77de0();
          if (cVar5 == '\0') {
            plVar1 = (longlong *)*unaff_RSI;
            (**(code **)(*(longlong *)*param_2 + 0x210))();
            lVar3 = local_58;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            (**(code **)(*plVar1 + 0x200))(0,lVar2,1);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
            (**(code **)(*(longlong *)*param_2 + 0x210))();
            if (local_c8 == '\0') {
              if (local_d0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c8 = '\0';
            }
            local_58 = local_d0;
            local_50 = '\0';
            FUN_00d243f0();
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (local_d0 != 0) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar7 = lVar7 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(local_88 + 0xc));
    }
    FUN_00559a70();
    lVar7 = local_60;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}


