// Function: FUN_00c364b0
// Address: 00c364b0
// Size: 869 bytes
// Class: GNOverloudTapedesk


/* WARNING: Removing unreachable block (ram,0x00c366d8) */
/* WARNING: Removing unreachable block (ram,0x00c366e1) */
/* WARNING: Removing unreachable block (ram,0x00c36631) */
/* WARNING: Removing unreachable block (ram,0x00c3663a) */
/* WARNING: Removing unreachable block (ram,0x00c364ea) */
/* WARNING: Removing unreachable block (ram,0x00c364f6) */
/* WARNING: Removing unreachable block (ram,0x00c365bc) */
/* WARNING: Removing unreachable block (ram,0x00c365cc) */
/* WARNING: Removing unreachable block (ram,0x00c36691) */
/* WARNING: Removing unreachable block (ram,0x00c3669a) */
/* WARNING: Removing unreachable block (ram,0x00c3671f) */
/* WARNING: Removing unreachable block (ram,0x00c36728) */
/* WARNING: Removing unreachable block (ram,0x00c36547) */
/* WARNING: Removing unreachable block (ram,0x00c36570) */
/* WARNING: Removing unreachable block (ram,0x00c36549) */
/* WARNING: Removing unreachable block (ram,0x00c36572) */

void FUN_00c364b0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_40;
  
  FUN_01cc9350();
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar1 != 0) {
    local_40 = -1;
    while( true ) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8) + 0xa20))();
    }
    FUN_007f7b50();
  }
  FUN_00d216c0();
  FUN_01ccad60();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_00d21140();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x60) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0xa20))();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_027ef7e8;
        if (DAT_027ef7e8 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar2 + 0xa10))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_007f7b50();
  }
  return;
}


