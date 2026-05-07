// Function: FUN_01dce080
// Address: 01dce080
// Size: 676 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x01dce298) */
/* WARNING: Removing unreachable block (ram,0x01dce2a1) */
/* WARNING: Removing unreachable block (ram,0x01dce0fd) */
/* WARNING: Removing unreachable block (ram,0x01dce106) */
/* WARNING: Removing unreachable block (ram,0x01dce18b) */
/* WARNING: Removing unreachable block (ram,0x01dce194) */
/* WARNING: Removing unreachable block (ram,0x01dce217) */
/* WARNING: Removing unreachable block (ram,0x01dce220) */
/* WARNING: Removing unreachable block (ram,0x01dce2ca) */
/* WARNING: Removing unreachable block (ram,0x01dce2d3) */

void FUN_01dce080(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong local_78;
  char local_70;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  lVar2 = (longlong)unaff_ESI;
  lVar1 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + lVar2 * 8);
  if (lVar1 == 0) {
    local_58 = 0;
  }
  else {
    FUN_00d50b00();
    local_58 = lVar1;
  }
  FUN_00d23620();
  local_40 = local_58;
  FUN_00d23370(param_1,param_2);
  if (*(int *)(unaff_RDI[0x2f] + 0xc) == 0) {
    bVar3 = false;
    local_50 = 0;
  }
  else {
    local_50 = *(longlong *)(*(longlong *)(unaff_RDI[0x2f] + 0x10) + lVar2 * 8);
    bVar3 = local_50 == 0;
    if (bVar3) {
      local_50 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar3 = !bVar3;
    FUN_00d23620();
    local_40 = local_50;
    FUN_00d23370(param_1,param_2);
  }
  if (((char)unaff_RDI[0x4f] == '\0') || (*(int *)(unaff_RDI[0x51] + 0xc) == 0)) {
    bVar4 = false;
    local_48 = 0;
  }
  else {
    local_48 = *(longlong *)(*(longlong *)(unaff_RDI[0x51] + 0x10) + lVar2 * 8);
    bVar4 = local_48 == 0;
    if (bVar4) {
      local_48 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar4 = !bVar4;
    FUN_00d23620();
    local_40 = local_48;
    FUN_00d23370(param_1,param_2);
  }
  (**(code **)(*unaff_RDI + 0xa20))(param_1,0);
  (**(code **)(*unaff_RDI + 0x620))();
  FUN_01e42030();
  if (local_40 == 0) {
    bVar5 = false;
  }
  else {
    FUN_01e4c160();
    bVar5 = local_78 != 0;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (bVar5) {
    FUN_01e42030();
    FUN_01d86b20();
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}


