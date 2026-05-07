// Function: FUN_01c0ec80
// Address: 01c0ec80
// Size: 545 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c0edd5) */
/* WARNING: Removing unreachable block (ram,0x01c0ee8a) */
/* WARNING: Removing unreachable block (ram,0x01c0ee97) */
/* WARNING: Removing unreachable block (ram,0x01c0ee00) */

void FUN_01c0ec80(undefined8 param_1,longlong *param_2)

{
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar1;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_50;
  char local_48;
  
  local_a0 = *param_2;
  local_98 = '\0';
  FUN_01c0f250(param_1,&local_a0);
  if ((local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    local_50[2] = 0;
    local_50[3] = 0;
    *(undefined4 *)(local_50 + 4) = 0;
    *local_50 = &DAT_026649c0;
    local_50[5] = 0;
    (*DAT_026649d8)();
    local_90 = *param_2;
    local_88 = '\0';
    FUN_01c0a930();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    uVar1 = FUN_01c19460();
    if (unaff_RSI != 0) {
      uVar1 = FUN_00d50b20();
    }
    local_b0 = *param_2;
    local_a8 = 0;
    FUN_01c0f300(uVar1,&local_b0);
    uVar1 = FUN_01c194b0();
    local_70 = *param_2;
    local_78 = '\0';
    local_68 = '\0';
    local_80 = local_50;
    FUN_01c0f6d0(uVar1,&local_70);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


