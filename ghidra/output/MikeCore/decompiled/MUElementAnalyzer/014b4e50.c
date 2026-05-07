// Function: FUN_014b4e50
// Address: 014b4e50
// Size: 955 bytes
// Class: MUElementAnalyzer


void FUN_014b4e50(float param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong in_RCX;
  ulonglong uVar10;
  longlong *plVar11;
  uint unaff_ESI;
  float *unaff_RDI;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((0 < (int)unaff_ESI) && (0.0 < param_1)) {
    fVar16 = DAT_02390124 / param_1;
    iVar3 = (int)((float)(~-(uint)(param_1 < DAT_02390124) & (uint)param_1 |
                         -(uint)(param_1 < DAT_02390124) & (uint)fVar16) + DAT_0239011c);
    if ((iVar3 <= (int)unaff_ESI) || (param_1 < DAT_02390124)) {
      uVar8 = in_RCX;
      lVar4 = FUN_00aea550();
      uVar12 = (ulonglong)*(int *)(lVar4 + 0xc);
      iVar1 = *(int *)(lVar4 + 8);
      lVar13 = (longlong)iVar1;
      lVar2 = *(longlong *)(lVar4 + 0x10);
      plVar11 = (longlong *)*param_2;
      pvVar5 = _pthread_getspecific((pthread_key_t)uVar8);
      if (pvVar5 != (void *)0x0) {
        plVar11 = (longlong *)*param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      uVar10 = in_RCX & 0xffffffff;
      (**(code **)(*plVar11 + 0x468))(uVar10,0,iVar1);
      uVar8 = lVar13 + in_RCX;
      if (iVar3 == 1) {
        lVar6 = 0;
        do {
          if (in_RCX == uVar8) {
            plVar11 = (longlong *)*param_2;
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
            if (pvVar5 != (void *)0x0) {
              plVar11 = (longlong *)*param_2;
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar11 + 0x468))(in_RCX & 0xffffffff,0,iVar1);
            uVar8 = lVar13 + in_RCX;
          }
          uVar10 = in_RCX & uVar12;
          unaff_RDI[lVar6] = *(float *)(lVar2 + uVar10 * 4);
          in_RCX = in_RCX + 1;
          lVar6 = lVar6 + 1;
        } while (unaff_ESI != (uint)lVar6);
      }
      else if (DAT_02390124 <= param_1) {
        do {
          uVar10 = (ulonglong)unaff_ESI;
          fVar15 = 0.0;
          iVar9 = iVar3;
          do {
            if (in_RCX == uVar8) {
              plVar11 = (longlong *)*param_2;
              pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
              if (pvVar5 != (void *)0x0) {
                plVar11 = (longlong *)*param_2;
                lVar6 = FUN_00e8b990();
                if (lVar6 != 0) {
                  plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                }
              }
              (**(code **)(*plVar11 + 0x468))(in_RCX & 0xffffffff,0,iVar1);
              uVar8 = lVar13 + in_RCX;
            }
            uVar10 = in_RCX & uVar12;
            fVar15 = fVar15 + *(float *)(lVar2 + uVar10 * 4);
            in_RCX = in_RCX + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          *unaff_RDI = fVar15;
          unaff_RDI = unaff_RDI + 1;
          unaff_ESI = unaff_ESI - 1;
        } while (unaff_ESI != 0);
      }
      else {
        fVar15 = *(float *)(lVar2 + (uVar12 & in_RCX) * 4);
        in_RCX = in_RCX + 1;
        fVar14 = 0.0;
        lVar6 = 0;
        iVar9 = 0;
        fVar18 = fVar15;
        do {
          fVar17 = fVar18;
          if (iVar9 == 0) {
            if (in_RCX == uVar8) {
              plVar11 = (longlong *)*param_2;
              pvVar5 = _pthread_getspecific(0);
              if (pvVar5 != (void *)0x0) {
                plVar11 = (longlong *)*param_2;
                lVar7 = FUN_00e8b990();
                if (lVar7 != 0) {
                  plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
              }
              (**(code **)(*plVar11 + 0x468))(in_RCX & 0xffffffff,0,iVar1);
              uVar8 = in_RCX + lVar13;
            }
            fVar17 = *(float *)(lVar2 + (in_RCX & uVar12) * 4);
            in_RCX = in_RCX + 1;
            fVar14 = (fVar17 - fVar18) * param_1;
            fVar15 = fVar18;
            iVar9 = iVar3;
          }
          iVar9 = iVar9 + -1;
          unaff_RDI[lVar6] = fVar15;
          fVar15 = fVar15 + fVar14;
          lVar6 = lVar6 + 1;
          fVar18 = fVar17;
        } while (unaff_ESI != (uint)lVar6);
      }
      if ((param_3 != '\0') && (DAT_02390124 < param_1)) {
        (**(code **)(DAT_02786500 + 0x20))(fVar16);
      }
      if (lVar4 != 0) {
        FUN_00aea5b0();
        return;
      }
    }
  }
  return;
}


