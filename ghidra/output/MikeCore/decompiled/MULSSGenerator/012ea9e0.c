// Function: FUN_012ea9e0
// Address: 012ea9e0
// Size: 677 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012eac21) */
/* WARNING: Removing unreachable block (ram,0x012eac2e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_012ea9e0(double param_1,double param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t in_ECX;
  code *pcVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar9;
  ulonglong uVar10;
  
  uVar10 = ~-(ulonglong)(param_2 < 0.0) & (ulonglong)param_1 |
           (ulonglong)(param_1 + param_2) & -(ulonglong)(param_2 < 0.0);
  if (param_2 < 0.0) {
    param_2 = (double)((ulonglong)param_2 ^ _DAT_023945b0);
  }
  if ((char)unaff_RSI[0x28] != '\0') {
    (**(code **)(*unaff_RSI + 0x1a0))();
  }
  lVar8 = unaff_RSI[0x27];
  if (lVar8 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar8 = unaff_RSI[0x27];
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar8 + 0x38) != '\0') {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01529c50(uVar10,param_2);
      return unaff_RDI;
    }
  }
  pcVar2 = DAT_02572370;
  lVar8 = unaff_RSI[0x16];
  if (lVar8 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar1 = false;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      iVar9 = 0;
      puVar6 = (undefined8 *)0x0;
      bVar1 = false;
      pcVar7 = DAT_02572370;
      do {
        pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01275530(uVar10,param_2);
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
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar8 + 0xc));
    }
    FUN_001159b0();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1) goto LAB_012eac75;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_012eac75;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_012eac75:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


