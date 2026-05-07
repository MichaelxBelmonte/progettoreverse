// Function: FUN_01e2f200
// Address: 01e2f200
// Size: 833 bytes
// Class: GNClassDescription


/* WARNING: Removing unreachable block (ram,0x01e2f4af) */
/* WARNING: Removing unreachable block (ram,0x01e2f4b8) */
/* WARNING: Removing unreachable block (ram,0x01e2f385) */
/* WARNING: Removing unreachable block (ram,0x01e2f391) */
/* WARNING: Removing unreachable block (ram,0x01e2f36e) */
/* WARNING: Removing unreachable block (ram,0x01e2f377) */
/* WARNING: Removing unreachable block (ram,0x01e2f247) */
/* WARNING: Removing unreachable block (ram,0x01e2f253) */
/* WARNING: Removing unreachable block (ram,0x01e2f2e5) */
/* WARNING: Removing unreachable block (ram,0x01e2f2ee) */
/* WARNING: Removing unreachable block (ram,0x01e2f419) */
/* WARNING: Removing unreachable block (ram,0x01e2f431) */
/* WARNING: Removing unreachable block (ram,0x01e2f4f3) */
/* WARNING: Removing unreachable block (ram,0x01e2f4fc) */

void FUN_01e2f200(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong unaff_RDI;
  longlong *local_80;
  char local_78;
  longlong *local_48;
  
  FUN_00d21140();
  lVar2 = DAT_028b9590;
  if (DAT_028b9590 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_80 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    bVar3 = 0;
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_78 = '\0';
    }
    bVar3 = FUN_00c9ff50();
    bVar3 = bVar3 ^ 1;
    local_48 = local_80;
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3 != 0) && (FUN_00ca0840(), lVar2 = DAT_027f3818, *(char *)(unaff_RDI + 0x38) != '\0')) {
    if (DAT_027f3818 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_48 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      plVar1 = (longlong *)*param_2;
      FUN_00d46300();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027f3848;
      if (DAT_027f3848 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x80))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x30) != 0) {
    FUN_00d50b00();
    FUN_00ca0e70();
    FUN_00d50b20();
    if (*(longlong *)(unaff_RDI + 0x30) != 0) {
      *(undefined8 *)(unaff_RDI + 0x30) = 0;
      FUN_00d50b20();
    }
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


