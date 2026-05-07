// Function: FUN_00c1f910
// Address: 00c1f910
// Size: 995 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00c1fbeb) */
/* WARNING: Removing unreachable block (ram,0x00c1fafc) */
/* WARNING: Removing unreachable block (ram,0x00c1fa6a) */
/* WARNING: Removing unreachable block (ram,0x00c1fa13) */
/* WARNING: Removing unreachable block (ram,0x00c1fa1c) */
/* WARNING: Removing unreachable block (ram,0x00c1faad) */
/* WARNING: Removing unreachable block (ram,0x00c1fab6) */
/* WARNING: Removing unreachable block (ram,0x00c1fb24) */
/* WARNING: Removing unreachable block (ram,0x00c1fb2d) */
/* WARNING: Removing unreachable block (ram,0x00c1fb62) */
/* WARNING: Removing unreachable block (ram,0x00c1fb7c) */
/* WARNING: Removing unreachable block (ram,0x00c1fb81) */
/* WARNING: Removing unreachable block (ram,0x00c1fb89) */
/* WARNING: Removing unreachable block (ram,0x00c1fb96) */
/* WARNING: Removing unreachable block (ram,0x00c1fce0) */
/* WARNING: Removing unreachable block (ram,0x00c1fcee) */
/* WARNING: Removing unreachable block (ram,0x00c1fba5) */
/* WARNING: Removing unreachable block (ram,0x00c1fbae) */
/* WARNING: Removing unreachable block (ram,0x00c1fb68) */
/* WARNING: Removing unreachable block (ram,0x00c1fbb5) */
/* WARNING: Removing unreachable block (ram,0x00c1fb71) */
/* WARNING: Removing unreachable block (ram,0x00c1fbfc) */
/* WARNING: Removing unreachable block (ram,0x00c1fc01) */
/* WARNING: Removing unreachable block (ram,0x00c1f965) */
/* WARNING: Removing unreachable block (ram,0x00c1f96e) */
/* WARNING: Removing unreachable block (ram,0x00c1f9c4) */
/* WARNING: Removing unreachable block (ram,0x00c1f9cd) */

void FUN_00c1f910(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong *unaff_RSI;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 *local_88;
  longlong *local_70;
  char local_68;
  undefined8 *local_48;
  undefined8 *local_40;
  char local_38;
  
  local_88 = param_1;
  FUN_00d470c0(0);
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00d21140();
  FUN_00d50b20();
  if (*unaff_RSI == 0) {
    bVar3 = false;
    bVar2 = false;
    local_48 = (undefined8 *)0x0;
  }
  else {
    FUN_00b88600();
    (**(code **)(*local_70 + 0x390))();
    local_48 = local_40;
    bVar2 = local_40 != (undefined8 *)0x0;
    if (bVar2) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00b88600();
    (**(code **)(*local_70 + 0x368))();
    bVar3 = local_40 != (undefined8 *)0x0;
    if (bVar3) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00b7a6d0();
    FUN_00d470c0();
    FUN_00c1f6a0();
    if (puVar1 != local_40) {
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      puVar1 = local_40;
    }
  }
  uVar6 = 0;
  puVar5 = puVar1;
  uVar4 = FUN_00d459e0();
  local_a8 = local_48;
  local_a0 = 0;
  local_98 = *local_88;
  local_90 = 0;
  FUN_00c1ffc0(uVar4,&local_a8,param_2,&local_98,puVar5,uVar6);
  if ((bVar3) && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


