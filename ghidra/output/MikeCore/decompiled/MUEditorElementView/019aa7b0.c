// Function: FUN_019aa7b0
// Address: 019aa7b0
// Size: 949 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019aa8a8) */
/* WARNING: Removing unreachable block (ram,0x019aa8b1) */
/* WARNING: Removing unreachable block (ram,0x019aab3c) */
/* WARNING: Removing unreachable block (ram,0x019aab48) */
/* WARNING: Removing unreachable block (ram,0x019aa921) */
/* WARNING: Removing unreachable block (ram,0x019aa92d) */
/* WARNING: Removing unreachable block (ram,0x019aa837) */
/* WARNING: Removing unreachable block (ram,0x019aa860) */
/* WARNING: Removing unreachable block (ram,0x019aa839) */
/* WARNING: Removing unreachable block (ram,0x019aa862) */
/* WARNING: Removing unreachable block (ram,0x019aa9b7) */
/* WARNING: Removing unreachable block (ram,0x019aa9c0) */

undefined8 * FUN_019aa7b0(longlong param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar10;
  longlong local_80;
  char local_78;
  int local_58;
  
  pcVar3 = DAT_02572370;
  lVar9 = unaff_RSI[0x3e];
  if (*(int *)(lVar9 + 0xc) == 0) {
    bVar2 = false;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    local_58 = -1;
    bVar2 = false;
    puVar6 = (undefined8 *)0x0;
    while (local_58 = local_58 + 1, local_58 < *(int *)(lVar9 + 0xc)) {
      pVar8 = (pthread_key_t)*(undefined8 *)(lVar9 + 0x10);
      cVar4 = FUN_00d23d70();
      if (cVar4 == '\0') {
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_02572358;
          (*pcVar3)();
          bVar2 = true;
        }
        cVar4 = (**(code **)(*unaff_RSI + 0x9a0))();
        if (cVar4 != '\0') {
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d214d0();
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_000be170();
    param_1 = lVar9;
  }
  iVar5 = (**(code **)(*unaff_RSI + 0x9f0))();
  if (((puVar6 != (undefined8 *)0x0) && (iVar5 != 0)) && (0 < *(int *)((longlong)puVar6 + 0xc))) {
    uVar10 = (ulonglong)(*(int *)((longlong)puVar6 + 0xc) - 1);
    if (iVar5 == 1) {
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        if (cVar4 != '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
    else {
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        if (cVar4 == '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
  }
  if ((puVar6 != (undefined8 *)0x0) && (param_2 != '\0')) {
    (**(code **)(&UNK_00001630 + *unaff_RSI))();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar2) && (puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


