// Function: FUN_01da8610
// Address: 01da8610
// Size: 652 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01da87ed) */
/* WARNING: Removing unreachable block (ram,0x01da87f9) */

void FUN_01da8610(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong lVar3;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_98 = *unaff_RSI;
  local_90 = '\0';
  FUN_01da5520(param_1,&local_98);
  lVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0xc) == 0)) {
    local_68 = *unaff_RSI;
    local_60 = '\0';
    FUN_01da5520();
    lVar3 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_48 = lVar3;
      local_38 = 0;
      local_40 = 0;
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar2 = 0;
        do {
          local_58 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar2 * 8);
          FUN_00ca13a0();
          lVar2 = lVar2 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar2);
        } while ((int)lVar2 < *(int *)(lVar3 + 0xc));
      }
      FUN_01dacdb0();
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
    local_58 = 0;
    local_48 = lVar1;
    local_38 = 0;
    local_40 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar3 = 0;
      do {
        local_78 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8);
        local_88 = *unaff_RSI;
        local_80 = '\0';
        local_70 = '\0';
        local_58 = local_78;
        FUN_01da4b90(local_88,&local_78);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar3);
      } while ((int)lVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_01dacdb0();
  }
  FUN_01da44d0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


