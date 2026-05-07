// Function: FUN_01d4a550
// Address: 01d4a550
// Size: 1285 bytes
// Class: GNGraphicsContextState


/* WARNING: Removing unreachable block (ram,0x01d4a5f8) */
/* WARNING: Removing unreachable block (ram,0x01d4a605) */

void FUN_01d4a550(float param_1,float param_2,float param_3,float param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  float *in_RDX;
  longlong lVar9;
  longlong *unaff_RDI;
  longlong *in_R8;
  int iVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float in_XMM4_Da;
  
  if ((param_1 != DAT_02390124) || (NAN(param_1) || NAN(DAT_02390124))) {
    fVar14 = *(float *)(unaff_RDI[8] + 0xc);
    if ((DAT_028b8158 == (undefined8 *)0x0) || (DAT_028b8161 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b8158 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_025683c0;
        (*DAT_025683d8)();
        FUN_00c92170();
        FUN_00c92160();
        if (DAT_028b8158 == puVar6) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          bVar3 = true;
          bVar2 = true;
          bVar12 = DAT_028b8158 != (undefined8 *)0x0;
          DAT_028b8158 = puVar6;
          if (bVar12) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b8160 == '\0') {
          DAT_028b8160 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        DAT_028b8161 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b8161 = '\x01';
        FUN_00e8cb70();
      }
    }
    uVar5 = *(uint *)(*in_R8 + 0xc);
    iVar10 = *(int *)(DAT_028b8158 + 3);
    iVar11 = iVar10 + 3;
    if (-1 < iVar10) {
      iVar11 = iVar10;
    }
    if (iVar11 >> 2 < (int)uVar5) {
      FUN_00c8e340(iVar11 >> 2,0);
    }
    lVar1 = DAT_028b8158[2];
    if (0 < (int)uVar5) {
      iVar10 = ((int)(fVar14 * DAT_02394220) & 0xffU) * 0x10000;
      pcVar7 = (code *)unaff_RDI[3];
      if (pcVar7 == (code *)0x0) {
        lVar9 = *(longlong *)(*in_R8 + 0x10);
        uVar8 = 0;
        do {
          uVar4 = *(uint *)(*(longlong *)(lVar9 + uVar8 * 8) + 0xc);
          *(uint *)(lVar1 + uVar8 * 4) =
               uVar4 >> 0x10 & 0xff | (uVar4 & 0xff) << 0x10 | uVar4 & 0xff00 |
               (uVar4 >> 0x18) * iVar10 & 0xff000000;
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
      else {
        lVar9 = 0;
        while( true ) {
          uVar4 = *(uint *)(*(longlong *)(*(longlong *)(*in_R8 + 0x10) + lVar9 * 8) + 0xc);
          if (pcVar7 != (code *)0x0) {
            uVar4 = (*pcVar7)();
          }
          *(uint *)(lVar1 + lVar9 * 4) =
               uVar4 >> 0x10 & 0xff | (uVar4 & 0xff) << 0x10 | uVar4 & 0xff00 |
               (uVar4 >> 0x18) * iVar10 & 0xff000000;
          if ((ulonglong)uVar5 - 1 == lVar9) break;
          pcVar7 = (code *)unaff_RDI[3];
          lVar9 = lVar9 + 1;
        }
      }
    }
    fVar14 = *in_RDX;
    fVar16 = in_RDX[2] + fVar14 + DAT_02390d00;
    fVar13 = (float)(**(code **)(*unaff_RDI + 0x428))();
    uVar5 = FUN_00e7d780(fVar13 * (float)((int)fVar14 + -2));
    fVar13 = (float)(**(code **)(*unaff_RDI + 0x428))();
    iVar10 = FUN_00e7d780(fVar13 * (float)((int)(fVar16 - fVar14) + 4));
    fVar14 = (float)(**(code **)(*unaff_RDI + 0x428))();
    FUN_00e7d780(fVar14 * param_3);
    fVar14 = (float)(**(code **)(*unaff_RDI + 0x428))();
    FUN_00e7d780(fVar14 * param_4);
    fVar14 = 0.0;
    if ((0.0 <= in_XMM4_Da) && (fVar14 = in_XMM4_Da, DAT_02390124 < in_XMM4_Da)) {
      fVar14 = DAT_02390124;
    }
    uVar5 = (int)uVar5 >> 0x1f & uVar5;
    iVar11 = iVar10 + uVar5;
    if (iVar11 != 0 && SCARRY4(iVar10,uVar5) == iVar11 < 0) {
      if (0x200 < iVar11) {
        do {
          uVar15 = (**(code **)(*unaff_RDI + 0x428))();
          FUN_01d494d0(param_1,param_2,uVar15,fVar14);
          bVar2 = 0x400 < iVar11;
          iVar11 = iVar11 + -0x200;
        } while (bVar2);
      }
      uVar15 = (**(code **)(*unaff_RDI + 0x428))();
      FUN_01d494d0(param_1,param_2,uVar15,fVar14);
    }
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*in_R8 + 0x10) +
             (longlong)(int)param_2 * (longlong)*(int *)(*in_R8 + 0xc) * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x3a0))();
  }
  return;
}


