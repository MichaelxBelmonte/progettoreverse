// Function: FUN_00b5af60
// Address: 00b5af60
// Size: 536 bytes
// Class: GNMidiFileTrack


/* WARNING: Removing unreachable block (ram,0x00b5afaa) */
/* WARNING: Removing unreachable block (ram,0x00b5b03a) */
/* WARNING: Removing unreachable block (ram,0x00b5b043) */
/* WARNING: Removing unreachable block (ram,0x00b5b090) */
/* WARNING: Removing unreachable block (ram,0x00b5b0b0) */
/* WARNING: Removing unreachable block (ram,0x00b5b092) */
/* WARNING: Removing unreachable block (ram,0x00b5b0b2) */
/* WARNING: Removing unreachable block (ram,0x00b5afb0) */
/* WARNING: Removing unreachable block (ram,0x00b5afd0) */
/* WARNING: Removing unreachable block (ram,0x00b5afb2) */
/* WARNING: Removing unreachable block (ram,0x00b5afd2) */

void FUN_00b5af60(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong unaff_RDI;
  longlong *local_58;
  int local_40;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (*(int *)(lVar1 + 0xc) == 0) {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      *(undefined8 *)(unaff_RDI + 0x18) = 0;
      FUN_00d50b20();
      return;
    }
  }
  else {
    local_58 = (longlong *)0x0;
    local_40 = -1;
    while( true ) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      (**(code **)(*local_58 + 0x370))();
    }
    FUN_00b671d0();
    FUN_00c8e690();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    lVar1 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar1 != 0) {
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        pvVar5 = *(void **)(lVar1 + 0x10);
        plVar2 = *(longlong **)((longlong)pvVar5 + lVar4 * 8 + 8);
        iVar3 = (**(code **)(*plVar2 + 0x370))();
        (**(code **)(*plVar2 + 0x378))();
        _memcpy(pvVar5,(void *)(longlong)iVar3,param_3);
      }
      FUN_00b671d0();
    }
    plVar2 = *(longlong **)(unaff_RDI + 0x18);
    if (plVar2 != local_58) {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x18) = local_58;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


