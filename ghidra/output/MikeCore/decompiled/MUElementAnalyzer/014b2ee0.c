// Function: FUN_014b2ee0
// Address: 014b2ee0
// Size: 949 bytes
// Class: MUElementAnalyzer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014b2ee0(double param_1,double param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong in_RCX;
  longlong *plVar6;
  int iVar7;
  longlong in_RDX;
  longlong unaff_RSI;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float *local_res8;
  float *local_res10;
  
  iVar7 = 0;
  fVar14 = 0.0;
  fVar10 = DAT_0240e35c;
  do {
    plVar6 = &DAT_02802ee0;
    if (iVar7 == 6) {
      plVar6 = &DAT_02802ee8;
    }
    if (iVar7 == 0) {
      plVar6 = &DAT_02802ed8;
    }
    lVar1 = *plVar6;
    dVar15 = (double)((float)(1 << (0xcU - (char)iVar7 & 0x1f)) * fVar10) * param_2;
    dVar12 = dVar15 * _DAT_0240e408 * DAT_023942d0 + param_1;
    dVar16 = 0.0;
    if (0.0 <= dVar12) {
      dVar16 = dVar12;
    }
    uVar2 = (uint)(dVar15 + DAT_0240de78);
    uVar9 = 0;
    if (-1 < (int)uVar2) {
      uVar9 = uVar2;
    }
    dVar13 = (double)___bzero();
    dVar12 = DAT_023942d0;
    if (uVar9 == 1) {
      lVar3 = 0;
      do {
        dVar13 = dVar16 + dVar12;
        if (in_RCX <= (longlong)dVar13) break;
        *(undefined4 *)(param_4 + lVar3 * 4) = *(undefined4 *)(in_RDX + (longlong)dVar13 * 4);
        dVar13 = dVar16 + dVar15 + dVar12;
        if (in_RCX <= (longlong)dVar13) break;
        uVar9 = *(uint *)(in_RDX + (longlong)dVar13 * 4);
        dVar13 = (double)(ulonglong)uVar9;
        *(uint *)(param_4 + 4 + lVar3 * 4) = uVar9;
        dVar16 = dVar16 + dVar15 + dVar15;
        lVar3 = lVar3 + 2;
      } while (lVar3 != 0x100);
    }
    else if ((int)uVar2 < 1) {
      lVar3 = (longlong)dVar16;
      if (lVar3 <= in_RCX + -2) {
        uVar8 = 0;
        do {
          dVar13 = (double)(ulonglong)(uint)(float)(dVar16 - (double)lVar3);
          fVar10 = *(float *)(in_RDX + lVar3 * 4);
          *(float *)(param_4 + uVar8 * 4) =
               (*(float *)(in_RDX + 4 + lVar3 * 4) - fVar10) * (float)(dVar16 - (double)lVar3) +
               fVar10;
          if (0xfe < uVar8) break;
          dVar16 = dVar16 + dVar15;
          uVar8 = uVar8 + 1;
          lVar3 = (longlong)dVar16;
        } while (lVar3 <= in_RCX + -2);
      }
    }
    else {
      lVar3 = (longlong)dVar16;
      if (lVar3 <= (longlong)(~(ulonglong)uVar9 + in_RCX)) {
        fVar10 = DAT_02390124 / (float)(int)uVar9;
        dVar13 = (double)(ulonglong)(uint)fVar10;
        uVar8 = 0;
        do {
          fVar11 = 0.0;
          if (2 < uVar9 - 1) {
            fVar11 = 0.0;
            iVar5 = -(uVar9 & 0xfffffffc);
            do {
              fVar11 = fVar11 + *(float *)(in_RDX + lVar3 * 4) + *(float *)(in_RDX + 4 + lVar3 * 4)
                       + *(float *)(in_RDX + 8 + lVar3 * 4) + *(float *)(in_RDX + 0xc + lVar3 * 4);
              lVar3 = lVar3 + 4;
              iVar5 = iVar5 + 4;
            } while (iVar5 != 0);
          }
          if ((uVar9 & 3) != 0) {
            lVar4 = 0;
            do {
              fVar11 = fVar11 + *(float *)(in_RDX + lVar3 * 4 + lVar4 * 4);
              lVar4 = lVar4 + 1;
            } while ((uVar9 & 3) != (uint)lVar4);
          }
          *(float *)(param_4 + uVar8 * 4) = fVar11 * fVar10;
          if (0xfe < uVar8) break;
          dVar16 = dVar16 + dVar15;
          uVar8 = uVar8 + 1;
          lVar3 = (longlong)dVar16;
        } while (lVar3 <= (longlong)(~(ulonglong)uVar9 + in_RCX));
      }
    }
    FUN_00e3daa0(dVar13,local_res8);
    lVar3 = DAT_02802ed0;
    fVar10 = DAT_0240e35c;
    fVar11 = *local_res8 * DAT_0240e35c;
    lVar4 = 1;
    do {
      *(float *)(unaff_RSI + -4 + lVar4 * 4) =
           local_res8[*(int *)(lVar3 + -4 + lVar4 * 4)] * *(float *)(lVar1 + -4 + lVar4 * 4) +
           *(float *)(unaff_RSI + -4 + lVar4 * 4);
      *(float *)(unaff_RSI + lVar4 * 4) =
           local_res8[*(int *)(lVar3 + lVar4 * 4)] * *(float *)(lVar1 + lVar4 * 4) +
           *(float *)(unaff_RSI + lVar4 * 4);
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0x79);
    fVar14 = fVar14 + fVar11;
    iVar7 = iVar7 + 1;
    unaff_RSI = unaff_RSI + 0xf0;
    if (iVar7 == 7) {
      if (local_res10 != (float *)0x0) {
        *local_res10 = fVar14 / DAT_0241c3ec;
      }
      return;
    }
  } while( true );
}


