// Function: FUN_0184af70
// Address: 0184af70
// Size: 526 bytes
// Class: MUScaleRegion


void FUN_0184af70(ulonglong param_1,undefined8 *param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  undefined1 *local_res8;
  undefined1 *local_res10;
  longlong local_b0;
  char local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  char local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  local_58 = param_1;
  local_50 = param_3;
  FUN_0184b210();
  uVar1 = FUN_00e7bdb0();
  uVar2 = FUN_00e7bdb0();
  local_a0 = 0;
  local_98 = 0;
  FUN_018516f0(uVar2,uVar1,0,&local_a0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_90 = *param_2;
  local_88 = 0;
  FUN_01857980(local_58,&local_90,local_50);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_60 = param_2;
  if (*(int *)(local_48 + 0xc) == 0) {
    local_38 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = **(longlong **)(local_48 + 0x10);
    if (lVar3 == 0) {
      local_38 = 0;
      lVar3 = 0;
    }
    else {
      uVar1 = FUN_00d50b00();
      local_38 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
    FUN_00d23620();
  }
  if (*param_4 != 0) {
    FUN_00d216c0();
    local_40 = '\0';
    FUN_00d214d0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_res8 != (undefined1 *)0x0) {
    *local_res8 = 0;
  }
  if ((local_res10 != (undefined1 *)0x0) && (*local_res10 = 0, local_res8 != (undefined1 *)0x0)) {
    local_58 = local_58 >> 0x20;
    if (local_58 == 0) {
      local_50 = local_50 >> 0x20;
      if (local_50 == 0) {
        local_70 = *local_60;
        local_68 = 0;
        FUN_01858310(0,&local_70);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (((char)local_38 == '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}


