// Function: FUN_016450a0
// Address: 016450a0
// Size: 715 bytes
// Class: Unknown


void FUN_016450a0(double param_1,float param_2,double param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  pthread_key_t pVar8;
  ulonglong in_RCX;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *in_R8;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 local_68;
  
  plVar9 = (longlong *)*unaff_RSI;
  pVar7 = (pthread_key_t)in_RCX;
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar9 = (longlong *)*unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  dVar15 = (double)(**(code **)(*plVar9 + 0x370))();
  iVar12 = (int)(((uint)(in_RCX >> 0x1f) & 1) + pVar7) >> 1;
  iVar2 = FUN_00e7d850(param_3);
  local_68 = *(undefined8 *)(*in_R8 + 0x10);
  lVar6 = *param_4;
  lVar1 = *(longlong *)(lVar6 + 0x10);
  plVar9 = (longlong *)*unaff_RSI;
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
  pVar8 = (pthread_key_t)lVar6;
  if (pvVar5 != (void *)0x0) {
    plVar9 = (longlong *)*unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  plVar10 = (longlong *)*unaff_RSI;
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    plVar10 = (longlong *)*unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  uVar3 = (**(code **)(*plVar10 + 0x3a0))();
  uVar16 = (**(code **)(*plVar9 + 0x388))
                     (DAT_0238fee8 / param_3,&local_68,uVar3,
                      (longlong)(param_1 * dVar15) - (longlong)(iVar2 * iVar12));
  FUN_00e83530(uVar16,local_68);
  iVar2 = *(int *)(*unaff_RDI + 0x18);
  iVar4 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  if ((3 < iVar2) && (**(undefined4 **)(*unaff_RDI + 0x10) = 0, 7 < iVar2)) {
    uVar13 = 2;
    if (2 < iVar4 >> 2) {
      uVar13 = (ulonglong)(uint)(iVar4 >> 2);
    }
    uVar11 = 1;
    fVar18 = DAT_02394274;
    do {
      iVar2 = FUN_00e7d850((double)((float)(int)uVar11 * param_2) /
                           ((dVar15 / (double)(int)pVar7) / param_3));
      if (iVar2 < iVar12) {
        iVar4 = iVar2 * 2;
        uVar16 = *(undefined8 *)(lVar1 + (longlong)iVar4 * 4);
        fVar18 = (float)uVar16;
        fVar14 = (float)((ulonglong)uVar16 >> 0x20);
        fVar18 = SQRT(fVar14 * fVar14 + fVar18 * fVar18) + DAT_0239424c;
        if (1 < iVar2) {
          uVar16 = *(undefined8 *)(lVar1 + (ulonglong)(iVar4 - 2) * 4);
          fVar14 = (float)uVar16;
          fVar17 = (float)((ulonglong)uVar16 >> 0x20);
          fVar18 = fVar18 + SQRT(fVar17 * fVar17 + fVar14 * fVar14);
        }
        if (iVar2 < iVar12 + -1) {
          uVar16 = *(undefined8 *)(lVar1 + (longlong)(iVar4 + 2) * 4);
          fVar14 = (float)uVar16;
          fVar17 = (float)((ulonglong)uVar16 >> 0x20);
          fVar18 = fVar18 + SQRT(fVar17 * fVar17 + fVar14 * fVar14);
        }
      }
      *(float *)(*(longlong *)(*unaff_RDI + 0x10) + uVar11 * 4) = fVar18;
      uVar11 = uVar11 + 1;
    } while (uVar13 != uVar11);
  }
  return;
}


