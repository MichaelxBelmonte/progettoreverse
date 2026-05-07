// Function: FUN_012ea6f0
// Address: 012ea6f0
// Size: 621 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012ea8fe) */
/* WARNING: Removing unreachable block (ram,0x012ea90b) */

undefined8 * FUN_012ea6f0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t in_ECX;
  code *pcVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar8;
  longlong lVar9;
  
  if ((char)unaff_RSI[0x28] != '\0') {
    (**(code **)(*unaff_RSI + 0x1a0))();
  }
  lVar9 = unaff_RSI[0x27];
  if (lVar9 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar9 = unaff_RSI[0x27];
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar9 + 0x38) != '\0') {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015298a0(param_1,param_2);
      return unaff_RDI;
    }
  }
  pcVar2 = DAT_02572370;
  lVar9 = unaff_RSI[0x16];
  if (lVar9 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    if (*(int *)(lVar9 + 0xc) < 1) {
      bVar1 = false;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      iVar8 = 0;
      puVar6 = (undefined8 *)0x0;
      bVar1 = false;
      pcVar7 = DAT_02572370;
      do {
        pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01275500(param_1,param_2);
        if (cVar3 != '\0') {
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &DAT_02572358;
            (*pcVar2)();
            bVar1 = true;
          }
          pcVar7 = (code *)0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar9 + 0xc));
    }
    FUN_001159b0();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1) goto LAB_012ea952;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_012ea952;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_012ea952:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


