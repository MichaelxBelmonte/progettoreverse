// Function: FUN_01c62da0
// Address: 01c62da0
// Size: 738 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c6301d) */
/* WARNING: Removing unreachable block (ram,0x01c6302a) */

undefined8 FUN_01c62da0(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  pthread_key_t in_ECX;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((((*(int *)(unaff_RDI + 0x1c8) == 1) && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) &&
      (iVar5 = FUN_01d3b620(), iVar5 == 2)) &&
     ((iVar5 = FUN_01d3b630(), iVar5 == 1 && (cVar4 = FUN_01c619e0(param_1), cVar4 == '\0')))) {
    FUN_00d50b00();
    FUN_01c427d0();
    lVar2 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_016cbba0();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(in_ECX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar3 = *(longlong **)(unaff_RDI + 0x170);
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar3 + 0x388))(param_1);
    cVar4 = FUN_016fdd30();
    FUN_00d50b20();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_01c4df60();
      FUN_01c62c70();
      if (*(longlong *)(unaff_RDI + 0x188) != 0) {
        FUN_00d50b00();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c1150();
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      FUN_01c429a0();
      FUN_00d50b20();
      uVar7 = 1;
      lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
      goto joined_r0x01c63077;
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    FUN_01c429a0();
    FUN_00d50b20();
  }
  uVar7 = 0;
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
joined_r0x01c63077:
  if (lVar2 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}


