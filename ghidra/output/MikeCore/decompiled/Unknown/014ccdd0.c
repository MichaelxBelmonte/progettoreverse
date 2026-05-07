// Function: FUN_014ccdd0
// Address: 014ccdd0
// Size: 749 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x014cce7f) */
/* WARNING: Removing unreachable block (ram,0x014cce88) */
/* WARNING: Removing unreachable block (ram,0x014ccfa6) */
/* WARNING: Removing unreachable block (ram,0x014ccfaf) */

void FUN_014ccdd0(pthread_key_t param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong *local_40;
  char local_38;
  
  if (unaff_RSI[0x25] != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c3190();
    iVar4 = *(int *)((longlong)local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar4 != 0) {
      (**(code **)(*unaff_RSI + 0x378))();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      pvVar2 = _pthread_getspecific(param_1);
      plVar5 = local_40;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      dVar6 = (double)(**(code **)(*plVar5 + 0x370))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018c3190();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_018c2fb0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_018c3150();
      iVar1 = (int)(((double)param_2 / dVar6 - dVar7) / dVar8);
      iVar4 = 0;
      if (-1 < iVar1) {
        iVar4 = iVar1;
      }
      iVar1 = *(int *)((longlong)local_40 + 0xc) + -1;
      if (iVar4 < *(int *)((longlong)local_40 + 0xc)) {
        iVar1 = iVar4;
      }
      lVar3 = *(longlong *)(local_40[2] + (longlong)iVar1 * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


