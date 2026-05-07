// Function: FUN_01ccbbc0
// Address: 01ccbbc0
// Size: 641 bytes
// Class: GNMultipleValue


ulonglong FUN_01ccbbc0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong *unaff_RSI;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  local_b0 = *param_2;
  local_a8 = 0;
  local_90 = param_1;
  FUN_01ccab60(param_1,&local_b0);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      local_48 = local_40;
      FUN_00d50b00();
      goto LAB_01ccbc2b;
    }
  }
  else {
    local_48 = local_40;
    if (local_40 != (longlong *)0x0) {
LAB_01ccbc2b:
      FUN_01cc98b0();
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01ccbc74;
        }
LAB_01ccbcc9:
        uVar5 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      }
      else {
        if (local_40 == (longlong *)0x0) goto LAB_01ccbcc9;
LAB_01ccbc74:
        lVar1 = plVar2[5];
        FUN_00d50b20();
        if (lVar1 == 0) goto LAB_01ccbcc9;
        local_88 = lVar1;
        FUN_00d50b00();
        local_a0 = *param_2;
        local_98 = 0;
        FUN_01ccac20();
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_01ccbce1;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_01ccbce1:
          local_80 = *unaff_RSI;
          local_78 = '\0';
          (**(code **)(*plVar2 + 0x378))();
          plVar3 = local_40;
          plVar2 = (longlong *)*unaff_RSI;
          if (plVar2 == local_40) {
            if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
              local_50 = unaff_RSI + 1;
              if (local_38 != '\0') goto LAB_01ccbd50;
              FUN_00d50b00();
              goto LAB_01ccbd89;
            }
LAB_01ccbd90:
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = unaff_RSI + 1;
            lVar1 = unaff_RSI[1];
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              *unaff_RSI = (longlong)plVar3;
              if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01ccbd89:
              *(undefined1 *)local_50 = 1;
              goto LAB_01ccbd90;
            }
            *unaff_RSI = (longlong)local_40;
            if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ccbd50:
            *(undefined1 *)local_50 = 1;
            local_38 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        local_70 = *unaff_RSI;
        local_68 = '\0';
        local_60 = local_48;
        local_58 = '\0';
        uVar4 = FUN_01d28720(local_90,&local_60);
        uVar5 = (ulonglong)uVar4;
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01ccbe2d;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
LAB_01ccbe2d:
  return uVar5 & 0xffffffff;
}


