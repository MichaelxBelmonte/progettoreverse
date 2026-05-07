// Function: FUN_017766f0
// Address: 017766f0
// Size: 547 bytes
// Class: GNInt


undefined4 FUN_017766f0(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  int unaff_ESI;
  longlong unaff_RDI;
  pthread_key_t pVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = *(int *)(unaff_RDI + 0x48);
  pVar7 = unaff_ESI + iVar1;
  if (*(char *)(unaff_RDI + 0x38) == '\0') {
    if (iVar1 + param_2 != pVar7) goto LAB_0177678c;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
    iVar4 = iVar2 + -1;
    do {
      pVar7 = pVar7 + iVar4;
    } while ((int)((1 - iVar2) + pVar7) < 0);
    do {
      pVar7 = pVar7 + (1 - iVar2);
    } while (iVar4 <= (int)pVar7);
    pVar8 = iVar1 + param_2;
    do {
      pVar8 = pVar8 + iVar4;
    } while ((int)((1 - iVar2) + pVar8) < 0);
    do {
      pVar8 = pVar8 + (1 - iVar2);
    } while (iVar4 <= (int)pVar8);
    if (pVar8 != pVar7) {
LAB_0177678c:
      lVar3 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01779ec0();
      fVar9 = fVar9 + param_1;
      if (*(char *)(unaff_RDI + 0x38) != '\0') {
        fVar10 = (float)FUN_017708f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar11 = (float)FUN_01779ec0();
        pvVar6 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar3 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar12 = (float)FUN_01779ec0();
        for (; fVar12 <= fVar9; fVar9 = fVar9 - fVar10) {
        }
        for (; fVar9 < fVar11; fVar9 = fVar9 + fVar10) {
        }
      }
      uVar5 = FUN_01771c60(fVar9);
      if ((char)uVar5 != '\0') {
        FUN_01776110();
      }
      if (lVar3 == 0) {
        return uVar5;
      }
      FUN_00d50b20();
      return uVar5;
    }
  }
  return 0;
}


