// Function: FUN_019c3480
// Address: 019c3480
// Size: 713 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019c36fb) */
/* WARNING: Removing unreachable block (ram,0x019c3708) */
/* WARNING: Removing unreachable block (ram,0x019c3649) */
/* WARNING: Removing unreachable block (ram,0x019c3670) */
/* WARNING: Removing unreachable block (ram,0x019c364b) */
/* WARNING: Removing unreachable block (ram,0x019c3674) */

undefined8 FUN_019c3480(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *unaff_RDI;
  pthread_key_t pVar9;
  ulonglong uVar10;
  double dVar11;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  int local_48;
  int local_34;
  
  lVar2 = *unaff_RDI;
  iVar1 = *(int *)(lVar2 + 0xc);
  if (0 < *(int *)(lVar2 + 0xc)) {
    uVar10 = 0;
    local_34 = 0;
    do {
      lVar4 = local_60;
      pVar9 = (pthread_key_t)uVar10;
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar10 * 8);
      pVar7 = pVar9;
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      FUN_012e9900(dVar11 + DAT_0241b698,DAT_0241b6a0);
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        do {
          lVar8 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar4 + 0xc) <= local_48) goto LAB_019c3724;
          local_60 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 8 + lVar8 * 8);
        } while ((lVar3 == local_60) || (cVar5 = FUN_019c32a0(), cVar5 == '\0'));
        local_34 = local_34 + 1;
LAB_019c3724:
        FUN_001159b0();
        FUN_00d50b20();
      }
      if (local_34 == iVar1) {
        FUN_001159b0();
        return 1;
      }
      uVar10 = (ulonglong)(pVar9 + 1);
    } while ((int)(pVar9 + 1) < *(int *)(lVar2 + 0xc));
  }
  FUN_001159b0();
  return 0;
}


