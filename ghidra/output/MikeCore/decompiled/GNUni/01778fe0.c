// Function: FUN_01778fe0
// Address: 01778fe0
// Size: 536 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x01779070) */
/* WARNING: Removing unreachable block (ram,0x01779079) */

undefined8 * FUN_01778fe0(pthread_key_t param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  
  plVar3 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  uVar1 = *(uint *)(local_48 + 0xc);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + uVar7 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_013faed0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar9 = (double)FUN_013faed0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_013faf20();
      pvVar4 = _pthread_getspecific(param_1);
      plVar6 = plVar3;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar6 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x418))(uVar8,dVar9 + dVar10);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


