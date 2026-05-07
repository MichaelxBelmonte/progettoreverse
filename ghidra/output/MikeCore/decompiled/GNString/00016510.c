// Function: FUN_00016510
// Address: 00016510
// Size: 761 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00016702) */
/* WARNING: Removing unreachable block (ram,0x0001670e) */
/* WARNING: Removing unreachable block (ram,0x000165d1) */
/* WARNING: Removing unreachable block (ram,0x000165dd) */
/* WARNING: Removing unreachable block (ram,0x0001664e) */
/* WARNING: Removing unreachable block (ram,0x0001665a) */
/* WARNING: Removing unreachable block (ram,0x000167c4) */
/* WARNING: Removing unreachable block (ram,0x000167cd) */
/* WARNING: Removing unreachable block (ram,0x0001680d) */
/* WARNING: Removing unreachable block (ram,0x0001681a) */
/* WARNING: Removing unreachable block (ram,0x00016773) */
/* WARNING: Removing unreachable block (ram,0x00016780) */
/* WARNING: Removing unreachable block (ram,0x00016730) */
/* WARNING: Removing unreachable block (ram,0x00016739) */

void FUN_00016510(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  int iVar3;
  longlong local_78;
  char local_70;
  longlong local_40;
  char local_38;
  
  *(undefined4 *)(unaff_RDI + 0x19) = 1;
  FUN_01e51420();
  FUN_000b6a40();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  (**(code **)(*unaff_RDI + 0x620))();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *param_2;
  lVar2 = unaff_RDI[0x17];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x17] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_000b6a40();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      iVar3 = 0;
      do {
        FUN_000b6c10();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_78 + 0xc));
    }
    FUN_00018280();
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x678))();
  (**(code **)(*unaff_RDI + 0x668))();
  return;
}


