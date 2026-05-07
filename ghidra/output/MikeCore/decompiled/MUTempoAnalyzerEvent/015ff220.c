// Function: FUN_015ff220
// Address: 015ff220
// Size: 530 bytes
// Class: MUTempoAnalyzerEvent


void FUN_015ff220(undefined8 param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  
  ___bzero();
  fVar7 = DAT_0241c3ec;
  fVar6 = DAT_0239011c;
  iVar14 = 10;
  if (param_2 < 10) {
    iVar14 = param_2;
  }
  if (0 < iVar14) {
    lVar2 = *(longlong *)(*unaff_RSI + 0x10);
    lVar13 = 0;
    do {
      fVar1 = *(float *)(lVar2 + lVar13 * 4);
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        uVar4 = (uint)lVar13;
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        iVar12 = 1;
        do {
          if (7 < iVar12 - 3U) {
switchD_015ff412_caseD_4:
            uVar8 = uVar4;
            goto switchD_015ff412_caseD_3;
          }
          uVar10 = (uint)(byte)((char)(uVar4 + 10) + ((byte)((uVar4 + 10 & 0xff) / 3) & 0xfc) * -3);
          fVar16 = (fVar1 / fVar7) * fVar6;
          uVar8 = (uint)(byte)((char)(uVar4 + 7) + ((byte)((uVar4 + 7 & 0xff) / 3) & 0xfc) * -3);
          switch(iVar12) {
          case 4:
          case 8:
            goto switchD_015ff412_caseD_4;
          case 5:
          case 10:
            uVar8 = (uint)(byte)((char)(uVar4 + 4) + ((byte)((uVar4 + 4 & 0xff) / 3) & 0xfc) * -3);
            break;
          case 7:
            goto switchD_015ff412_caseD_7;
          case 9:
            uVar8 = (uint)(byte)((char)(uVar4 + 2) + ((byte)((uVar4 + 2 & 0xff) / 3) & 0xfc) * -3);
          }
switchD_015ff412_caseD_3:
          uVar10 = uVar8;
          fVar16 = fVar1 / (float)iVar12;
switchD_015ff412_caseD_7:
          iVar9 = uVar10 * 7;
          iVar9 = iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f)) * -0xc;
          iVar9 = (iVar9 >> 0x1f & 0xcU) + iVar9;
          iVar5 = iVar9 * 2;
          lVar11 = (longlong)
                   (int)(iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 2) - (iVar5 >> 0x1f)) *
                                 -0x18);
          *(float *)(lVar3 + lVar11 * 4) = *(float *)(lVar3 + lVar11 * 4) + fVar16;
          iVar9 = iVar9 * 2 + 0x11;
          lVar11 = (longlong)
                   (int)(iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 2) - (iVar9 >> 0x1f)) *
                                 -0x18);
          *(float *)(lVar3 + lVar11 * 4) = fVar16 + *(float *)(lVar3 + lVar11 * 4);
          bVar15 = iVar12 != iVar14;
          iVar12 = iVar12 + 1;
        } while (bVar15);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0xc);
  }
  FUN_015ff460();
  return;
}


