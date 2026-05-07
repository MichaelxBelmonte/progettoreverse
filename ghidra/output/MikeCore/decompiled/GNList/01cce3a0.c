// Function: FUN_01cce3a0
// Address: 01cce3a0
// Size: 1128 bytes
// Class: GNList
// String references:
//   "(%@*)%p"
//   "%@->%@"


/* WARNING: Removing unreachable block (ram,0x01cce7fa) */
/* WARNING: Removing unreachable block (ram,0x01cce806) */
/* WARNING: Removing unreachable block (ram,0x01cce56a) */
/* WARNING: Removing unreachable block (ram,0x01cce57a) */

undefined8 FUN_01cce3a0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar5;
  longlong local_f0;
  char local_e8;
  undefined8 *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  FUN_00d4efa0();
  FUN_00c7e7b0();
  FUN_00083ea0(2,&stack0xfffffffffffffef8);
  FUN_00d8cb40();
  local_98 = local_48;
  local_90 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_90 = '\x01';
  FUN_006e17f0();
  if ((local_e8 == '\0') && (local_f0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_88 = (undefined8 *)&DAT_0253d630;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_88 = &DAT_024c5048;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0x448))();
  puVar2 = local_88;
  if (local_80 == '\0') {
    if (local_88 == (undefined8 *)0x0) goto LAB_01cce791;
    FUN_00d50b00();
    if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_88 == (undefined8 *)0x0) goto LAB_01cce791;
  local_38 = local_f0;
  if (0 < *(int *)((longlong)puVar2 + 0xc)) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined8 *)(puVar2[2] + lVar5 * 8);
      FUN_01ccab60();
      puVar3 = local_88;
      if (local_80 == '\0') {
        if (local_88 != (undefined8 *)0x0) {
          FUN_00d50b00();
          goto LAB_01cce67d;
        }
      }
      else if (local_88 != (undefined8 *)0x0) {
LAB_01cce67d:
        local_a8 = puVar3;
        local_48 = uVar1;
        FUN_00083ea0(2,&local_a8);
        FUN_00d8cb40();
        lVar4 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_48 = lVar4;
        local_40 = '\0';
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        local_88 = (undefined8 *)&DAT_0253d630;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        local_88 = &DAT_024c5048;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)((longlong)puVar2 + 0xc));
  }
  FUN_00018280();
  FUN_00d50b20();
  local_f0 = local_38;
LAB_01cce791:
  lVar5 = DAT_027259e0;
  if (DAT_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (local_f0 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


