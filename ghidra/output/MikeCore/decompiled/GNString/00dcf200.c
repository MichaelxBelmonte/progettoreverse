// Function: FUN_00dcf200
// Address: 00dcf200
// Size: 582 bytes
// Class: GNString
// String references:
//   "Unable to connect: no IP address for host '%@'"


/* WARNING: Removing unreachable block (ram,0x00dcf314) */
/* WARNING: Removing unreachable block (ram,0x00dcf320) */
/* WARNING: Removing unreachable block (ram,0x00dcf582) */
/* WARNING: Removing unreachable block (ram,0x00dcf587) */

void FUN_00dcf200(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  undefined8 *local_90;
  uint local_88;
  undefined8 *local_80;
  uint local_78;
  undefined8 local_74;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  
  FUN_00dd2440();
  puVar1 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_02783ca0;
  if (*(int *)((longlong)puVar1 + 0xc) == 0) {
    if (DAT_02783ca0 != 0) {
      FUN_00d50b00();
    }
    FUN_00dd2410();
    local_80 = (undefined8 *)local_50;
    local_88 = 1;
    local_90 = &DAT_024c5048;
    local_78 = local_78 & 0xffffff00;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_78 = CONCAT31(local_78._1_3_,1);
    FUN_00cc7b40(param_1,&local_90);
    local_90 = &DAT_024c5048;
    if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  local_88 = local_88 & 0xffffff00;
  local_90 = (undefined8 *)0x0;
  local_80 = puVar1;
  local_74 = 0;
  lVar2 = 0;
  local_58 = 0;
  do {
    local_78 = (uint)lVar2;
    if (*(int *)((longlong)puVar1 + 0xc) <= (int)local_78) break;
    local_90 = *(undefined8 **)(puVar1[2] + lVar2 * 8);
    (**(code **)(*unaff_RDI + 0x430))(param_1,param_2);
    lVar2 = lVar2 + 1;
  } while (*(char *)((longlong)unaff_RDI + 0x31) == '\0');
  FUN_00dd0210();
  if (*(char *)((longlong)unaff_RDI + 0x31) == '\0') {
    FUN_00cc76c0();
  }
  FUN_00d50b20();
  return;
}


