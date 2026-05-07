// Function: FUN_0164bd30
// Address: 0164bd30
// Size: 1021 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0164c08e) */
/* WARNING: Removing unreachable block (ram,0x0164c097) */
/* WARNING: Removing unreachable block (ram,0x0164bf05) */
/* WARNING: Removing unreachable block (ram,0x0164bf0e) */
/* WARNING: Removing unreachable block (ram,0x0164becf) */
/* WARNING: Removing unreachable block (ram,0x0164bed8) */
/* WARNING: Removing unreachable block (ram,0x0164c058) */
/* WARNING: Removing unreachable block (ram,0x0164c061) */
/* WARNING: Removing unreachable block (ram,0x0164c0c4) */
/* WARNING: Removing unreachable block (ram,0x0164c0cd) */
/* WARNING: Removing unreachable block (ram,0x0164be20) */
/* WARNING: Removing unreachable block (ram,0x0164be02) */
/* WARNING: Removing unreachable block (ram,0x0164c135) */
/* WARNING: Removing unreachable block (ram,0x0164c142) */

undefined8 * FUN_0164bd30(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 *unaff_RDI;
  longlong lVar6;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar2 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar6 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar2 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar6 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013c8d80();
    }
    FUN_00115190();
    param_1 = lVar6;
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0079bdf0();
  (**(code **)(*plVar3 + 0x18))();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_010fbcf0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_01318520();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d214d0();
  if (0 < *(int *)(local_58 + 0xc)) {
    lVar6 = 0;
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar2 = *(longlong *)(*(longlong *)(local_58 + 0x10) + lVar6 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01646050();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(local_58 + 0xc));
  }
  lVar6 = *param_3;
  lVar2 = plVar3[0xe];
  if (lVar2 != lVar6) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    plVar3[0xe] = lVar6;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)plVar3[0xd];
  if (plVar1 != plVar4) {
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar3[0xd] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d243f0();
  FUN_00d243f0();
  FUN_00d243f0();
  (**(code **)(*plVar3 + 0x398))();
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


